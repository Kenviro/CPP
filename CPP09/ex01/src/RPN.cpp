/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:37:35 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/08 15:35:40 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN()
{
	
}

RPN::RPN(const RPN& cpy)
{
	_polish = cpy._polish;
}

RPN &RPN::operator=(const RPN& src)
{
	if (this != &src)
	{
		_polish = src._polish;
	}
	return *this;
}

RPN::~RPN()
{
	
}

int RPN::checkInput(std::string input)
{
	if (input.find_first_not_of("0123456789+-*/", input.size()) == std::string::npos)
		return 0;
	return 1;
}

void RPN::add()
{
	if (_polish.size() < 2)
		return ;

	int first = _polish.top();
	_polish.pop();
	int second = _polish.top();
	_polish.pop();
	std::cout << "first : " << first << " second : " << second << std::endl;
	_polish.push(second + first);
}

void RPN::substract()
{
	if (_polish.size() < 2)
		return ;

	int first = _polish.top();
	_polish.pop();
	int second = _polish.top();
	_polish.pop();
	std::cout << "first : " << first << " second : " << second << std::endl;
	_polish.push(second - first);
}

void RPN::mult()
{
	if (_polish.size() < 2)
		return ;

	int first = _polish.top();
	_polish.pop();
	int second = _polish.top();
	_polish.pop();
	std::cout << "first : " << first << " second : " << second << std::endl;
	_polish.push(second * first);
}

void RPN::divide()
{
	if (_polish.size() < 2)
		return ;

	int first = _polish.top();
	_polish.pop();
	int second = _polish.top();
	_polish.pop();
	std::cout << "first : " << first << " second : " << second << std::endl;
	_polish.push(second / first);
}

void RPN::operation(char c)
{
	switch (c)
	{
		case '+' :
			add();
		case '-' :
			substract();
		case '*' :
			mult();
		case '/' :
			divide();
	}
}

int RPN::calcul(std::string input)
{
	for (int i = 0; i < (int)input.size(); i++)
	{
		if (input[i] == ' ')
			continue ;
		if (isdigit(input[i]) != 0)
			_polish.push(input[i] - 48);
		else
			operation(input[i]);
		std::cout << _polish.top() << std::endl;
	}
	
	return _polish.top();
}
