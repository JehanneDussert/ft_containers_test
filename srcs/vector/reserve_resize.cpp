#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "reserve & resize";

	std::vector<int>			v1(2, 8);
	ft::vector<int>				v2(2, 8);
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.reserve_resize.log");
	std::ofstream monFlux2("logs/vector/std_vector.reserve_resize.log");
	
	monFlux1 << "Reserve\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Reserve\n";
	monFlux2 << "#################################\n";

	v1.reserve(5); v2.reserve(5);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);
	
	v1.reserve(7); v2.reserve(7);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	v1.reserve(1); v2.reserve(1);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	monFlux1 << "Resize\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Resize\n";
	monFlux2 << "#################################\n";

	std::vector<int>			v3(2, 8);
	ft::vector<int>				v4(2, 8);

	v3.resize(5); v4.resize(5);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);
	
	v3.resize(2); v4.resize(7);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	v3.resize(1); v4.resize(1);
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	if (err)
		std::cout << "\e[0;31m[💥]\e[0m";
	else
		std::cout << "\e[0;32m[⭐️]\e[0m";
	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}