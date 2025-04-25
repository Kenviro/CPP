/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:06:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/24 11:16:44 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal {

	private:

		Brain* brain;

	public:

		Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& src);
		~Dog();

		void	addIdeas(std::string new_ideas) const;
		void	removeIdea(int idea_index) const;
		void	makeSound() const;
		void	printIdeas(int index) const;
};

#endif