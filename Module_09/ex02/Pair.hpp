/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:20:47 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/21 13:02:35 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Pair
{
	public:
		Pair() {}
		Pair (const Pair &other);
		Pair &operator=(const Pair &assign);
		bool operator<(const Pair &other) const;
		~Pair() {}
		int		_big;
		int		_small;
};
