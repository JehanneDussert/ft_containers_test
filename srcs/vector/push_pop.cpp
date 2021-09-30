#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "push & pop back";

	std::vector<int>			v1;
	ft::vector<int>				v2;
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.push_pop_back.log");
	std::ofstream monFlux2("logs/vector/std_vector.push_pop_back.log");

	monFlux1 << "Push_back\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Push_back\n";
	monFlux2 << "#################################\n";

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);
    
	monFlux1 << "Pop_back\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Pop_back\n";
	monFlux2 << "#################################\n";

    v1.pop_back(); v1.pop_back(); v1.pop_back();
	v2.pop_back(); v2.pop_back(); v2.pop_back();

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

    if (v1.empty() && v2.empty())
		;
	else
		err++;
	
	if (err)
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";
	
    std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}