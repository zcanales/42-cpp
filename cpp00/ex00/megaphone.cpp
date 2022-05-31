/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:34:54 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/07 18:41:32 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i;
	int j;
	char a;

	i = 0;
	if (argc >= 2)
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					a = argv[i][j] - 32;
					std::cout << a;
				}
				else
					std::cout << argv[i][j];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
