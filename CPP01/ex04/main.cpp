/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:05:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/08 12:55:35 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replace_in_file(const std::string& file_name, const std::string& s1, const std::string& s2) {
    std::string content;
    std::string line;
    size_t pos;

    std::ifstream file1(file_name.c_str());
    if (file1.is_open()) 
    {
        while (getline(file1, line))
            content += line + '\n';
        file1.close();

        // Remplacer les occurrences de s1 par s2
        pos = content.find(s1);
        while (pos != std::string::npos) {
            content.erase(pos, s1.length());
            content.insert(pos, s2);
            pos = content.find(s1, pos + s2.length());
        }

        // Écrire le contenu modifié dans le nouveau fichier
        std::ofstream file2((file_name + ".replace").c_str());
        if (file2.is_open()) {
            file2 << content;
            file2.close();
        }
        else 
            std::cerr << "Error opening output file: " << file_name + ".replace" << std::endl;
    }
    else
        std::cerr << "Error opening input file: " << file_name << std::endl;
}

int main(int argc, char** argv) {
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments" << std::endl;
        return 1;
    }
    else
        replace_in_file(argv[1], argv[2], argv[3]);
    return 0;
}
