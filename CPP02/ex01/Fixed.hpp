/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 10:12:42 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

	private:
		int _fixedPointValue;
		static const int _fractionalBits;

	public:
		Fixed();
		Fixed(const int src);
		Fixed(const float src);
		Fixed(const Fixed& src);
		Fixed &operator=(const Fixed& copy);
		~Fixed();
		
		int	getRawBits() const;
		int	toInt() const;
		float toFloat() const;
		void setRawBits(int const raw);
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		
};


#endif