/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:30:12 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 23:22:43 by kilian           ###   ########.fr       */
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

	std::cout << "base double array : " << std::endl;
	double b[5] = {5.6, 4.0, 2.7, 6.4, 1.9};
	iter(b, 5, &print<double>);
	std::cout << "incr double array : " << std::endl;
	iter(b, 5, &incr<double>);
	iter(b, 5, &print<double>);
}
