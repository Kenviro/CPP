/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:54:07 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 15:01:51 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

/***************************Constructor & Destructor****************************/

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer& cpy)
{
	(void)cpy;
}

Serializer &Serializer::operator=(const Serializer& src)
{
	if (this != &src)
	{
		(void)src;
	}
	return *this;
}

Serializer::~Serializer()
{
	
}

/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
