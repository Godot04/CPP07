/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:21:39 by opopov            #+#    #+#             */
/*   Updated: 2026/02/09 14:23:32 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a >= b)
		return (a);
	return (b);
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a <= b)
		return (a);
	return (b);
}

#endif
