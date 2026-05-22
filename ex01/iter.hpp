/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:29:50 by opopov            #+#    #+#             */
/*   Updated: 2026/02/11 10:35:41 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename F>
void iter(T *array, const int array_length, F func)
{
	for (int i = 0; i < array_length; i++)
		func(array[i]);
}

#endif


