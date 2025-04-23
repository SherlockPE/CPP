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
	if (_list.size() % 2 != 0)
	{
		last_value = _list.back();
		_list.pop_back();
	}
	typedef std::list<long>::iterator iterator;

	iterator aux;
	for (iterator it = _list.begin(); it != _list.end(); std::advance(it, 2))
	{
		aux = it;
		aux++;
		if (*it > *aux)
			pairs.push_back(std::make_pair(*aux, *it));
		else
			pairs.push_back(std::make_pair(*it, *aux));
	}
}
