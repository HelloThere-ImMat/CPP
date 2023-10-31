/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:31:32 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/28 14:12:42 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN(const RPN &other)
{
	*this = other;
}

RPN &RPN::operator=(const RPN &assign)
{
	_startValue = assign._startValue;
	_operands = assign._operands;
	_operators = assign._operators;
	return (*this);
}

// METHODS

//private

e_op	RPN::whichOperator(std::string op)
{
	if (!op.compare("+"))
		return (plus);
	else if (!op.compare("-"))
		return (minus);
	else if (!op.compare("*"))
		return (times);
	else if (!op.compare("/"))
		return (divided);
	return (op_error);
}

void RPN::testStr(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+' || str[i] == '/' || str[i] == '*')
			i++;
		else if (isdigit(str[i]) != 0)
			i++;
		else
			throw ("Invalid character found");
	}
}

bool	RPN::isOp(std::string tok)
{
	return (!tok.compare("+") || !tok.compare("-") || !tok.compare("*") || !tok.compare("/"));
}

//public

void RPN::makeCalculation(char *str)
{
	std::string instructions = str;
	std::string token;
	int (*operations[])(int nb1, int nb2) =
	{
		addition,
		soustraction,
		multiplication,
		division,
		error
	};
	int		nb1;
	int		nb2;

	std::istringstream iss(instructions);
	testStr(instructions);
	while (iss >> token)
	{
		if (isOp(token) == true)
		{
			if (_operands.size() < 2)
				throw ("Insuficient number of operands to perform operation");
			nb1 = _operands.top();
			_operands.pop();
			nb2 = _operands.top();
			_operands.pop();
			_operands.push(operations[this->whichOperator(token)](nb1, nb2));
		}
		else
			_operands.push(atoi(token.c_str()));
	}
	std::cout << _operands.top() << std::endl;
}

void RPN::printStack()
{
	std::stack<int> a;

	a = _operands;

	std::cout << "Operands : " << std::endl;
	while (a.empty() != true)
	{
		std::cout << a.top() << std::endl;
		a.pop();
	}
}

//int RPN::fillstacks(char *str)
//{
//	std::string	instructions = str;
//	std::string	token;
//	std::istringstream	iss(instructions);
//	testStr(instructions);
//	int	nb;

//	while (iss >> token)
//	{
//		if (isOp(token) == true)
//			_operators.push(whichOperator(token));
//		else
//		{
//			nb = atoi(token.c_str());
//			if (nb > 10)
//				throw ("Numbers must always be less than 10");
//			_operands.push(nb);
//		}
//	}
//	return (EXIT_SUCCESS);
//}

//void RPN::reverseStacks()
//{
//	std::stack<int>	cpy(_operands);
//	std::stack<e_op> cpy2(_operators);
//	std::stack<int> tmp;
//	std::stack<e_op> tmp2;

//	while (cpy.empty() == false)
//	{
//		tmp.push(cpy.top());
//		cpy.pop();
//	}
//	_operands = tmp;
//	while (cpy2.empty() == false)
//	{
//		tmp2.push(cpy2.top());
//		cpy2.pop();
//	}
//	_operators = tmp2;
//}

//void RPN::displaySolution()
//{
//	int (*operations[])(int nb1, int nb2) =
//	{
//		addition,
//		soustraction,
//		multiplication,
//		division,
//		error
//	};
//	int	nb1;
//	int nb2;
//	int res;

//	while (_operators.empty() != true)
//	{
//		if (_operands.size() < 2)
//			throw ("Too many operators");
//		nb1 = _operands.top();
//		_operands.pop();
//		nb2 = _operands.top();
//		_operands.pop();
//		res = operations[_operators.top()](nb1, nb2);
//		_operands.push(res);
//		_operators.pop();
//	}
//	std::cout << _operands.top() << std::endl;
//}
