/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:06:41 by opopov            #+#    #+#             */
/*   Updated: 2026/06/22 17:31:09 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << GRN << "Default constructor" << RST << std::endl;
	Array<int> empty;
	std::cout << "size = " << empty.size() << std::endl;
	try
	{
		empty[0];
	}
	catch (const std::exception &e)
	{
		std::cout << "out of range: " << e.what() << std::endl;
	}

	std::cout << GRN <<"\nСonstructor with values (int)" << RST << std::endl;
	Array<int> a(5);
	std::cout << PRPL << "Before element assignment" << RST << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;
	std::cout << PRPL << "After element assignment" << RST << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;

	std::cout << GRN <<"\nСonstructor with values (string)" << RST << std::endl;
	Array<std::string> s(3);
	std::cout << PRPL << "Before element assignment" << RST << std::endl;
	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << "s[" << i << "] = " << s[i] << std::endl;
	s[0] = "Hello";
	s[1] = "World";
	s[2] = "!";
	std::cout << PRPL << "After element assignment" << RST << std::endl;
	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << "s[" << i << "] = " << s[i] << std::endl;

	std::cout << GRN << "\nCopy constructor" << RST << std::endl;
	Array<int> b(a);
	a[0] = 42;
	std::cout << "a[0] = " << a[0] << std::endl;
	std::cout << "b[0] = " << b[0] << std::endl;

	std::cout << GRN << "\nAssignment operator" << RST << std::endl;
	Array<int> c;
	std::cout << PRPL << "Casual assignment operator" << RST << std::endl;
	c = a;
	a[1] = 777;
	std::cout << "a.size = " << a.size() << std::endl;
	std::cout << "c.size = " << c.size() << std::endl;
	std::cout << "a[1] = " << a[1] << std::endl;
	std::cout << "c[1] = " << c[1] << std::endl;
	std::cout << PRPL << "Empty assignment operator" << RST << std::endl;
	Array<int> d;
	c = d;
	std::cout << "c.size = " << c.size() << std::endl;
	try
	{
		std::cout << c[1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "out of range: " << e.what() << std::endl;
	}

	std::cout << GRN << "\nOut of range access" << RST << std::endl;
	try
	{
		std::cout << a[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "out of range: " << e.what() << std::endl;
	}

	return 0;
}


// Given main.c tests from CPP07

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
