/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:49:31 by libacchu          #+#    #+#             */
/*   Updated: 2022/11/07 15:59:49 by libacchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << B_RED "Invalid amount of arguments." DEFAULT << std::endl;
		return (1);
	}
	if (run_program(argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}

int	run_program(std::string file, std::string s1, std::string s2)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		line;
	
	inFile.open(file.c_str());
	if (inFile.fail()) {
		std::cout << B_RED "Error opening infile!" DEFAULT << std::endl;
		return (1);
	}
	outFile.open((file + ".replace").c_str());
	if (outFile.fail()) {
		std::cout << B_RED "Error opening outfile!" DEFAULT << std::endl;
		return (1);
	}
	while (getline(inFile, line)) {
		line = ft_replace(line, s1, s2);
		outFile << line;
		if (inFile.eof()) {
			break ;
		}
		outFile << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}

std::string		ft_replace(std::string line, std::string s1, std::string s2)
{
	int	s1Len = s1.length();	
	size_t	index;

	while (std::string::npos)
	{
		index = line.find(s1);
		if (index == std::string::npos){
			break;
		}
		line.erase(index, s1Len);
		line.insert(index, s2);
	}
	return (line);
}
