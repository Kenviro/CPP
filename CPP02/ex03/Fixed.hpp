/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:31:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 13:51:38 by ktintim-         ###   ########.fr       */
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
		static Fixed max(Fixed& a, Fixed& b);
		static Fixed max(const Fixed&a, const Fixed& b);
		static Fixed min(Fixed& a, Fixed& b);
		static Fixed min(const Fixed&a, const Fixed& b);
		
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
		
		//operateur d'incrementation et decrementation
		Fixed& operator--(); //pre incrementation
		Fixed& operator++();
		Fixed operator--(int); //post incrementaiton
		Fixed operator++(int); // int en argument pour differencier les deux
		
		//operateur arithmetique
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		//operateur de comparaison
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
};


#endif