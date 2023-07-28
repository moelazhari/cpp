/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:50:38 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 01:56:12 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _vec(std::vector<int>()), _deque(std::deque<int>()){
	return ;
}

PmergeMe::PmergeMe(PmergeMe const &lhs){
	*this = lhs;
	return ;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs){
	this->_vec = rhs._vec;
	this->_deque = rhs._deque;
	return *this;
}

PmergeMe::~PmergeMe(){
	return ;
}

bool    PmergeMe::setContainers(char **av){
	std::string str;
	int         nub;

	for (int i = 1; av[i]; i++){
		str = av[i];
		if (str.find_first_not_of("0123456789") != std::string::npos)
			return false;
		nub = atoi(av[i]);
		this->_vec.push_back(nub);
		this->_deque.push_back(nub);
	}
	return true;
}

void PmergeMe::printVec(){
  for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::printDeque(){
  for (std::deque<int>::iterator it = this->_deque.begin(); it != this->_deque.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::insertionSortVec(){
	size_t	j;

   	for (size_t i = 1; i < this->_vec.size(); i++) {
       j = i;
       while (j > 0 && this->_vec[j - 1] > this->_vec[j]){
           std::swap(this->_vec[j], this->_vec[j - 1]);
           j = j - 1;
	   }
	}
}

void PmergeMe::mergeVec(int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = 0;
    std::vector<int> temp(end - start + 1);

    while (i <= mid && j <= end){
        if (this->_vec[i] < this->_vec[j])
            temp[k++] = this->_vec[i++];
        else
            temp[k++] = this->_vec[j++];
    }
    while (i <= mid)
        temp[k++] = this->_vec[i++];
    while (j <= end)
        temp[k++] = this->_vec[j++];
    for (i = start; i <= end; i++)
        this->_vec[i] = temp[i - start];
}

void PmergeMe::mergeSortVec(int start, int end){
	if (end - start < threshold){
		insertionSortVec();
		return ;
	}
	
	int mid = (start + end) / 2;
	mergeSortVec(start, mid);
	mergeSortVec(mid + 1, end);
	mergeVec(start, mid,  end);
}

void PmergeMe::insertionSortDeque(){
	size_t	j;

   	for (size_t i = 1; i < this->_deque.size(); i++) {
	   j = i;
	   while (j > 0 && this->_deque[j - 1] > this->_deque[j]){
		   std::swap(this->_deque[j], this->_deque[j - 1]);
		   j = j - 1;
	   }
	}
}

void PmergeMe::mergeDeque(int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    int k = 0;
    std::deque<int> tmp;

    while (i <= mid && j <= end){
        if (this->_deque[i] < this->_deque[j])
            tmp[k++] = this->_deque[i++];
        else
            tmp[k++] = this->_deque[j++];
    }
    while (i <= mid)
        tmp[k++] = this->_deque[i++];
    while (j <= end)
        tmp[k++] = this->_deque[j++];
    for (i = start; i <= end; i++)
        this->_deque[i] = tmp[i - start];
}

void PmergeMe::mergeSortDeque(int start, int end){
	if (end - start < threshold){
		insertionSortDeque();
		return ;
	}
	
	int mid = (start + end) / 2;
	mergeSortDeque(start, mid);
	mergeSortDeque(mid + 1, end);
	mergeDeque(start, mid,  end);
}

int PmergeMe::getVecSize(){
	return this->_vec.size();
}

int PmergeMe::getDequeSize(){
	return this->_deque.size();
}