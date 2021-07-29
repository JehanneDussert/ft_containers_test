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
			std::cout << "\n\e[0;31m[💥]\e[0m\t"; //[REAL] " << *it1 << "\t[YOURS] " << *it2_beg;
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
		std::cout << "Size :\t\e[0;31m[💥]\e[0m\t"; //[REAL] " << v1.size() << " [YOURS] " << v2.size() << "\n";
	else
		std::cout << "Size :\t\e[0;32m[⭐️]\e[0m\t";
}

void	check_capacity(std::vector<int> &v1, ft::vector<int> &v2)
{
	// corriger constructeur par copie
	if (v1.capacity() != v2.capacity())
		std::cout << "Capacity :\t\e[0;31m[💥]\e[0m\t"; //[REAL] " << v1.capacity() << " [YOURS] " << v2.capacity() << "\n";
	else
		std::cout << "Capacity :\t\e[0;32m[⭐️]\e[0m\t";
}

void	capacity()
{
	std::vector<int>			v1;
	ft::vector<int>				v2;

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	check_size(v1, v2);
	check_capacity(v1, v2);

	if (v1.max_size() == v2.max_size())
		std::cout << "Max size :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Max size :\t\e[0;31m[💥]\e[0m\t";

	v1.pop_back(); v1.pop_back(); v1.pop_back(); 
	v2.pop_back(); v2.pop_back(); v2.pop_back();

	if (v1.empty() == v2.empty())
		std::cout << "Empty :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Empty :\t\e[0;31m[💥]\e[0m\t";
	std::cout << "\n\n";
}
