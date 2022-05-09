/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 00:01:21 by dzivanov          #+#    #+#             */
/*   Updated: 2022/05/02 12:10:48 by dzivanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T> class Array
{
	private:
		T				*data;
		unsigned int 	length;

	public:
		Array(void) : data(NULL), length(0) {}
		Array(const unsigned int n) : data(new T[n]), length(n) {}
		Array(const Array<T> &array) : data(NULL), length(0) { *this = array; }
		virtual ~Array() { delete [] data; }

		Array<T>	&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (length > 0)
					delete [] data;
				length = array.length;
				data = new T[array.length];
				for (unsigned int i = 0; i < length; i++)
					data[i] = array.data[i];
			}
			return (*this);
		}

		T	&operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= length)
				throw OutOfRange();
			return (data[i]);
		}

		unsigned int	getLength(void) const { return (length); }

		class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Array::exception : index is out of range");
				}
		};

};

template<typename T> std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	unsigned int	max = 5;

	o << "[" << array.getLength() << "] ";
	for (unsigned int i = 0; i < array.getLength() && i < max; i++)
		o << array[i] << " ";
	if (max < array.getLength())
		o << "...";
	o << std::endl;
	return (o);
}

#endif