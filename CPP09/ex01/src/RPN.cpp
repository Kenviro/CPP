/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:37:35 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/24 11:22:51 by ktintim          ###   ########.fr       */
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
	std::stringstream ss(input);
	std::string str;
	while (ss >> str)
	{
		if (str.length() != 1)
			return 1;
		if (isdigit(str[0]) == 0 && 
						(str[0] != '*' && 
						str[0] != '/' && 
						str[0] != '+' && 
						str[0] != '-'))
			return 1;
	}
	return 0;
}

void RPN::add()
{
	if (_polish.size() < 2)
		return ;

	int first = _polish.top();
	_polish.pop();
	int second = _polish.top();
	_polish.pop();
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
	_polish.push(second / first);
}

void RPN::operation(char c)
{
	switch (c)
	{
		case '+' :
			add();
			break ;
		case '-' :
			substract();
			break ;
		case '*' :
			mult();
			break ;
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
	}
	
	return _polish.top();
}
