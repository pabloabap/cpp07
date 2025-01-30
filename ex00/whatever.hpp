/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:21:52 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 17:21:59 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void	swap( T &a, T&b )
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const &	min( T const &a, T const &b)
{
	return ( (a < b) ? a : b );
}

template < typename T >
T const &	max( T const &a, T const &b)
{
	return ( (a > b) ? a : b );
}

#endif
