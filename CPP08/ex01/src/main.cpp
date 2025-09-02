/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:29:03 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/02 15:36:26 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>

int	main()
{
	Span span(5);

	span.addNumber(1);
	span.addNumber(2);
	span.addNumber(3);
	span.addNumber(4);
	span.addNumber(5);

	std::cout << "test : " << span.longestSpan() << std::endl;
}
