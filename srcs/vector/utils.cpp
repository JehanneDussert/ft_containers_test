#include "../../includes/vector_test.hpp"
#include <fstream>

int check_content(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int	err = 0;

	ft::vector<int>::iterator	it2_beg = v2.begin();
	ft::vector<int>::iterator	it2_end = v2.end();

	monFlux1 << "Content :\n";
	monFlux2 << "Content :\n";
	for (std::vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); ++it1)
	{
		monFlux2 << "\t\t\t" << *it1 << '\n';
		monFlux1 << "\t\t\t" << *it2_beg << '\n';
		if (*it2_beg != *it1)
			err++;
		++it2_beg;
	}
	monFlux2 << "\n";
	monFlux1 << "\n";

	return err;
}

int	check_size(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	monFlux1 << "Size :\t\t" << v2.size() << std::endl;
	monFlux2 << "Size :\t\t" << v1.size() << std::endl;
	monFlux1 << "Max_size :\t" << v2.max_size() << std::endl;
	monFlux2 << "Max_size :\t" << v1.max_size() << std::endl;

	int err = 0;
	if (v1.size() != v2.size() || v1.max_size() != v2.max_size())
		err++;

	return err;
}

int	check_capacity(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	monFlux1 << "Capacity :\t" << v2.capacity() << std::endl;
	monFlux2 << "Capacity :\t" << v1.capacity() << std::endl;
	int err = 0;

	if (v1.capacity() != v2.capacity())
		err++;

	return err;
}