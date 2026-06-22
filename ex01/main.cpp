/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:29:53 by opopov            #+#    #+#             */
/*   Updated: 2026/06/22 14:06:30 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void reverse_string(const char &cc)
{
	char c = cc;
	if (c >= 'A' && c <= 'Z')
		c = std::tolower(c);
	else if (c >= 'a' && c <= 'z')
		c = std::toupper(c);
	std::cout << c;
}

void adding1(int &element)
{
	element += 1;
}

void print_int(const int &element)
{
	std::cout << element;
}

int main()
{
	// Test 1
	// Non const values
	std::cout << GRN << "Non const values" << RST << std::endl;
	int array1[] = {1, 2, 3};
	for (int i = 0; i < 3; i++)
		std::cout << "Before iter: " << array1[i] << std::endl;
	iter(array1, 3, adding1);
	for (int i = 0; i < 3; i++)
		std::cout << "After iter: " << array1[i] << std::endl;
	// Const values
	std::cout << BLUE << "Const values" << RST << std::endl;
	const int array2[] = {1, 2, 3};
	iter(array2, 3, print_int);

	std::cout << "\n-------------------------" << std::endl;

	// Test 2
	// Non const values
	std::cout << GRN << "Non const values" << RST << std::endl;
	std::string array3  = "AaBbCc";
	std::cout << "Before iter: ";
	iter(array3.data(), array3.length(), reverse_string);
	std::cout << "\nAfter iter:  " << array3 << std::endl;
	// Const values
	std::cout << BLUE << "Const values" << RST << std::endl;
	const std::string array4  = "AaBbCc";
	std::cout << "Before iter: ";
	iter(array4.data(), array4.length(), reverse_string);
	std::cout << "\nAfter iter:  " << array4 << std::endl;
}
