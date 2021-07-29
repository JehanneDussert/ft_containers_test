#include "../../includes/vector_test.hpp"

void	begin_end()
{
	std::vector<int>			v1;
	ft::vector<int>				v2;

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	std::vector<int>::iterator	it1 = v1.begin();
	ft::vector<int>::iterator	it2 = v2.begin();
	std::vector<int>::iterator	end1 = v1.end();
	ft::vector<int>::iterator	end2 = v2.end();

	if (*it1 == *it2 && it1 == v1.begin())
		{ std::cout << "Begin :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Begin :\t\e[0;31m[💥]\e[0m\t"; }
    while (it1 != end1)
		it1++;
	while (it2 != end2)
		it2++;
	if (it1 == v1.end())
		{ std::cout << "End :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "End :\t\e[0;31m[💥]\e[0m\t"; }
    std::cout << "\n\n";
}