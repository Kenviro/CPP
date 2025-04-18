/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:43:20 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 15:35:34 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScravTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap {

	private:
		std::string _name;

	public:
		
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap &operator=(const DiamondTrap& cpy);

		void attack(const std::string& target);
		void whoAmI();

};

#endif