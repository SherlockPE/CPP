#include "PmergeMe.hpp"

// VECTOR
void	PmergeMe::recursive_sort_vector(std::vector<std::pair<long, long> > &pairs)
{
	size_t	itf;
	size_t	its;
	size_t	itp;

	if (pairs.size() <= 1)
		return ;
	std::vector<std::pair<long, long> > first_pair(pairs.begin(), pairs.begin() + pairs.size() / 2);
	std::vector<std::pair<long, long> > second_pair(pairs.begin() + pairs.size() / 2, pairs.end());
	recursive_sort_vector(first_pair);
	recursive_sort_vector(second_pair);
	itf = 0;
	its = 0;
	itp = 0;
	while (itf < first_pair.size() && its < second_pair.size())
	{
		if (first_pair[itf].second > second_pair[its].second)
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
	while (itf < first_pair.size() || its < second_pair.size())
	{
		if (itf == first_pair.size())
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
}

// LIST
void	PmergeMe::recursive_sort_list(std::list<std::pair<long, long> > &pairs)
{
	size_t	itf = 0;
	size_t	its = 0;
	size_t	itp = 0;
	std::list<std::pair<long, long> >::iterator half = pairs.begin();

	if (pairs.size() <= 1)
		return ;

	std::advance(half, (pairs.size() / 2));

	std::list<std::pair<long, long> > first_pair(pairs.begin(), half);
	std::list<std::pair<long, long> > second_pair(half, pairs.end());
	recursive_sort_list(first_pair);
	recursive_sort_list(second_pair);
	while (itf < first_pair.size() && its < second_pair.size())
	{
		if (first_pair[itf].second > second_pair[its].second)
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
	while (itf < first_pair.size() || its < second_pair.size())
	{
		if (itf == first_pair.size())
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
}
