/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:50:51 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 02:01:28 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>

#define threshold 50

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deque;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &lhs);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		bool setContainers(char **av);
		void printVec();
		void printDeque();

		void insertionSortVec();
		void mergeSortVec(int start, int end);
		void mergeVec(int start, int mid, int end);
		
		void insertionSortDeque();
		void mergeSortDeque(int start, int end);
		void mergeDeque(int start, int mid, int end);

		int getVecSize();
		int getDequeSize();
};