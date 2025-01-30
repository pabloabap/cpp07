//CABECERA


template < typename T >
Array<T>::Array( void ): _len( 0 )
{
	this->_arr = new T[this->_len];
}

template < typename T >
Array<T>::Array( unsigned int const &n ): _len( n )
{
	T	*init =  new T();

	this->_arr = new T[n];
	for ( unsigned int i = 0; i < n; i ++ )
		this->_arr[i] = *init;
	delete init;
}

template < typename T >
Array<T>::Array( Array const &src )
{
	this->_arr = NULL;
	*this = src;	
}

template < typename T > Array<T>::~Array( void )
{
	delete [] this->_arr;
}
		
template < typename T >
Array<T>	&Array<T>::operator=( Array const &src )
{
	if ( NULL != this->_arr )
		delete [] this->_arr;
	this->_len = src._len;
	this->_arr = new T[this->_len];
	for (unsigned int i = 0; i < this->_len; i ++)
		this->_arr[i] = src._arr[i];
	return ( *this );
}

template < typename T >
T	&Array<T>::operator[]( unsigned int const &n )
{
	if ( n >= this->_len )
		throw std::out_of_range("Index out of Array size");
	return ( this->_arr[n] );
}

template < typename T >
T const	&Array<T>::operator[]( unsigned int const &n ) const
{
	if ( n >= this->_len )
		throw std::out_of_range("Index out of Array size");
	return ( this->_arr[n] );
}

template < typename T >
unsigned int const &	Array<T>::size( void ) const
{
	return ( this->_len );
}

template < typename T >
std::ostream &	operator<<(std::ostream &o, Array<T> &a)
{
	for ( unsigned int i = 0; i < a.size(); i++ )
		o << a[i] << " ";
	return ( o );
}

