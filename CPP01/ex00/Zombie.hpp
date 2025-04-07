/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:24:32 by kilian            #+#    #+#             */
/*   Updated: 2025/04/08 00:45:44 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string _name;

	public:
		void	announce();
		Zombie(std::string name);
		~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif