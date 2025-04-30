/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:20:15 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:45:37 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

	private:

		std::string	ideas[100];
		int			nbIdeas;

	public:

		Brain();
		Brain(const Brain& cpy);
		Brain& operator=(const Brain& src);
		~Brain();

		void	sayIndexIdeas(int index);
		void	sayAllIdeas();
		
		void	addIdeas(std::string new_ideas);
		void	removeIdea(int idea_index);

};

#endif