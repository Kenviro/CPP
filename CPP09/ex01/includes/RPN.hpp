/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:28:05 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/24 11:16:58 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>
# include <sstream>
class RPN {

	private:

		std::stack<int> _polish;

		void add();
		void substract();
		void mult();
		void divide();
		void operation(char c);

	public:

		RPN();
		RPN(const RPN& cpy);
		RPN& operator=(const RPN& src);
		~RPN();

		int checkInput(std::string input);
		int calcul(std::string input);
};

#endif