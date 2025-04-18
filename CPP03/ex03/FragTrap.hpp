/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:00:37 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 15:19:15 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScravTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
	
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& src);
		FragTrap &operator=(const FragTrap& cpy);

		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif