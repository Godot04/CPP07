/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:07:04 by opopov            #+#    #+#             */
/*   Updated: 2026/04/20 14:21:17 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator=(const Array &copy);
		unsigned int size();
		~Array();

	Array()
	{
		this->_array = new T[];
		this->_size = 0;
	}

	Array(unsigned int n)
	{
		this->_array = new T[n];
		this->_size = n;
	}

	Array(const Array &copy)
	{
		this->_array = copy._array;
		this->_s = copy._size;
	}

	operator= (const Array &copy)
	{
		this->_array = copy.array;
		this->_size = copy.s;
	}

	unsigned int size()
	{
		return this->_size;
	}

	~Array()
	{

	}
};
