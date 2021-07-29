#include "../../includes/vector_test.hpp"

void	assign_test()
{
	std::vector<int>			v1;
	ft::vector<int>				v2;

	std::cout << "📍 FILL\n";
	v1.assign(5, 200);
	v2.assign(5, 200);

	check_size(v1, v2);
	check_capacity(v1, v2);
	check_content(v1, v2);

	v1.push_back(5); v1.push_back(4); v1.push_back(3); v1.push_back(2); v1.push_back(1);
	v2.push_back(5); v2.push_back(4); v2.push_back(3); v2.push_back(2); v2.push_back(1);
	v1.pop_back(); v2.pop_back();
	v1.pop_back(); v2.pop_back();

	check_size(v1, v2);
	check_capacity(v1, v2);
	check_content(v1, v2);

	std::vector<int>			v3;
	ft::vector<int>				v4;

	std::cout << "\n📍 RANGE\n";
	v3.assign(v1.begin() + 1, v1.begin() + 7);
	v4.assign(v2.begin() + 1, v2.begin() + 7);

	check_size(v3, v4);
	check_capacity(v3, v4);
	check_content(v3, v4);

	v3.push_back(5); v3.push_back(4); v3.push_back(3); v3.push_back(2); v3.push_back(1);
	v4.push_back(5); v4.push_back(4); v4.push_back(3); v4.push_back(2); v4.push_back(1);
	v3.pop_back(); v4.pop_back();
	v3.pop_back(); v4.pop_back();

	check_size(v3, v4);
	check_capacity(v3, v4);
	check_content(v3, v4);

	std::cout << "\n";
}