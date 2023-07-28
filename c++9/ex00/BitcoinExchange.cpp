/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:23:25 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 02:39:22 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::ifstream   dataFile;
	std::string		line;

	dataFile.open("data.csv");
	if (!dataFile.is_open())
	{
		std::cout << "Error: could not open data file." << std::endl;
		return;
	}
	std::getline(dataFile, line);
	while (std::getline(dataFile, line))
	{
		std::string date = line.substr(0, line.find(','));
		float value = std::atof(line.substr(line.find(',') + 1).c_str());
		this->_data[date] = value;
	}
	return ;
}

BitcoinExchange::BitcoinExchange(std::string filename){
	std::ifstream dataFile;
	std::string line;

	dataFile.open(filename);
	if (!dataFile.is_open())
	{
		std::cout << "Error: could not open data file." << std::endl;
		return;
	}
	std::getline(dataFile, line);
	while (std::getline(dataFile, line))
	{
		std::string date = line.substr(0, line.find(','));
		float value = std::atof(line.substr(line.find(',') + 1).c_str());
		this->_data[date] = value;
	}
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &lhs){
	*this = lhs;
	return ;
}

BitcoinExchange::~BitcoinExchange(){
	return ;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs){
	if (this != &rhs)
		this->_data = rhs._data;
	return *this;
}

void BitcoinExchange::bitcoinValues(std::string filename){
	std::ifstream	inputFile;
	std::string		line;
	std::string		date;
	std::string		value;
	
	inputFile.open(filename);
	if (!inputFile.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return ;
	}
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		size_t pos = line.find('|');
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}

		date = line.substr(0, pos);
		if (!this->checkDate(date))
			continue ;
	
		value = line.substr(pos + 1);
		if (!this->checkValue(value))
			continue ;

		if (this->getPrice(date, value) == -1)
		{
			std::cout << "Error: bitcoin value not found for date: => " << date << std::endl;
			continue ;		
		}
		std::cout << date << " => " << value << " = " << this->getPrice(date, value) << std::endl;
	}
}

bool BitcoinExchange::checkDate(std::string date){
	int year;
	int month;
	int day;
	
	std::string tmp;

	this->strTrim(date);
	tmp = date.substr(0,  date.find('-'));
	if (tmp.length() != 4 || tmp.find_first_not_of("0123456789") != std::string::npos || std::atoi(tmp.c_str()) < 2009)
		return this->printError("Error: bad date => " + date + " (year must be >= 2009)");
	year = std::atoi(tmp.c_str());
	date.erase(0, date.find('-') + 1);

	tmp = date.substr(0, date.find('-'));
	if (tmp.length() != 2 || tmp.find_first_not_of("0123456789") != std::string::npos || std::atoi(tmp.c_str()) < 1 || std::atoi(tmp.c_str()) > 12)
		return this->printError("Error: bad date => " + date + " (month must be between 1 and 12)");
	month = std::atoi(tmp.c_str());
	date.erase(0, 3);

	if (date.length() != 2 || date.find_first_not_of("0123456789") != std::string::npos || std::atoi(date.c_str()) < 1)
		return this->printError("Error: bad date => " + date + " (day must be >= 1)");
	day = std::atoi(date.c_str());
		
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day < 1 || day > 31)
				return this->printError("Error: bad date => " + date + " (day must be between 1 and 31)");
			break ;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day < 1 || day > 30)
				return this->printError("Error: bad date => " + date + " (day must be between 1 and 30)");
			break ;
		case 2:
			if (!(year % 4)&& day > 29){
				return this->printError("Error: bad date => " + date + " (day must be between 1 and 29)");
			}
			else if ((year % 4) && day > 28){
				return this->printError("Error: bad date => " + date + " (day must be between 1 and 28)");
			}
	}
	return true;
}

bool BitcoinExchange::checkValue(std::string value){
	
	this->strTrim(value);

	if (value.find_first_not_of("0123456789.") != std::string::npos)
	{
		if (std::atof(value.c_str()) < 0)
			return this->printError("Error: not a positive number.");
		return this->printError("Error: bad value => " + value);
	}
	if (value.find('.') != value.rfind('.'))
		return this->printError("Error: bad value => " + value);
	if (std::atof(value.c_str()) > 1000)
		return this->printError("Error: too large a number");
	
	return true;
}

void BitcoinExchange::strTrim(std::string &str){
	const std::string WHITESPACE = " \n\r\t\f\v";

	size_t pos = str.find_first_not_of(WHITESPACE);
	if (pos != std::string::npos)
		str = str.substr(pos);
	pos = str.find_last_not_of(WHITESPACE);
	if (pos != std::string::npos)
		str = str.substr(0, pos + 1);
}

float BitcoinExchange::getPrice(std::string &date, std::string &value){
	std::string tmp = date;

	if (this->_data.find(date) == this->_data.end())
	{
		std::map<std::string, float>::iterator it = this->_data.lower_bound(date);
		if (it != this->_data.begin())
			tmp = (--it)->first;
		else
			return -1;
	}
	return this->_data[tmp] * std::atof(value.c_str());
}

bool BitcoinExchange::printError(std::string error){
	std::cout << error << std::endl;
	return false;
}