#include "PmergeMe.hpp"

// VECTOR
void	PmergeMe::recursive_sort_vector(std::vector<std::pair<long, long> > &pairs)
{
	if (pairs.size() <= 1)
		return ;
	std::vector<std::pair<long, long> > first_pair(pairs.begin(), pairs.begin() + pairs.size() / 2);
	std::vector<std::pair<long, long> > second_pair(pairs.begin() + pairs.size() / 2, pairs.end());
	recursive_sort_vector(first_pair);
	recursive_sort_vector(second_pair);

	size_t	it_first = 0;
	size_t	it_second = 0;
	size_t	it_pair = 0;
	while (it_first < first_pair.size() && it_second < second_pair.size())
	{
		if (first_pair[it_first].second > second_pair[it_second].second)
			pairs[it_pair] = second_pair[it_second++];
		else
			pairs[it_pair] = first_pair[it_first++];
		it_pair++;
	}
	while (it_first < first_pair.size() || it_second < second_pair.size())
	{
		if (it_first == first_pair.size())
			pairs[it_pair] = second_pair[it_second++];
		else
			pairs[it_pair] = first_pair[it_first++];
		it_pair++;
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

	while (it_first != first_pair.end() && it_second != second_pair.end())
	{
		if ((it_first)->second > (it_second)->second)
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
	while (it_first != first_pair.end() || it_second != second_pair.end())
	{
		if (it_first == first_pair.end())
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
