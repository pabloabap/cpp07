/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:22:01 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 17:22:05 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
void	iter(T * a, size_t const &len, void (*fun)(T &))
{
	if ( a  && fun && 0 != len )
		for ( size_t i = 0; i < len; i++ )
			fun( a[i] );
}

template < typename T >
void	printItem(T &item)
{
	std::cout << item << std::endl;
}
