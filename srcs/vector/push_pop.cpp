#include "../../includes/vector_test.hpp"

void	push_pop()
{
	std::vector<int>			v1;
	ft::vector<int>				v2;

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	std::vector<int>::iterator	it1 = v1.begin();
	ft::vector<int>::iterator	it2 = v2.begin();
	// std::vector<int>::iterator	end1 = v1.end();
	// ft::vector<int>::iterator	end2 = v2.end();

    if (*it1 == *it2 && *it1 + 1 == *it2 + 1 && *it1 + 3 == *it2 + 3)
		{ std::cout << "Push :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Push :\t\e[0;31m[💥]\e[0m\t"; }
    
    v1.pop_back(); v1.pop_back(); v1.pop_back();
	v2.pop_back(); v2.pop_back(); v2.pop_back();

    if (v1.empty() && v2.empty())
		{ std::cout << "Pop :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Pop :\t\e[0;31m[💥]\e[0m\t"; }

    std::cout << "\n\n";
}