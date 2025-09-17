/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:30:12 by kilian            #+#    #+#             */
/*   Updated: 2025/09/17 10:59:57 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int main()
{
	std::cout << "base int array : " << std::endl;
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	iter(a, 7, &print<int>);
	std::cout << "incr int array : " << std::endl;
	iter(a, 7, &incr<int>);
	iter(a, 7, &print<int>);

	std::cout << "base const int array : " << std::endl;
	const int b[7] = {1, 2, 3, 4, 5, 6, 7};
	iter(b, 7, &print<const int>);
	// std::cout << "incr int array : " << std::endl;
	// iter(b, 7, &incr<const int>);
	// iter(b, 7, &print<const int>);

	std::cout << "base double array : " << std::endl;
	double c[5] = {5.6, 4.0, 2.7, 6.4, 1.9};
	iter(c, 5, &print<double>);
	std::cout << "incr double array : " << std::endl;
	iter(c, 5, &incr<double>);
	iter(c, 5, &print<double>);

	std::cout << "base const double array : " << std::endl;
	const double d[5] = {5.6, 4.0, 2.7, 6.4, 1.9};
	iter(d, 5, &print<const double>);
	// std::cout << "incr double array : " << std::endl;
	// iter(d, 5, &incr<const double>);
	// iter(d, 5, &print<const double>);
}
