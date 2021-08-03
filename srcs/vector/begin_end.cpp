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
		{ std::cout << "Begin :\t\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Begin :\t\t\e[0;31m[💥]\e[0m\t"; }
    while (it1 != end1)
		it1++;
	while (it2 != end2)
		it2++;
	if (it1 == v1.end())
		{ std::cout << "End :\t\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "End :\t\t\e[0;31m[💥]\e[0m\t"; }
    std::cout << "\n\n";
}

void	rbegin_rend()
{
	std::vector<int>	v1(5);
	ft::vector<int>		v2(5);

	std::vector<int>::reverse_iterator	rit1 = v1.rbegin();
	ft::vector<int>::reverse_iterator	rit2 = v2.rbegin();
	for (int i = 0; rit1 !=  v1.rend(); ++rit1)
		*rit1 = ++i;
	for (int i = 0; rit2 !=  v2.rend(); ++rit2)
		*rit2 = ++i;
	check_size(v1, v2);
	check_capacity(v1, v2);
	check_content(v1, v2);

	std::cout << "\n\n";
}
