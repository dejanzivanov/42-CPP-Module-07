/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 08:12:29 by dzivanov          #+#    #+#             */
/*   Updated: 2022/05/02 21:12:47 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iomanip>

static void	outputTitle(std::string title)
{
	std::string	toPrint;
	int	size = 60;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

int main(void)
{
	int arrayInt[5] = {0 , 1 , 2, 3, 4};
	std::string arrayString[5] = {"Moira", "Mercy", "Sigma", "Reinhardt", "Baptiste"};
	const char *arrayStr[5] = {"Doomfist", "Hog", "Sojurn", "Zenyata", "Ana"};
	char arrayChar[9] = {'R', 'E', 'I', 'N', 'H', 'A', 'R', 'D', 'T'};

	outputTitle("Integer Test");

	iter<int>(arrayInt, 5, outputData);
	std::cout << std::endl;
	iter<int>(arrayInt, 2, outputData);
	std::cout << std::endl;

	outputTitle("String Test");
	iter<std::string>(arrayString, 5, outputData);
	std::cout << std::endl;

	outputTitle("Constant Character Test");
	iter<const char *>(arrayStr, 5, outputData);
	std::cout << std::endl;

	outputTitle("Character Test");
	iter<char>(arrayChar, 9, outputData);
	std::cout << std::endl;
}