#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "get allocator";
	int err = 0;

	std::vector<int> v1;
	int * p1;
	unsigned int i;

	ft::vector<int> v2;
	int * p2;

	std::ofstream monFlux1("logs/vector/ft_vector.get_allocator.log");
	std::ofstream monFlux2("logs/vector/std_vector.get_allocator.log");
	
	monFlux1 << "Empty vector\n";
	monFlux1 << "#################################\n";
	monFlux2 << "Empty vector\n";
	monFlux2 << "#################################\n";
	p1 = v1.get_allocator().allocate(5); p2 = v2.get_allocator().allocate(5);
	for (i = 0; i < 5; i++)
	{
		v1.get_allocator().construct(&p1[i],i);
		v2.get_allocator().construct(&p2[i],i);
	}

	monFlux1 << "\nAfter construct\n";
	monFlux1 << "#################################\n";
	monFlux2 << "\nAfter construct\n";
	monFlux2 << "#################################\n";
	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	for (i=0; i<5; i++)
	{
		v1.get_allocator().destroy(&p1[i]);
		v2.get_allocator().destroy(&p2[i]);
	}
	v1.get_allocator().deallocate(p1,5);
	v2.get_allocator().deallocate(p2,5);

	monFlux1 << "After destroy & deallocate\n";
	monFlux1 << "#################################\n";
	monFlux2 << "After destroy & deallocate\n";
	monFlux2 << "#################################\n";

	err += check_size(v1, v2, monFlux1, monFlux2);
	err += check_capacity(v1, v2, monFlux1, monFlux2);
	err += check_content(v1, v2, monFlux1, monFlux2);

	if (err)
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";
    monFlux1.close();
    monFlux2.close();
	std::cout << "\n";
}
