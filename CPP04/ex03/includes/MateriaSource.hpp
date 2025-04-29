/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:54:53 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:17:57 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:

		AMateria*	learned[4];
		int			materiaCount;

	public:

		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		MateriaSource& operator=(const MateriaSource& src);
		~MateriaSource();

		void		learnMateria(AMateria* src);
		AMateria*	createMateria(std::string const & type);

};

#endif