#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "1️⃣  Constructors\n\n";
	constructors();
	std::cout << "2️⃣  Operators\n";
	operators_test();
	std::cout << "3️⃣  Begin & end\n";
	begin_end();
	// std::cout << "4️⃣  Rbegin & rend\n\n";
	// rbegin_rend();
	std::cout << "5️⃣  Size, max_size, capacity, empty\n";
	capacity();
	std::cout << "6️⃣  Reserve & resize\n";
	reserve_resize();
	std::cout << "7️⃣  Assign\n";
	assign_test();
	std::cout << "8️⃣  Push_back & pop_back\n";
	push_pop();
	std::cout << "9️⃣  Insert & erase\n";
	insert_erase();
	std::cout << "🔟  Swap\n";
	swap();
	std::cout << "1️⃣ 1️⃣  Clear\n\n";
	clear();
	std::cout << "1️⃣ 2️⃣  Get allocator\n\n";
	get_allocator();

	return 0;
}
