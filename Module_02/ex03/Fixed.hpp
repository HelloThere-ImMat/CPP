/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mat <mat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/09/06 13:40:15 by mat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>
#include <ostream>
#include <iostream>


class Fixed
{
	private:
		int	_fixedNb;
		static const int _bitNb;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int integer);
		Fixed(const float floating_pt);
		//Equality
		Fixed &operator=(const Fixed &other);
		//Calculus
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		//Comparison
		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(Fixed &other);
		bool operator!=(Fixed &other);
		//Decrements
		void operator++(); //prefix
		void operator++(int); //postfix (specified by the int as parameters)
		void operator--();
		void operator--(int);
		~Fixed();
		int		getRawBits (void);
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&min(Fixed &f1, Fixed &f2);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static Fixed	&max(Fixed &f1, Fixed &f2);
		static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &other);

#endif
