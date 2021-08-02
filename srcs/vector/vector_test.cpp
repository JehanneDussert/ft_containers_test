#include "../../includes/vector_test.hpp"
#include <list>

#define TESTED_NAMESPACE ft
#define TESTED_TYPE std::string

template <typename T>
void	printSize(TESTED_NAMESPACE::vector<T> const &vct, bool print_content = 1)
{
	std::cout << "size: " << vct.size() << std::endl;
	std::cout << "capacity: " << vct.capacity() << std::endl;
	std::cout << "max_size: " << vct.max_size() << std::endl;
	if (print_content)
	{
		typename TESTED_NAMESPACE::vector<T>::const_iterator it = vct.begin();
		typename TESTED_NAMESPACE::vector<T>::const_iterator ite = vct.end();
		std::cout << std::endl << "Content is:" << std::endl;
		for (; it != ite; ++it)
			std::cout << "- " << *it << std::endl;
	}
	std::cout << "###############################################" << std::endl;
}

class foo {
	public:
		foo(void) { };
		~foo(void) { };
		void m(void) { std::cout << "foo::m called [" << this->value << "]" << std::endl; };
		void m(void) const { std::cout << "foo::m const called [" << this->value << "]" << std::endl; };
		foo &operator=(int src) { this->value = src; return *this; };
		int getValue(void) const { return this->value; };
	private:
		int	value;
};

std::ostream	&operator<<(std::ostream &o, foo const &bar) {
	o << bar.getValue();
	return o;
}

// void	checkErase(TESTED_NAMESPACE::vector<TESTED_TYPE> const &vct,
// 					TESTED_NAMESPACE::vector<TESTED_TYPE>::const_iterator const &it)
// {
// 	static int i = 0;
// 	std::cout << "[" << i++ << "] " << "erase: " << it - vct.begin() << std::endl;
// 	printSize(vct);
// }

void	is_empty(TESTED_NAMESPACE::vector<TESTED_TYPE> const &vct)
{
	std::cout << "is_empty: " << vct.empty() << std::endl;
}

void	prepost_incdec(TESTED_NAMESPACE::vector<TESTED_TYPE> &vct)
{
	TESTED_NAMESPACE::vector<TESTED_TYPE>::iterator it = vct.begin();
	TESTED_NAMESPACE::vector<TESTED_TYPE>::iterator it_tmp;

	std::cout << "Pre inc" << std::endl;
	it_tmp = ++it;
	std::cout << *it_tmp << " | " << *it << std::endl;

	std::cout << "Pre dec" << std::endl;
	it_tmp = --it;
	std::cout << *it_tmp << " | " << *it << std::endl;

	std::cout << "Post inc" << std::endl;
	it_tmp = it++;
	std::cout << *it_tmp << " | " << *it << std::endl;

	std::cout << "Post dec" << std::endl;
	it_tmp = it--;
	std::cout << *it_tmp << " | " << *it << std::endl;
	std::cout << "###############################################" << std::endl;
}

int		main(void)
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
	std::cout << "7️⃣  Element access\n";
	access();
	std::cout << "8️⃣ Assign\n";
	assign_test();
	std::cout << "9️⃣  Push_back & pop_back\n";
	push_pop();
	std::cout << "🔟  Insert & erase\n";
	insert_erase();
	std::cout << "1️⃣ 1️⃣  Swap\n";
	swap();
	std::cout << "1️⃣ 2️⃣  Clear\n\n";
	clear();
	std::cout << "1️⃣ 3️⃣  Get allocator\n\n";
	get_allocator();

	return 0;
}
