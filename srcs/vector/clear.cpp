#include "../../includes/vector_test.hpp"

void	clear()
{
	std::vector<int>			v1(10, 8);
	ft::vector<int>				v2(10, 8);

    v1.clear(); v2.clear();
    if (v1.empty() && v2.empty() && v1.size() == v2.size() && v1.capacity() == v2.capacity() && v1.max_size() == v2.max_size())
		std::cout << "Clear :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Clear :\t\t\e[0;31m[💥]\e[0m\t";

    v1.push_back(8); v2.push_back(8);
    v1.clear(); v2.clear();
    if (v1.empty() && v2.empty() && v1.size() == v2.size() && v1.capacity() == v2.capacity() && v1.max_size() == v2.max_size())
		std::cout << "Clear :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Clear :\t\t\e[0;31m[💥]\e[0m\t";

    std::cout << "\n\n";
}
