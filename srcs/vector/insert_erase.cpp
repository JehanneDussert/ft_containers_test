#include "../../includes/vector_test.hpp"

void	insert_erase()
{
	std::vector<int>			v1(10, 8);
	ft::vector<int>				v2(10, 8);
    int err = 0;

	v1.insert(v1.begin(), 1); v1.insert(v1.begin() + 3, 2); v1.insert(v1.begin() + 7, 4, 3);
	v2.insert(v2.begin(), 1); v2.insert(v2.begin() + 3, 2); v2.insert(v2.begin() + 7, 4, 3);

	ft::vector<int>::iterator	it2 = v2.begin();
	for (std::vector<int>::iterator	it1 = v1.begin(); it1 != v1.end(); ++it1)
    {
        if (*it1 != *it2)
		    err++;
        if (it2 != v2.end())
            ++it2;
    }
    if (!err)
		std::cout << "Insert :\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Insert :\t\e[0;31m[💥]\e[0m\t";     
    
    err = 0;
	v1.erase(v1.begin() + 1, v1.begin() + 4);
	v2.erase(v2.begin() + 1, v2.begin() + 4);

    ft::vector<int>::iterator	it = v2.begin();
	for (std::vector<int>::iterator	it1 = v1.begin(); it1 != v1.end(); ++ it1)
    {
        if (*it1 != *it)
		    err++;
    }
    if (!err)
		std::cout << "Erase :\t\e[0;32m[⭐️]\e[0m\t";
    else
		std::cout << "Erase :\t\e[0;31m[💥]\e[0m\t";

    std::cout << std::endl;
}
