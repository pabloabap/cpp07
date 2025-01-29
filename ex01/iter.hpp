//CABECERA

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
