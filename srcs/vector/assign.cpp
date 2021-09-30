#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "assign";

	std::vector<int>			v1;
	ft::vector<int>				v2;
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.assign.log");
	std::ofstream monFlux2("logs/vector/std_vector.assign.log");

	v1.assign(5, 200);
	v2.assign(5, 200);

	monFlux1 << "Fill\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Fill\n";
	monFlux2 << "#################################\n";

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	v1.push_back(5); v1.push_back(4); v1.push_back(3); v1.push_back(2); v1.push_back(1);
	v2.push_back(5); v2.push_back(4); v2.push_back(3); v2.push_back(2); v2.push_back(1);

	v1.pop_back(); v2.pop_back();
	v1.pop_back(); v2.pop_back();

	monFlux1 << "After push & pop\n";
	monFlux1 << "#################################\n";
	monFlux2 << "After push & pop\n";
	monFlux2 << "#################################\n";

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	std::vector<int>			v3;
	ft::vector<int>				v4;

	monFlux1 << "Range\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Range\n";
	monFlux2 << "#################################\n";

	v3.assign(v1.begin() + 1, v1.begin() + 7);
	v4.assign(v2.begin() + 1, v2.begin() + 7);

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	v3.push_back(5); v3.push_back(4); v3.push_back(3); v3.push_back(2); v3.push_back(1);
	v4.push_back(5); v4.push_back(4); v4.push_back(3); v4.push_back(2); v4.push_back(1);
	v3.pop_back(); v4.pop_back();
	v3.pop_back(); v4.pop_back();

	monFlux1 << "After push & pop\n";
	monFlux1 << "#################################\n";
	monFlux2 << "After push & pop\n";
	monFlux2 << "#################################\n";
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	if (err)
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";

	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}