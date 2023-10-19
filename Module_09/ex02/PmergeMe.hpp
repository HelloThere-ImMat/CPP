/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:16:20 by mdorr             #+#    #+#             */
/*   Updated: 2023/10/17 15:57:02 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>

class PmergeMe
{
	public:
		PmergeMe() {}
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &asssign);
		~PmergeMe() {}
		void	fillContainers(char **av);
		void	printContainers();
		void	vecSort();
	private :
		std::vector<int>	_vec;
		std::list<int>		_list;
}

time_t  get_simulation_time(time_t start_time);
time_t  get_time(void);

template <typename T>
class Pair
{
	public:
		Pair() {}
		Pair (const Pair &other);
		Pair &operator=(const Pair &assign);
		~Pair() {}
	private:
		T	*_first;
		T	*_second;
};