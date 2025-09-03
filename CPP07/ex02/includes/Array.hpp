/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:07:45 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/03 14:09:23 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private :
	 
	T* _array;
	unsigned int _size;
	
	public :
	
	Array();
	Array(unsigned int n);
	Array(const Array& cpy);
	Array& operator=(const Array& src);
	~Array();
	
	T& operator[](int idx);
	T operator[](int idx) const;
	
	unsigned int size() const;
	
};

#endif