#include "../../includes/vector_test.hpp"

int		main(void)
{
	std::cout << "1️⃣  Constructors\n";
	constructors();
	std::cout << "2️⃣  Operators\n";
	operators_test();
	std::cout << "3️⃣  Begin & end\n";
	begin_end();
	std::cout << "4️⃣  Rbegin & rend\n";
	rbegin_rend();
	std::cout << "5️⃣  Size, max_size, capacity, empty\n";
	capacity();
	std::cout << "6️⃣  Reserve & resize\n";
	reserve_resize();
	std::cout << "7️⃣  Element access\n";
	access();
	std::cout << "8️⃣  Assign\n\n";
	assign_test();
	std::cout << "9️⃣  Push_back & pop_back\n";
	push_pop();
	std::cout << "🔟  Insert & erase\n";
	insert_erase();
	std::cout << "1️⃣ 1️⃣  Swap\n";
	swap();
	std::cout << "1️⃣ 2️⃣  Clear\n\n";
	clear();
	std::cout << "1️⃣ 3️⃣  Get allocator\n";
	get_allocator();
	std::cout << "\n1️⃣ 4️⃣  Reverse iterator\n";
	reverse_iterator();

	return 0;
}
