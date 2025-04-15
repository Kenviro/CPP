/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:33:26 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:20 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap {

	private :

		std::string	name;
		int			hitPoint;
		int			energyPoint;
		int			attackDamage;

	public :

		ScravTrap(std::string name);
		~ScravTrap();
		ScravTrap(const ScravTrap& src);
		ScravTrap &operator=(const ScravTrap& cpy);

		void guardGate();
		void attack(const std::string& target);

};

# endif