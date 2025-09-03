/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:31:42 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/03 17:23:28 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.tpp"

#include <iostream>

void	chartTest()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << mstack.top() << std::endl;	

	MutantStack<int>::Iterator it = mstack.begin();
	MutantStack<int>::Iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	otherTest()
{
	MutantStack<int> ms;
	for (int i = 0; i < 100; i++)
	{
		ms.push(i);
	}
	std::cout << ms.top() << std::endl;
	for (int i = 0; i < 50; i++)
	{
		ms.pop();
	}
	std::cout << ms.top() << std::endl;
	MutantStack<int>::Iterator it = ms.begin();
	MutantStack<int>::Iterator ite = ms.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

int main()
{
	chartTest();
	std::cout << "\n============================================\n";
	otherTest();
	return 0;
}
