/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/10 15:24:56 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {

	private:
		int _fixedPointValue;
		static const int _fractionnalBits;

	public:
		Fixed();
		Fixed(const Fixed& src);
		Fixed &operator=(const Fixed& copy);
		~Fixed();
		
		int	getRawBits() const;
		void setRawBits(int const raw);
		
};


#endif