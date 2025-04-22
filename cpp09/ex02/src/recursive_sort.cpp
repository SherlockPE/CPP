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
	if (pairs.size() <= 1)
		return ;

	std::list<std::pair<long, long> >::iterator half = pairs.begin();
	std::advance(half, (pairs.size() / 2));

	std::list<std::pair<long, long> > first_pair(pairs.begin(), half);
	std::list<std::pair<long, long> > second_pair(half, pairs.end());
	recursive_sort_list(first_pair);
	recursive_sort_list(second_pair);

	std::list<std::pair<long, long> >::iterator	it_first = first_pair.begin();
	std::list<std::pair<long, long> >::iterator	it_second = second_pair.begin();
	std::list<std::pair<long, long> >::iterator	it_pair = pairs.begin();

	while (it_first != first_pair.end() && it_second != second_pair.begin())
	{
		if ((it_pair)->second > (it_second)->second)
		{
			pairs.insert(it_pair, *it_second);
			it_second++;
		}
		else
		{
			pairs.insert(it_pair, *it_first);
			it_first++;
		}
		it_pair++;
	}
	while (it_first != first_pair.end() || it_second != second_pair.begin())
	{
		if (it_first == first_pair.end() )
		{
			pairs.insert(it_pair, *it_second);
			it_second++;
		}
		else
		{
			pairs.insert(it_pair, *it_first);
			it_first++;
		}
		it_pair++;
	}
}
