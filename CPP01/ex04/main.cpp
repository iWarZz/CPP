/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:05:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/04 14:39:58 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>

void    replace_in_file(std::string file_name, std::string s1, std::string s2)
{
    std::string line;
    std::string str1;
    std::string str2;
    size_t      pos;

    std::ifstream file1(file_name);
    if(file1.is_open())
    {
        std::ofstream file2(file_name + ".replace");
        while (getline(file1, line))
        {
            str1 += line;
            if (file1.eof())
                str1 += '\n';
        }
        pos = str1.find(s1);
        while (pos < str1.length())
        {
            str1.erase(pos, s1.length());
            str1.insert(pos, s2);
            pos = str1.find(s1, pos + s2.length());
        }
        file2 << str1;
        file2.close();
        file1.close();
    }
    else
        std::cout << "no file with " << file_name << " name" << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    else
        replace_in_file(av[1], av[2], av[3]);
    return 0;
}