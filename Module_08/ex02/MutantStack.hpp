/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:06:07 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/06 11:54:11 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class MutantStack
{
	private :
		T			_tab[8];
		int 		_elementNbr;
		int			_size;
	public :
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &assign);
		//mem functs
		bool		empty() const;
		int			size() const;
		const T&	top() const;
		void		push (const value_type& val);
		template <class... Args> void emplace (Args&&... args);
		void		pop();
		void		swap (stack& x);
		~MutantStack();
}
