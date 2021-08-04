#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "5️⃣  Size, max_size, capacity, empty\n";
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

	return 0;
}
