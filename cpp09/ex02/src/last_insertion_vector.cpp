#include "PmergeMe.hpp"

std::vector<long>::iterator binary_search(std::vector<long>::iterator start, std::vector<long>::iterator end, long number)
{
	std::vector<long>::iterator half;
	if (std::distance(start, end) <= 1)
	{
		if (*start > number)
			return (start);
		std::advance(start, 1);
		return (start);
	}
	half = start + std::distance(start, end) / 2;
	if (number < *half)
		return (binary_search(start, half, number));
	else if (number > *half)
		return (binary_search(half, end, number));
	return (half);
}

void	binary_search_insertion(std::vector<long> &result, std::vector<long> &insertion_order, long last_value)
{
	std::vector<long>::iterator position;
	for (size_t i = 0; i < insertion_order.size(); i++)
	{
		position = binary_search(result.begin(), result.end(),
				insertion_order[i]);
		// std::cout << WHITE << "Intenté meter el número ["<< insertion_order[i] << "]" << " en la posición -->" << std::distance(result.begin(), position) << "\n" << NC;
		result.insert(position, insertion_order[i]);
	}
	if (last_value == -1)
		return ;
	position = binary_search(result.begin(), result.end(), last_value);
	result.insert(position, last_value);
}

void	PmergeMe::last_insertion_vector(long last_value, std::vector<std::pair<long, long> > &pairs, std::vector<long> &result)
{
	long	group_size;

	std::vector<std::pair<long, long> >::iterator it;
	std::vector<long> group;
	std::vector<long> insertion_order;
	it = pairs.begin() + 1;
	while (it != pairs.end())
	{
		group_size = generate_insertion_order();
		for (long i = 0; i < group_size && it != pairs.end(); i++)
		{
			group.push_back((*it).first);
			it++;
		}
		std::reverse(group.begin(), group.end());
		insertion_order.insert(insertion_order.end(), group.begin(),
			group.end());
		group.clear();
	}
	binary_search_insertion(result, insertion_order, last_value);
}