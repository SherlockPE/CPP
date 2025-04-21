#include "PmergeMe.hpp"

// VECTOR
void PmergeMe::make_and_sort_pairs_vector(std::vector<std::pair<long, long> > &pairs, long &last_value)
{
	if (_array.size() % 2 != 0)
	{
		last_value = _array.back();
		_array.pop_back();
	}
	for (size_t i = 0; i < _array.size(); i += 2)
	{
		if (_array[i] > _array[i + 1])
			pairs.push_back(std::make_pair(_array[i + 1], _array[i]));
		else
			pairs.push_back(std::make_pair(_array[i], _array[i + 1]));
	}
}

// LIST
void PmergeMe::make_and_sort_pairs_list(std::list<std::pair<long, long> > &pairs, long &last_value)
{
	if (_array.size() % 2 != 0)
	{
		last_value = _array.back();
		_array.pop_back();
	}
	for (size_t i = 0; i < _array.size(); i += 2)
	{
		if (_array[i] > _array[i + 1])
			pairs.push_back(std::make_pair(_array[i + 1], _array[i]));
		else
			pairs.push_back(std::make_pair(_array[i], _array[i + 1]));
	}
}
