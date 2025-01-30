/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:22:30 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 17:22:33 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

# include <exception>
# include <new>

template < typename T >
class	Array
{
	private:
		unsigned int	_len;
		T *		_arr;
	public:
		Array( void );
		Array( unsigned int const &n );
		Array( Array const &src );
		~Array( void ); 
		
		Array	&operator=( Array const &src );
		T	&operator[]( unsigned int const &n );
		T const	&operator[]( unsigned int const &n ) const;
		
		unsigned int const &	size( void ) const;
};

# include "Array.tpp"
#endif
