#include "utils.cpp"

int main(void)
{
	std::cout << "1️⃣  Constructor\t";

	std::stack<int>	std_default;
	ft::stack<int>	ft_default;

	if (!(std_default.size() != ft_default.size() || std_default.empty() != ft_default.empty()))
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\e[0;31m[💥]\e[0m\t"; 

	std::cout << "\n\n";
}