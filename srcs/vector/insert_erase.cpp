#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "insert & erase";

	std::vector<int>			v1(10, 8);
	ft::vector<int>				v2(10, 8);
    int err = 0;
	std::ofstream monFlux1("logs/vector/ft_vector.insert_erase.log");
	std::ofstream monFlux2("logs/vector/std_vector.insert_erase.log");

	monFlux1 << "Insert\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Insert\n";
	monFlux2 << "#################################\n";

	v1.insert(v1.begin(), 1); v1.insert(v1.begin() + 3, 2); v1.insert(v1.begin() + 7, 4, 3);
	v2.insert(v2.begin(), 1); v2.insert(v2.begin() + 3, 2); v2.insert(v2.begin() + 7, 4, 3);

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	monFlux1 << "Erase\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Erase\n";
	monFlux2 << "#################################\n";

	v1.erase(v1.begin() + 1, v1.begin() + 4);
	v2.erase(v2.begin() + 1, v2.begin() + 4);

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);
	
    if (err)
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";

	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
