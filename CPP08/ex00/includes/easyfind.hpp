/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:03:41 by ktintim           #+#    #+#             */
/*   Updated: 2025/08/08 23:05:32 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>

class OccurenceNotFoundException : public std::exception {
	public:
		const char* what() const throw() { return "nb not found in container"; }
};

template <typename T>
void	easyfind(const T& a, int nb)
{
	int size = a.size();
	for (int i = 0; i < size; i++)
	{
		if (a[i] == nb)
		{
			std::cout << nb << " found at emplacement " << i << std::endl;
			return ;
		}
	}
	throw OccurenceNotFoundException();
}

#endif