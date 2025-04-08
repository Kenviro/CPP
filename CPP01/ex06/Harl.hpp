/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:56:54 by kilian            #+#    #+#             */
/*   Updated: 2025/04/09 00:57:41 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <string.h>
#include <iostream>
#include <map>

class Harl {

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		void	complain(std::string level);
		int		get_level(std::string level);

};

#endif