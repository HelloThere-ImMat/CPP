/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:24:14 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/10 14:28:50 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

typedef enum e_operators
{
	plus,
	minus,
	times,
	divided
}	e_op;

class RPN
{
	private:
		std::stack<e_op>	operators;
		std::stack<int>		operands;
		int					startValue;
	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &assign);
		void fillstacks(int argc, char **argv);
		void displaySolution() const;
		~RPN();
};