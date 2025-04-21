#include "PmergeMe.hpp"

//  2, 2, 6, 10, 22, 42, ...
long	PmergeMe::generate_insertion_order(void)
{
	static long	num;
	static int	i;

	num *= 2;
	if (i % 2 == 0)
		num += 2;
	else
		num -= 2;
	i++;
	return (num);
}