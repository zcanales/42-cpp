/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:54:48 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/02 17:54:48 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <stdexcept>
//Secuence
#include <vector>
#include <list>
#include <queue>


void displayInt(int i)
{
    std::cout << i << ", ";
}

template<typename T>
void test1(T &l, int &x)
{
    try{
        std::cout << "Find-> " << x << ". In the container-> " ;
        for_each(l.begin(), l.end(), displayInt);
        std::cout << std::endl;
        easyfind(l, x);
        std::cout << "[👍]There was a coincidence of " << x << std::endl;}
    catch (std::exception){
        std::cout << "[👎]There was not a coincidence of " << x << std::endl;}
        
}
int main()
{
    std::cout << "[🔧]CREATING CONTAINERS..." << std::endl;
    //Secuence
    std::list<int>      lst1;
    std::vector<int>    vec;
    std::deque<int>     deque;

    int yes = 4;
    int no = -4;
    int i = -1;
    while (++i < 6)
    {
        //Secuence
       lst1.push_back(i); 
       vec.push_back(i); 
       deque.push_back(i);
    }
    std::cout << "[🧨] LET'S START TESTING" << std::endl;
    std::cout << "SECUENCE CONTEINERS" << std::endl;
    test1(lst1, yes);
    test1(lst1, no);
    test1(vec, yes);
    test1(vec, no);
    test1(deque, yes);
    test1(deque, no);

}

