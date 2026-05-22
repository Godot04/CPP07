/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:29:53 by opopov            #+#    #+#             */
/*   Updated: 2026/02/10 10:24:43 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void reverse_string(char &c)
{
	if (c >= 'A' && c <= 'Z')
		c = std::tolower(c);
	else if (c >= 'a' && c <= 'z')
		c = std::toupper(c);
}

void adding1(int &element)
{
	element += 1;
}

int main()
{
	// Test 1
	int array1[] = {1, 2, 3};
	for (int i = 0; i < 3; i++)
		std::cout << "Before iter: " << array1[i] << std::endl;
	iter(array1, 3, adding1);
	for (int i = 0; i < 3; i++)
		std::cout << "After iter: " << array1[i] << std::endl;

	std::cout << "-------------------------" << std::endl;
	// Test 2
	std::string array2  = "AaBbCc";
	std::cout << "Before iter: " << array2 << std::endl;
	iter(&array2[0], array2.length(), reverse_string);
	std::cout << "After iter: " << array2 << std::endl;
}
