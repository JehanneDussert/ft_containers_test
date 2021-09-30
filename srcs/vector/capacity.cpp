#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "capacity\t";
	std::vector<int>			v1;
	ft::vector<int>				v2;
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.capacity.log");
	std::ofstream monFlux2("logs/vector/std_vector.capacity.log");

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);

	v1.pop_back(); v1.pop_back(); v1.pop_back(); 
	v2.pop_back(); v2.pop_back(); v2.pop_back();

	if (v1.empty() == v2.empty())
		;
	else
		err++;
	if (!err)
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\e[0;31m[💥]\e[0m\t";

	monFlux1.close();
	monFlux2.close();
	std::cout << "\n";
	return 0;
}
