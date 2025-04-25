/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:23:43 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/24 11:17:03 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal {

	private:

		Brain* brain;

	public:

		Cat();
		Cat(const Cat& cpy);
		Cat& operator=(const Cat& src);
		~Cat();

		void	addIdeas(std::string new_ideas) const;
		void	removeIdea(int idea_index) const;
		void	makeSound() const;
		void	printIdeas(int index) const;
};

#endif