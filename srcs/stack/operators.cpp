#include "utils.cpp"

int main(void)
{
	std::cout << "operators\t";

	ft::stack<int>	ft_s1;
	ft::stack<int>	ft_s2;
	ft::stack<int>	ft_copy;
	int ret = 0;

	ft_s1.push(1);
	ft_s1.push(2);
	ft_s1.push(3);
	ft_s1.push(4);
	ft_s1.push(5);
	ft_s1.push(6);
	ft_s2.push(1);

	std::stack<int>	std_s1;
	std::stack<int>	std_s2;
	std::stack<int>	std_copy;

	std_s1.push(1);
	std_s1.push(2);
	std_s1.push(3);
	std_s1.push(4);
	std_s1.push(5);
	std_s1.push(6);
	std_s2.push(1);

	ft_copy = ft_s1;
	std_copy = std_s1;

	std::ofstream monFlux1("logs/stack/ft_stack.operators.log");
	std::ofstream monFlux2("logs/stack/std_stack.operators.log");

	// std::cout << "operator= :\t";
	if (ft_s1 != ft_copy)
		ret++;
	else if (ft_s1 == ft_copy)
		;
	else
		ret++;
	if (ft_s2 < ft_s1)
		;
	else
		ret++;
	if (ft_copy > ft_s2)
		;
	else
		ret++;
	if (ft_s1 >= ft_copy)
		;
	else
		ret++;
	if (ft_s2 <= ft_s1)
		;
	else
		ret++;

	if (!ret)
		std::cout << "\e[0;32m[⭐️]\e[0m";
	else
		std::cout << "\e[0;31m[💥]\e[0m";

	//	ft_stack
	monFlux1 << "Check stack 1\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_s1.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_s1.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_s1.top() << std::endl;

	monFlux1 << "\nCheck stack 2\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_s2.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_s2.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_s2.top() << std::endl;
	
	monFlux1 << "\nCheck stack 3 -> copy of s1\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_copy.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_copy.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_copy.top() << std::endl;
	monFlux1.close();

	// std_stack
	monFlux2 << "Check stack 1\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_s1.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_s1.size() << std::endl;
	monFlux2 << "top:\t\t" << std_s1.top() << std::endl;

	monFlux2 << "\nCheck stack 2\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_s2.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_s2.size() << std::endl;
	monFlux2 << "top:\t\t" << std_s2.top() << std::endl;
	
	monFlux2 << "\nCheck stack 3 -> copy of s1\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_copy.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_copy.size() << std::endl;
	monFlux2 << "top:\t\t" << std_copy.top() << std::endl;
	monFlux2.close();

	std::cout << "\n";
}
