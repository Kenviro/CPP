/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BaseABC.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:42:45 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 17:24:10 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base {

	public :

	virtual ~Base() {};	

};

class A : public Base {
	public :
	~A() {}
};

class B : public Base {
	public :
	~B() {}
};

class C : public Base {
	public :
	~C() {}
};

#endif

