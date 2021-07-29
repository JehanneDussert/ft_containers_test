#include "../../includes/vector_test.hpp"

void	reserve_resize()
{
	std::vector<int>			v1(2, 8);
	ft::vector<int>				v2(2, 8);

	v1.reserve(5); v2.reserve(5);
	// std::cout << v1.capacity() << ' ' << v2.capacity() << std::endl;
	if (v1.capacity() == v2.capacity())
		{ std::cout << "Reserve :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Reserve :\t\e[0;31m[💥]\e[0m\t"; }
	
	v1.reserve(7); v2.reserve(7);
	// std::cout << v1.capacity() << ' ' << v2.capacity() << std::endl;
	if (v1.capacity() == v2.capacity())
		{ std::cout << "Reserve :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Reserve :\t\e[0;31m[💥]\e[0m\t"; }

	v1.reserve(1); v2.reserve(1);
	if (v1.capacity() == v2.capacity())
		{ std::cout << "Reserve :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Reserve :\t\e[0;31m[💥]\e[0m\t"; }

	
	std::vector<int>			v3(2, 8);
	ft::vector<int>				v4(2, 8);

	v3.resize(5); v4.resize(5);
	if (v3.capacity() == v4.capacity())
		{ std::cout << "\nResize :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "\nResize :\t\e[0;31m[💥]\e[0m\t"; }
	
	v3.resize(2); v4.resize(7);
	if (v3.capacity() == v4.capacity())
		{ std::cout << "Resize :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Resize :\t\e[0;31m[💥]\e[0m\t"; }

	v3.resize(1); v4.resize(1);
	if (v3.capacity() == v4.capacity())
		{ std::cout << "Resize :\t\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "Resize :\t\e[0;31m[💥]\e[0m\t"; }

	std::cout << "\n\n";
}