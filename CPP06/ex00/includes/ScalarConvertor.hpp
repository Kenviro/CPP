/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:34:00 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 15:26:06 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTOR_HPP
# define SCALARCONVERTOR_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <climits>
# include <cmath>

class ScalarConvertor {

	private:

		ScalarConvertor();
		ScalarConvertor(const ScalarConvertor& cpy);
		ScalarConvertor& operator=(const ScalarConvertor& src);
		~ScalarConvertor();

	public:

		static void	convert(const std::string &s);

};

#endif