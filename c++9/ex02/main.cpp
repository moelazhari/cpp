/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:50:25 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 02:16:32 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    PmergeMe           p;
    std::vector<int> vec;
    clock_t          start, end;

    if (!p.setContainers(av))
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std:: cout << "Before: ";
    p.printVec();

    start = clock();
    p.mergeSortVec(0, p.getVecSize() - 1);
    end = clock();

    std:: cout << "After: ";
    p.printVec();

    std::cout << "Time to perform merge sort of  " << p.getVecSize() << " elements whith std::vector : " <<  std::fixed << (double)(end - start) / CLOCKS_PER_SEC << "s" << std::endl;
    
    start = clock();
    p.mergeSortVec(0, p.getVecSize() - 1);
    end = clock();
    std::cout << "Time to perform merge sort of  " << p.getDequeSize() << " elements whith std::deque : " <<  std::fixed << (double)(end - start) / CLOCKS_PER_SEC << "s" << std::endl;
    
    return 0;
}