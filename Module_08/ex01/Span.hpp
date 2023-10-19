/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:19:14 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/19 13:56:26 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

class Span
{
	public :
		std::vector<int>	_v;
		int					_size;
		int					_elementsNbr;
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &assign);
		void	addNumber(int value);
		void	addRandomElements(int randValNbr);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		~Span();
};
