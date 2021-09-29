#include "../../../srcs/Stack/Stack_functions.hpp"
#include <stack>
#include <iostream>
#include <string>
#include <list>
#include <fstream>

void	check_size(std::stack<int> &v1, ft::stack<int> &v2)
{
	if (v1.size() != v2.size())
		std::cout << "Size :\t\t\e[0;31m[💥]\e[0m\t";
	else
		std::cout << "Size :\t\t\e[0;32m[⭐️]\e[0m\t";
}