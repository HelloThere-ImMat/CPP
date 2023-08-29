/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/29 19:03:57 by mdorr            ###   ########.fr       */
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
		Fixed &operator=(const Fixed &other);
		Fixed &operator+(const Fixed &other);
		Fixed &operator-(const Fixed &other);
		Fixed &operator/(const Fixed &other);
		Fixed &operator*(const Fixed &other);
		//Rajouter <,>,<=,>=,== and !=
		// ainsi que ++Fixed, Fixed++, Fixed-- and --Fixed
		~Fixed();
		int		getRawBits (void);
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed	&min(Fixed &f1, Fixed &f2);
		Fixed	&min(const Fixed &f1, const Fixed &f2);
		Fixed	&max(Fixed &f1, Fixed &f2);
		Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &other);

#endif