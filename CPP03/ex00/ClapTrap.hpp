/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:49 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/14 16:06:05 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	private:

		std::string	name;
		int			hitPoint;
		int			energyPoint;
		int			attackDamage;
		void		setName(std::string new_name);
		void		setHitPoint(int amount);
		void		setEnergyPoint(int amount);
		void		setAttackDamage(int amount);

	public:
		
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& src);
		ClapTrap &operator=(const ClapTrap& cpy);

		std::string	getName() const;
		int			getHitPoint() const;
		int			getEnergyPoint() const;
		int			getAttackDamage() const;
		
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

};

#endif