#include "../../includes/vector_test.hpp"

void	reserve_resize()
{
	std::vector<int>			v1(2, 8);
	ft::vector<int>				v2(2, 8);

	v1.reserve(5); v2.reserve(5);
	if (v1.capacity() == v2.capacity())
		{ std::cout << "Reserve :\t\e[0;32m[⭐️\e[0m"; }
	else
		{ std::cout << "Reserve :\t\e[0;31m[💥\e[0m"; }
	
	v1.reserve(7); v2.reserve(7);
	if (v1.capacity() == v2.capacity())
		{ std::cout << "\e[0;32m⭐️\e[0m"; }
	else
		{ std::cout << "\e[0;31m💥\e[0m"; }

	v1.reserve(1); v2.reserve(1);
	if (v1.capacity() == v2.capacity())
		{ std::cout << "\e[0;32m⭐️]\e[0m"; }
	else
		{ std::cout << "\e[0;31m💥]\e[0m"; }

	
	std::vector<int>			v3(2, 8);
	ft::vector<int>				v4(2, 8);

	v3.resize(5); v4.resize(5);
	if (v3.size() == v4.size())
		{ std::cout << "\nResize :\t\e[0;32m[⭐️\e[0m"; }
	else
		{ std::cout << "\nResize :\t\e[0;31m[💥\e[0m"; }
	
	v3.resize(2); v4.resize(7);
	if (v3.size() == v4.size())
		std::cout << "\e[0;31m💥\e[0m";
	else
		std::cout << "\e[0;32m⭐️\e[0m";

	v3.resize(1); v4.resize(1);
	if (v3.size() == v4.size())
		{ std::cout << "\e[0;32m⭐️]\e[0m"; }
	else
		{ std::cout << "\e[0;31m💥]\e[0m"; }

	std::cout << "\n\n";
}