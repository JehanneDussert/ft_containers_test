#include "../../includes/vector_test.hpp"

int begin_end(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	std::vector<int>			v1;
	ft::vector<int>				v2;
	int err = 0;

	v1.push_back(1); v1.push_back(2); v1.push_back(3);
	v2.push_back(1); v2.push_back(2); v2.push_back(3);

	std::vector<int>::iterator	it1 = v1.begin();
	ft::vector<int>::iterator	it2 = v2.begin();
	std::vector<int>::iterator	end1 = v1.end();
	ft::vector<int>::iterator	end2 = v2.end();

	monFlux1 << "Begin & end\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Begin & end\n";
	monFlux2 << "#################################\n";
	if (*it1 == *it2 && it1 == v1.begin())
		;
	else
		err++;

	monFlux2 << "Begin is " << *it2 << "and should be " << *it1 << std::endl;
	monFlux1 << "Begin is " << *it2 << "and should be " << *it1 << std::endl;

    while (it1 != end1)
		it1++;
	while (it2 != end2)
		it2++;
	if (it1 == v1.end())
	{
		monFlux1 << "End() is ok\n";
		monFlux2 << "End() is ok\n";
	}
	else
	{
		monFlux1 << "Wrong end()\n";
		monFlux2 << "Wrong end()\n";
		err++;
	}

	return err;
}

int rbegin_rend(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	std::vector<int>	v1(5);
	ft::vector<int>		v2(5);
	int err = 0;

	monFlux1 << "Rbegin & rend\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Rbegin & rend\n";
	monFlux2 << "#################################\n";

	std::vector<int>::reverse_iterator	rit1 = v1.rbegin();
	ft::vector<int>::reverse_iterator	rit2 = v2.rbegin();

	for (int i = 0; rit1 !=  v1.rend(); ++rit1)
		*rit1 = ++i;
	for (int i = 0; rit2 !=  v2.rend(); ++rit2)
		*rit2 = ++i;
	
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	return err;
}

int main(void)
{
	std::ofstream monFlux1("logs/vector/ft_vector.assign.log");
	std::ofstream monFlux2("logs/vector/std_vector.assign.log");

	std::cout << "begin & end";
	if (begin_end(monFlux1, monFlux2))
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";
	std::cout << "\nrbegin & rend";
	if (rbegin_rend(monFlux1, monFlux2))
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";

	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
