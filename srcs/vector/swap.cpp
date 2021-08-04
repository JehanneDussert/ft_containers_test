#include "../../includes/vector_test.hpp"

void	swap()
{
	std::vector<int>			v1(10, 8);
	std::vector<int>			v2(8, 10);
	ft::vector<int>				v3(10, 8);
	ft::vector<int>				v4(8, 10);
	int err = 0;

	ft::vector<int>::iterator	it0 = v3.begin();
	ft::vector<int>::iterator	it2 = v4.begin();
	v1.swap(v2);
	v3.swap(v4);

	if (it2 == v3.begin() && it0 == v4.begin())
		std::cout << "x.swap(y) :\t\e[0;32m[⭐️\e[0m";
	else
		std::cout << "x.swap(y) :\t\e[0;31m[💥\e[0m";

	if (v1.size() != v3.size() || v1.capacity() != v3.capacity() || v1.max_size() != v3.max_size())
		err++;
	for (std::vector<int>::iterator	it1 = v1.begin(); it1 != v1.end(); ++it1)
    {
        if (*it1 != *it2)
		    err++;
        ++it2;
    }
    if (!err)
		std::cout << "\e[0;32m⭐️\e[0m";
    else
        std::cout << "\e[0;31m💥\e[0m"; 

	err = 0;
	v1.push_back(6); v1.insert(v1.begin(), 2, 8);
	v3.push_back(6); v3.insert(v3.begin(), 2, 8);

	v1.swap(v2);
	v3.swap(v4);
	if (v1.size() != v3.size() || v1.capacity() != v3.capacity() || v1.max_size() != v3.max_size())
		err++;
	ft::vector<int>::iterator	it4 = v3.begin();
	for (std::vector<int>::iterator	it1 = v1.begin(); it1 != v1.end(); ++it1)
    {
        if (*it1 != *it4)
		    err++;
        ++it4;
    }
    if (!err)
		std::cout << "\e[0;32m⭐️]\e[0m\t";
    else
        std::cout << "\e[0;31m💥]\e[0m\t"; 

	err = 0;
	ft::vector<int>::iterator	it3 = v3.begin();
	ft::vector<int>::iterator	it6 = v4.begin();
	swap(v1, v2);
	swap(v3, v4);
	if (it6 == v3.begin() && it3 == v4.begin())
		std::cout << "\nswap(x, y) :\t\e[0;32m[⭐️\e[0m";
	else
		std::cout << "\nswap(x, y) :\t\e[0;31m[💥\e[0m";

	if (v2.size() != v4.size() || v2.capacity() != v4.capacity() || v2.max_size() != v4.max_size())
		err++;
	for (std::vector<int>::iterator	it1 = v2.begin(); it1 != v2.end(); ++it1)
    {
        if (*it1 != *it3)
		    err++;
        it3++;
    }
    if (!err)
		std::cout << "\e[0;32m⭐️\e[0m";
    else
        std::cout << "\e[0;31m💥\e[0m"; 
	
	err = 0;
	v2.push_back(3); v1.insert(v1.begin(), 40, 80);
	v4.push_back(3); v3.insert(v3.begin(), 40, 80);

	swap(v1, v2);
	swap(v3, v4);
	if (v2.size() != v4.size() || v2.capacity() != v4.capacity() || v2.max_size() != v4.max_size())
		err++;
	ft::vector<int>::iterator	it5 = v4.begin();
	for (std::vector<int>::iterator	it1 = v2.begin(); it1 != v2.end(); ++it1)
    {
        if (*it1 != *it5)
		    err++;
        it5++;
    }
    if (!err)
		std::cout << "\e[0;32m⭐️]\e[0m\t";
    else
        std::cout << "\e[0;31m💥]\e[0m\t"; 

	std::cout << "\n\n";
}
