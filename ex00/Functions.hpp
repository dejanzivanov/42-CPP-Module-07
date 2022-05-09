/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:54:11 by dzivanov          #+#    #+#             */
/*   Updated: 2022/05/01 21:58:25 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

#include <iostream>
#include <iomanip>

template<typename T> void	swap(T &a, T &b)
{
	T keeper;
	keeper = b;
	b = a;
	a = keeper;
} 

template<typename T> const T &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template<typename T> const T &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}


#endif
