#include "../../includes/vector_test.hpp"

void	get_allocator()
{
	std::vector<int> v1;
	int * p1;
	unsigned int i;

	ft::vector<int> v2;
	int * p2;

	p1 = v1.get_allocator().allocate(5); p2 = v2.get_allocator().allocate(5);
	for (i = 0; i < 5; i++)
	{
		v1.get_allocator().construct(&p1[i],i);
		v2.get_allocator().construct(&p2[i],i);
	}

	check_size(v1, v2);
	check_capacity(v1, v2);
	check_content(v1, v2);

	for (i=0; i<5; i++)
	{
		v1.get_allocator().destroy(&p1[i]);
		v2.get_allocator().destroy(&p2[i]);
	}
	v1.get_allocator().deallocate(p1,5);
	v2.get_allocator().deallocate(p2,5);
	check_size(v1, v2);
	check_capacity(v1, v2);
	check_content(v1, v2);
}
