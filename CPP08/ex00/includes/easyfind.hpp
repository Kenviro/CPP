/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:03:41 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/01 14:00:25 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

class OccurenceNotFoundException : public std::exception {
	public:
		const char* what() const throw() { return "nb not found in container"; }
};

template <typename T>
void	easyfind(const T& a, int nb)
{
	if (std::find(a.begin(), a.end(), nb) != a.end())
	{
		std::cout << nb << " found in containers" << std::endl;
	}
	throw OccurenceNotFoundException();
}

#endif