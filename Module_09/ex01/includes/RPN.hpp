/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:24:14 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/13 16:56:34 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <stack>

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
		int		fillstacks(char *str);
		void	printStack();
		void	displaySolution();
		~RPN() {}
};

int					addition(int nb1, int nb2);
int					soustraction(int nb1, int nb2);
int					division(int nb1, int nb2);
int					multiplication(int nb1, int nb2);
int					error(int nb1, int nb2);
