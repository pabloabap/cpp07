/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:22:07 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 17:22:10 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	plusOne( int &i );
void	minusOne( int &i );
void	uperCase( char &c );
void	lowerCase( char &c );

int	main( void )
{
	int	iarr[5] = {1, 2, 3, 4, 5};
	char	carr[5] = {'a', 'b', 'c', '9', ' '};
	
	std::cout << "___ORIGINAL___" << std::endl;
	iter( iarr, sizeof(iarr) / sizeof(iarr[0]), &printItem );
	std::cout << "|- ++" << std::endl;
	iter( iarr, sizeof(iarr) / sizeof(iarr[0]), &plusOne );
	iter( iarr, sizeof(iarr) / sizeof(iarr[0]), &printItem );
	std::cout << "|- --" << std::endl;
	iter( iarr, sizeof(iarr) / sizeof(iarr[0]), &minusOne );
	iter( iarr, sizeof(iarr) / sizeof(iarr[0]), &printItem );
	std::cout << "--------------------" << std::endl;
	

	std::cout << "___ORIGINAL___" << std::endl;
	iter( carr, sizeof(carr) / sizeof(carr[0]), &printItem );
	std::cout << "|- UP" << std::endl;
	iter( carr, sizeof(carr) / sizeof(carr[0]), &uperCase );
	iter( carr, sizeof(carr) / sizeof(carr[0]), &printItem );
	std::cout << "|- LOW" << std::endl;
	iter( carr, sizeof(carr) / sizeof(carr[0]), &lowerCase );
	iter( carr, sizeof(carr) / sizeof(carr[0]), &printItem );
	std::cout << "--------------------" << std::endl;
	iter({}, 0, &plusOne );
	return ( 0 );
}

void	plusOne( int &i )
{
	i++;
}

void	minusOne( int &i )
{
	i --;
}

void	uperCase( char &c )
{
	if ( c >= 'a' && c <= 'z' )
		c -= ( 'a' - 'A' );
}

void	lowerCase( char &c )
{
	if ( c >= 'A' && c <= 'Z' )
		c += ( 'a' - 'A' );
}
