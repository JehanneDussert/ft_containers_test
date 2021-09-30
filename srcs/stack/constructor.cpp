#include "utils.cpp"

int main(void)
{
	std::cout << "constructor\t";

	std::stack<int>	std_default;
	ft::stack<int>	ft_default;

	std::ofstream monFlux1("logs/stack/ft_stack.constructor.log");
	std::ofstream monFlux2("logs/stack/std_stack.constructor.log");

	if (!(std_default.size() != ft_default.size() || std_default.empty() != ft_default.empty()))
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\e[0;31m[💥]\e[0m\t"; 

	//	ft_stack
	monFlux1 << "Check default stack\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
	monFlux1.close();

	// std_stack
	monFlux2 << "Check default stack\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;
	monFlux2.close();
	std::cout << "\n";
}