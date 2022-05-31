/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:50:41 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/04 10:50:44 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "mutantstack.hpp"
#include <list>
int main()
{
    std::cout << "----[1️⃣]SUBJECT TEST----" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: "<< mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "----[2️⃣ ]MY TEST----" << std::endl;
	std::cout << "REVERSE ITERATOR" << std::endl;
	MutantStack<int> mstack2(mstack);
	MutantStack<int>::reverse_iterator it2 = mstack2.rbegin();
	MutantStack<int>::reverse_iterator ite2 = mstack2.rend();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "COMPARATION WITH LIST" << std::endl;
	std::list<int> lst;
	lst.push_front(5);
	lst.push_front(17);
	std::cout << "Top: " << lst.front() << std::endl;
	lst.pop_front();
	std::cout << "Size: " << lst.size() << std::endl;
	lst.push_front(3);
	lst.push_front(5);
	lst.push_front(737);
	//[...]
	lst.push_front(0);
	std::list<int>::reverse_iterator it_lst = lst.rbegin();
	std::list<int>::reverse_iterator ite_lst = lst.rend();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
	return (0);
}