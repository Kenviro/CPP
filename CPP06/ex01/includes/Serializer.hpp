/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:42:55 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 15:25:22 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "data.h"
# include <stdint.h>

class Serializer {

	private:

		Serializer();
		Serializer(const Serializer& cpy);
		Serializer& operator=(const Serializer& src);
		~Serializer();	

	public:

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

};

#endif