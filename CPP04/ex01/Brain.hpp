/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:20:15 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/24 09:51:59 by ktintim-         ###   ########.fr       */
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