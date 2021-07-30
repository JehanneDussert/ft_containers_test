#include "../../includes/vector_test.hpp"
#include <list>

template <typename T>
void	printSize(ft::vector<T> const &vct, bool print_content = 1)
{
	std::cout << "size: " << vct.size() << std::endl;
	std::cout << "capacity: " << vct.capacity() << std::endl;
	std::cout << "max_size: " << vct.max_size() << std::endl;
	if (print_content)
	{
		typename ft::vector<T>::const_iterator it = vct.begin();
		typename ft::vector<T>::const_iterator ite = vct.end();
		std::cout << std::endl << "Content is:" << std::endl;
		for (; it != ite; ++it)
			std::cout << "- " << *it << std::endl;
	}
	std::cout << "###############################################" << std::endl;
}

void	is_empty(ft::vector<int> const &vct)
{
	std::cout << "is_empty: " << vct.empty() << std::endl;
}

int		main(void)
{
	const int start_size = 7;
	ft::vector<int> vct(start_size, 20);
	ft::vector<int> vct2;
	ft::vector<int>::iterator it = vct.begin();

	for (int i = 2; i < start_size; ++i)
		it[i] = (start_size - i) * 3;
	// printSize(vct, true);

	vct.resize(10, 42);
	// printSize(vct, true);

	vct.resize(18, 43);
	// printSize(vct, true);
	vct.resize(10);
	// printSize(vct, true);
	vct.resize(23, 44);
	// printSize(vct, true);
	vct.resize(5);
	printSize(vct, true);
	vct.reserve(5);
	printSize(vct, true);
	vct.reserve(3);
	printSize(vct, true);
	// printSize(vct, true);
	vct.resize(87);
	printSize(vct, true);
	vct.resize(5);
	printSize(vct, true);

	is_empty(vct2);
	vct2 = vct;
	is_empty(vct2);
	vct.reserve(vct.capacity() + 1);
	printSize(vct, true);
	printSize(vct2, true);

	vct2.resize(0);
	is_empty(vct2);
	printSize(vct2, true);
	// std::cout << "1️⃣  Constructors\n\n";
	// constructors();
	// std::cout << "2️⃣  Operators\n";
	// operators_test();
	// std::cout << "3️⃣  Begin & end\n";
	// begin_end();
	// // std::cout << "4️⃣  Rbegin & rend\n\n";
	// // rbegin_rend();
	// std::cout << "5️⃣  Size, max_size, capacity, empty\n";
	// capacity();
	// std::cout << "6️⃣  Reserve & resize\n";
	// reserve_resize();
	// std::cout << "7️⃣  Element access\n";
	// access();
	// std::cout << "8️⃣ Assign\n";
	// assign_test();
	// std::cout << "9️⃣  Push_back & pop_back\n";
	// push_pop();
	// std::cout << "🔟  Insert & erase\n";
	// insert_erase();
	// std::cout << "1️⃣ 1️⃣  Swap\n";
	// swap();
	// std::cout << "1️⃣ 2️⃣  Clear\n\n";
	// clear();
	// std::cout << "1️⃣ 3️⃣  Get allocator\n\n";
	// get_allocator();

	return 0;
}
