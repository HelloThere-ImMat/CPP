/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:06:07 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/19 14:06:25 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() {}
	MutantStack(const MutantStack<T> &other) { *this = other; }
	MutantStack<T>& operator=(const MutantStack<T> &assign)
	{
		this->c = assign.c;
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
};
