#include "utils.cpp"

int main(void)
{
    std::cout << "push & pop\t";

    std::stack<int>	std_default;
    ft::stack<int>	ft_default;
    int ret = 0;
    std::ofstream monFlux1("logs/stack/ft_stack.push_pop.log");
    std::ofstream monFlux2("logs/stack/std_stack.push_pop.log");

    std_default.push(10);
    std_default.push(9);
    std_default.push(8);
    std_default.push(7);
    std_default.push(6);
    std_default.push(5);
    ft_default.push(10);
    ft_default.push(9);
    ft_default.push(8);
    ft_default.push(7);
    ft_default.push(6);
    ft_default.push(5);

    if (std_default.top() == ft_default.top() && std_default.size() == ft_default.size())
      ;
    else
      ret++;

    //	ft_stack
    monFlux1 << "Push some values\n";
    monFlux1 << "#################################\n";
    monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
    monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
    monFlux1 << "top:\t\t" << ft_default.top() << std::endl;
  
    // std_stack
    monFlux2 << "Push some values\n";
    monFlux2 << "#################################\n";
    monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
    monFlux2 << "size:\t\t" << std_default.size() << std::endl;
    monFlux2 << "top:\t\t" << std_default.top() << std::endl;

    std_default.push(1);
    std_default.push(2);
    std_default.push(3);
    std_default.push(4);
    std_default.push(5);
    std_default.push(6);
    ft_default.push(1);
    ft_default.push(2);
    ft_default.push(3);
    ft_default.push(4);
    ft_default.push(5);
    ft_default.push(6);

	if (std_default.top() == ft_default.top() && std_default.size() == ft_default.size())
		;
	else
		ret++;

	monFlux1 << "\nPush more values\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_default.top() << std::endl;

	monFlux2 << "\nPush more values\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;
	monFlux2 << "top:\t\t" << std_default.top() << std::endl;
    
    std_default.pop(); std_default.pop();
    ft_default.pop(); ft_default.pop();	
    
	if (std_default.top() == ft_default.top() && std_default.size() == ft_default.size())
		;
	else
		ret++;

	monFlux1 << "\nPop some values\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_default.top() << std::endl;

	monFlux2 << "\nPop some values\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;
	monFlux2 << "top:\t\t" << std_default.top() << std::endl;

    std_default.pop(); std_default.pop();
    ft_default.pop(); ft_default.pop();	
    
	if (std_default.top() == ft_default.top() && std_default.size() == ft_default.size())
    ;
  else
    ret++;
  
  if (!ret)
		std::cout << "\e[0;32m[⭐️]\e[0m";
	else
		std::cout << "\e[0;31m[💥]\e[0m";
	
	monFlux1 << "\nPop more values\n";
	monFlux1 << "#################################\n";
	monFlux1 << "empty:\t\t" << ft_default.empty() << std::endl;
	monFlux1 << "size:\t\t" << ft_default.size() << std::endl;
	monFlux1 << "top:\t\t" << ft_default.top() << std::endl;
	monFlux1.close();
	
	monFlux2 << "\nPop more values\n";
	monFlux2 << "#################################\n";
	monFlux2 << "empty:\t\t" << std_default.empty() << std::endl;
	monFlux2 << "size:\t\t" << std_default.size() << std::endl;
	monFlux2 << "top:\t\t" << std_default.top() << std::endl;
	monFlux2.close();

	std::cout << "\n";
}