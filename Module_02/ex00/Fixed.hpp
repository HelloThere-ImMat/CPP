/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:52:45 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/22 18:20:49 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int	_fixedNb;
		static const int _bitNb;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		Fixed &operator<<(const Fixed);
		~Fixed();
		int		getRawBits (void);
		void	setRawBits (int const raw);
};
