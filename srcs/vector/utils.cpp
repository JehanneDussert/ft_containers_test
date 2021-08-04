#include "../../includes/vector_test.hpp"

void	check_content(std::vector<int> &v1, ft::vector<int> &v2)
{
	int	err = 0;

	ft::vector<int>::iterator	it2_beg = v2.begin();
	ft::vector<int>::iterator	it2_end = v2.end();

	std::cout << "Content :\t";
	for (std::vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); ++it1)
	{
		if (*it2_beg != *it1)
		{
			std::cout << "\n\e[0;31m[💥]\e[0m\t";
			err++;
		}
		++it2_beg;
	}
	if (!err)
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
	std::cout << '\n';
}

void	check_size(std::vector<int> &v1, ft::vector<int> &v2)
{
	if (v1.size() != v2.size())
		std::cout << "Size :\t\t\e[0;31m[💥]\e[0m\t";
	else
		std::cout << "Size :\t\t\e[0;32m[⭐️]\e[0m\t";
}

void	check_capacity(std::vector<int> &v1, ft::vector<int> &v2)
{
	if (v1.capacity() != v2.capacity())
		std::cout << "Capacity :\t\e[0;31m[💥]\e[0m\t";
	else
		std::cout << "Capacity :\t\e[0;32m[⭐️]\e[0m\t";
}