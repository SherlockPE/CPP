#include "PmergeMe.hpp"

std::list<long>::iterator binary_search(std::list<long>::iterator start, std::list<long>::iterator end, long number)
{
	std::list<long>::iterator half = start;
	if (std::distance(start, end) <= 1)
	{
		if (*start > number)
			return (start);
		std::advance(start, 1);
		return (start);
	}
	std::advance(half, std::distance(start, end) / 2);
	if (number < *half)
		return (binary_search(start, half, number));
	else if (number > *half)
		return (binary_search(half, end, number));
	return (half);
}

void	binary_search_insertion(std::list<long> &result, std::list<long> &insertion_order, long last_value)
{
	std::list<long>::iterator position;
	std::list<long>::iterator it_insertion = insertion_order.begin();

	for (; it_insertion != insertion_order.end(); it_insertion++)
	{
		position = binary_search(result.begin(), result.end(), *(it_insertion));
		std::cout << WHITE << "Intenté meter el número ["<< *(it_insertion) << "]" << " en la posición -->" << std::distance(result.begin(), position) << "\n" << NC;
		result.insert(position, *(it_insertion));
	}
	if (last_value == -1)
		return ;
	position = binary_search(result.begin(), result.end(), last_value);
	result.insert(position, last_value);
}

void	PmergeMe::last_insertion_list(long last_value, std::list<std::pair<long, long> > &pairs, std::list<long> &result)
{
	long	group_size;

	std::list<std::pair<long, long> >::iterator it;
	std::list<long> group;
	std::list<long> insertion_order;
	it = pairs.begin();
	std::advance(it, 1);
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