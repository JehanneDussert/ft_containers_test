#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "\n1️⃣ 4️⃣  Reverse iterator\n";

	std::vector<int>					std_fill(20, 15);
	ft::vector<int>						ft_fill(20, 15);
    std::vector<int>::reverse_iterator	std_rev_it(std_fill.rbegin());
    ft::vector<int>::reverse_iterator	ft_rev_it(ft_fill.rbegin());
	int err = 0;

	if (*ft_rev_it == *std_rev_it)
		std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Default :\t\t\e[0;31m[💥]\e[0m\t";
	
	for (; std_rev_it != std_fill.rend(); std_rev_it++)
	{
		if (*ft_rev_it != *std_rev_it)
			err++;
		++ft_rev_it;
	}
    if (std_fill.size() != ft_fill.size() || std_fill.capacity() != ft_fill.capacity() || std_fill.max_size() != ft_fill.max_size())
		err++;
	if (!err)
		std::cout << "Capacity :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Capacity :\t\t\e[0;31m[💥]\e[0m\t";
	
	err = 0;
	if (!err)
		std::cout << "Content :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Content :\t\t\e[0;31m[💥]\e[0m\t";

	ft_fill.pop_back(); std_fill.pop_back();
	ft_fill.push_back(5); std_fill.push_back(5);
	ft_fill.insert(ft_fill.begin() + 3, 3, 4);
	std_fill.insert(std_fill.begin() + 3, 3, 4);

	err = 0;
	ft_rev_it = ft_fill.rbegin() + 2;
	std_rev_it = std_fill.rbegin() + 2;

	if (*ft_rev_it == *std_rev_it)
		std::cout << "\nOperator :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\nOperator :\t\t\e[0;31m[💥]\e[0m\t";
	
	for (; std_rev_it != std_fill.rend(); std_rev_it++)
	{
		if (*ft_rev_it != *std_rev_it)
			err++;
		++ft_rev_it;
	}
    if (std_fill.size() != ft_fill.size() || std_fill.capacity() != ft_fill.capacity() || std_fill.max_size() != ft_fill.max_size())
		err++;
	if (!err)
		std::cout << "Capacity :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Capacity :\t\t\e[0;31m[💥]\e[0m\t";
	
	err = 0;
	if (!err)
		std::cout << "Content :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Content :\t\t\e[0;31m[💥]\e[0m\t";

	std::cout << std::endl;
}
