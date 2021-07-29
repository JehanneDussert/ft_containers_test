#include "../../includes/vector_test.hpp"

int main(void)
{
	// std::cout << "1️⃣  Constructors\n\n";
	std::cout << "2️⃣  Operators\n";
	operators_test();
	std::cout << "3️⃣  Begin & end\n";
	begin_end();
	// std::cout << "4️⃣  Rbegin & rend\n\n";
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
	// std::cout << "🔟  Swap x 2\n\n";
	// std::cout << "1️⃣1️⃣  Clear\n\n";
	// std::cout << "1️⃣2️⃣  Get allocator\n\n";

	return 0;
}
