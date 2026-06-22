/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:29:50 by opopov            #+#    #+#             */
/*   Updated: 2026/06/22 13:51:27 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# define GRN "\033[32m"
# define BLUE "\033[34m"
# define RST "\033[0m"

# include <iostream>

template <typename T, typename F>
void iter(T *array, const int array_length, F func)
{
	for (int i = 0; i < array_length; i++)
		func(array[i]);
}

#endif
