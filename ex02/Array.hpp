/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:07:04 by opopov            #+#    #+#             */
/*   Updated: 2026/06/22 16:33:18 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define GRN "\033[32m"
# define PRPL "\033[35m"
# define RST "\033[0m"

# include <iostream>
# include <stdexcept>

// # include <cstdlib> // for given main.c
// # include <ctime> // for given main.c

template <typename T>

class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:

	Array() : _array(NULL), _size(0) {}

	Array(unsigned int n)
	{
		this->_size = n;
		if (n == 0)
			this->_array = NULL;
		else
			this->_array = new T[n]();
	}

	Array(const Array &copy) : _array(NULL), _size(0)
	{
		*this = copy;
	}

	~Array()
	{
		delete [] (this->_array);
	}

	Array &operator=(const Array &copy)
	{
		if (this == &copy)
			return (*this);

		delete [] this->_array;
		this->_size = copy._size;
		if (this->_size == 0)
		{
			this->_array = NULL;
			return *this;
		}

		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = copy._array[i];
		return (*this);
	}

	T &operator[](unsigned int n)
	{
		if (n >= this->_size)
			throw std::out_of_range("Index out of range");
		return (this->_array[n]);
	}

	unsigned int size() const
	{
		return (this->_size);
	}

};

#endif
