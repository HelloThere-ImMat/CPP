/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:27:32 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/15 11:06:18 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();
		Array &operator=(const Array &assign);
		T &operator[](unsigned int index);
		unsigned int &size();
		class IndexTooHigh: public std::exception {
			public:
				virtual const char* what() const throw();
		};
	private :
		unsigned int	_size;
		T 				*_array;
};
