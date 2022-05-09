/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 08:13:00 by dzivanov          #+#    #+#             */
/*   Updated: 2022/05/02 21:33:12 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T> void iter(const T *array, int length_of_array, void function(const T &))
{
	for (int i = 0; i < length_of_array; i++)
	{
		function(array[i]);
	}
}

template<typename T> void outputData(const T &data)
{
	std::cout << data << " ";
}

#endif

