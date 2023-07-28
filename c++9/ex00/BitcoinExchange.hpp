/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:23:28 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 02:35:14 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <float.h>
#include <map>


class BitcoinExchange{
	private:
		std::map<std::string, float> _data;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string filename);
		BitcoinExchange(BitcoinExchange const &lhs);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();
		
		void	bitcoinValues(std::string filename);
		bool	checkDate(std::string date);
		bool	checkValue(std::string value);
		void	strTrim(std::string &str);
		float	getPrice(std::string &date, std::string &value);
		bool	printError(std::string error);
};
