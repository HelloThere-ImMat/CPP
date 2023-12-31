/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:24:14 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/25 16:03:16 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <stack>
#include <limits.h>

typedef enum e_operators
{
	plus,
	minus,
	times,
	divided,
	op_error
}	e_op;

class RPN
{
	private:
		std::stack<e_op>	_operators;
		std::stack<int>		_operands;
		int					_startValue;
		e_op				whichOperator(std::string op);
		void 				testStr(std::string instructions);
		void				processInstruction(char c);
		bool				isOp(std::string tok);
	public:
		RPN() {}
		RPN(const RPN &other);
		RPN &operator=(const RPN &assign);
		//int		fillstacks(char *str);
		void	printStack();
		//void	reverseStacks();
		//void	displaySolution();
		void	makeCalculation(char *str);
		~RPN() {}
};

int					addition(int nb1, int nb2);
int					soustraction(int nb1, int nb2);
int					division(int nb1, int nb2);
int					multiplication(int nb1, int nb2);
int					error(int nb1, int nb2);
