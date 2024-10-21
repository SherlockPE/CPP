#include "Serializer.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
Serializer::Serializer(void)
{
	std::cout << GREEN "Serializer default constructor called" NC << std::endl;
}

Serializer::Serializer(Serializer const& other)
{
	std::cout << GREEN "Serializer copy constructor called" NC << std::endl;
	*this = other;
}

Serializer::~Serializer(void)
{
	std::cout << RED "Serializer destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
Serializer& Serializer::operator=(Serializer const& other)
{
	if (this == &other) {
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

/* 
reinterpret_cast es un operador utilizado para realizar conversiones de punteros 
y referencias a otros tipos de datos, incluso entre tipos no relacionados.
reinterpret_cast es más peligroso y solo se debe usar con cuidado cuando se 
necesita tratar los bits almacenados en un objeto de una manera no estándar.
Esta conversión debe evitarse siempre que sea posible, ya que puede dar lugar a 
comportamientos indefinidos y errores difíciles de rastrear.
*/

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
