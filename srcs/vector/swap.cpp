#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "swap\t\t";

	std::vector<int>			v1(10, 8);
	std::vector<int>			v2(8, 10);
	ft::vector<int>				v3(10, 8);
	ft::vector<int>				v4(8, 10);
	std::ofstream monFlux1("logs/vector/ft_vector.swap.log");
	std::ofstream monFlux2("logs/vector/std_vector.swap.log");
	int err = 0;

	ft::vector<int>::iterator	it0 = v3.begin();
	ft::vector<int>::iterator	it2 = v4.begin();
	v1.swap(v2);
	v3.swap(v4);

	monFlux1 << "x.swap(y)\n";
	monFlux1 << "#################################\n";
	monFlux2 << "x.swap(y)\n";
	monFlux2 << "#################################\n";
	if (it2 == v3.begin() && it0 == v4.begin())
		;
	else
		err++;

	err += check_size(v1, v3, monFlux1, monFlux2);
	err += check_capacity(v1, v3, monFlux1, monFlux2);
	err += check_content(v1, v3, monFlux1, monFlux2);

	v1.push_back(6); v1.insert(v1.begin(), 2, 8);
	v3.push_back(6); v3.insert(v3.begin(), 2, 8);

	v1.swap(v2);
	v3.swap(v4);

	err += check_size(v1, v3, monFlux1, monFlux2);
	err += check_capacity(v1, v3, monFlux1, monFlux2);
	err += check_content(v1, v3, monFlux1, monFlux2);

	swap(v1, v2);
	swap(v3, v4);

	monFlux1 << "swap(x, y)\n";
	monFlux1 << "#################################\n";
	monFlux2 << "swap(x, y)\n";
	monFlux2 << "#################################\n";

	err += check_size(v2, v4, monFlux1, monFlux2);
	err += check_capacity(v2, v4, monFlux1, monFlux2);
	err += check_content(v2, v4, monFlux1, monFlux2);
	
	v2.push_back(3); v1.insert(v1.begin(), 40, 80);
	v4.push_back(3); v3.insert(v3.begin(), 40, 80);

	swap(v1, v2);
	swap(v3, v4);

	err += check_size(v2, v4, monFlux1, monFlux2);
	err += check_capacity(v2, v4, monFlux1, monFlux2);
	err += check_content(v2, v4, monFlux1, monFlux2);

    if (!err)
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "\e[0;31m[💥]\e[0m\t"; 

	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
