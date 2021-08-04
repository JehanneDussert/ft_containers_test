#include "utils.cpp"

int main(void)
{
	std::cout << "4️⃣  Top\t\t";

	std::stack<int>	std_default;
	ft::stack<int>	ft_default;

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

	if (std_default.top() == ft_default.top())
		std::cout << "\e[0;32m[⭐️\e[0m";
	else
		std::cout << "\e[0;31m[💥\e[0m";

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

	if (std_default.top() == ft_default.top())
		std::cout << "\e[0;32m⭐️\e[0m";
	else
		std::cout << "\e[0;31m💥\e[0m";
    
    std_default.pop(); std_default.pop();
    ft_default.pop(); ft_default.pop();	
    
	if (std_default.top() == ft_default.top())
		std::cout << "\e[0;32m⭐️]\e[0m";
	else
		std::cout << "\e[0;31m💥]\e[0m";

	std::cout << "\n\n";
}
