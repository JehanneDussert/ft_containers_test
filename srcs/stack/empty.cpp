#include "utils.cpp"

int main(void)
{
	std::cout << "empty\t";
	int ret = 0;

	std::stack<int>	std_default;
	ft::stack<int>	ft_default;
	std::ofstream monFlux1("logs/stack/ft_stack.empty.log");
	std::ofstream monFlux2("logs/stack/std_stack.empty.log");

	if (ft_default.size() == std_default.size() && ft_default.empty())
		;
	else
		ret++;
	
	//	ft_stack
	monFlux1 << "Check empty stack\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;

	ft_default.push(5);
	monFlux1 << "\nCheck fill stack\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
	monFlux1.close();

	// std_stack
	monFlux2 << "Check empty stack\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;

	std_default.push(5);
	monFlux2 << "\nCheck fill stack\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;
	monFlux2.close();

	if (ft_default.size() == std_default.size() && !ft_default.empty())
		;
	else
		ret++;
	if (!ret)
		std::cout << "\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\t\e[0;31m[💥]\e[0m\t"; 

	std::cout << "\n";
}