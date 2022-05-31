/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:07:45 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:07:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int replace_file(std::string infile, std::string s1, std::string s2)
{
    std::ifstream ifs(infile);
    std::ofstream ofs;
    std::string line;
    size_t pos;
   
    if (!ifs.is_open())
    {
       std::cout << "Infile unable to open" << std::endl;
       return (1);
    }
    ofs.open(infile.append(".replace"), std::ofstream::out);
    if (!ofs.is_open())
    {
        ifs.close();
       std::cout << "Outfile unable to open file" << std::endl;
       return (1);
    }
    while (std::getline(ifs, line))
    { 
        pos = 0;
        while (std::string::npos != line.find(s1))
        {
            pos = line.find(s1);
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        ofs << line << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Incorrect argument: [./replace] [file_name] [s1] [s2]" <<std::endl;
        return (1);
    }
    if (replace_file(argv[1], argv[2], argv[3]))
        return (1);
    return (0);
}
