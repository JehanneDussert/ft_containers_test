#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "reverse iterator";

	std::vector<int>					std_fill(20, 15);
	ft::vector<int>						ft_fill(20, 15);
    std::vector<int>::reverse_iterator	std_rev_it(std_fill.rbegin());
    ft::vector<int>::reverse_iterator	ft_rev_it(ft_fill.rbegin());
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.reverse_iterator.log");
	std::ofstream monFlux2("logs/vector/std_vector.reverse_iterator.log");

	if (*ft_rev_it == *std_rev_it)
	{
		monFlux1 << "Default done\n\n";
    	monFlux2 << "Default done\n\n";
	}
	else
		err++;

	monFlux1 << "Size: " << ft_fill.size() << std::endl;
    monFlux2 << "Size: " << std_fill.size() << std::endl;
	monFlux1 << "Capacity: " << ft_fill.capacity() << std::endl;
    monFlux2 << "Capacity: " << std_fill.capacity() << std::endl;
	monFlux1 << "Max size: " << ft_fill.max_size() << std::endl;
    monFlux2 << "Max size: " << std_fill.max_size() << std::endl;

    monFlux1 << "Content: \n";
    monFlux2 << "Content: \n";
	for (; std_rev_it != std_fill.rend(); std_rev_it++)
	{
		monFlux1 << *ft_rev_it << std::endl;
    	monFlux2 << *std_rev_it << std::endl;
		if (*ft_rev_it != *std_rev_it)
			err++;
		++ft_rev_it;
	}
    if (std_fill.size() != ft_fill.size() || std_fill.capacity() != ft_fill.capacity() || std_fill.max_size() != ft_fill.max_size())
		err++;

	ft_fill.pop_back(); std_fill.pop_back();
	ft_fill.push_back(5); std_fill.push_back(5);
	ft_fill.insert(ft_fill.begin() + 3, 3, 4);
	std_fill.insert(std_fill.begin() + 3, 3, 4);

	ft_rev_it = ft_fill.rbegin() + 2;
	std_rev_it = std_fill.rbegin() + 2;

	if (*ft_rev_it == *std_rev_it)
	{
		monFlux1 << "operator done\n";
   		monFlux2 << "operator done\n";
	}
	else
		err++;
	
	monFlux1 << "Size: " << ft_fill.size() << std::endl;
    monFlux2 << "Size: " << std_fill.size() << std::endl;
	monFlux1 << "Capacity: " << ft_fill.capacity() << std::endl;
    monFlux2 << "Capacity: " << std_fill.capacity() << std::endl;
	monFlux1 << "Max size: " << ft_fill.max_size() << std::endl;
    monFlux2 << "Max size: " << std_fill.max_size() << std::endl;

    monFlux1 << "Content: \n";
    monFlux2 << "Content: \n";
	for (; std_rev_it != std_fill.rend(); std_rev_it++)
	{
		monFlux1 << *ft_rev_it << std::endl;
    	monFlux2 << *std_rev_it << std::endl;
		if (*ft_rev_it != *std_rev_it)
			err++;
		++ft_rev_it;
	}
    if (std_fill.size() != ft_fill.size() || std_fill.capacity() != ft_fill.capacity() || std_fill.max_size() != ft_fill.max_size())
		err++;
	
	if (err)
		std::cout << "\e[0;31m[💥]\e[0m";
	else
		std::cout << "\e[0;32m[⭐️]\e[0m";
	monFlux1.close();
	monFlux2.close();

	std::cout << "\n";
}
