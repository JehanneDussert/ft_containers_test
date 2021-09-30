#include "../../includes/vector_test.hpp"

void	at()
{
	ft::vector<int>				v1(10, 8);
	std::vector<int>			v1(10, 8);
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.access.log");
	std::ofstream monFlux2("logs/vector/std_vector.access.log");

	for (int i = 0; i < 10; i++)
        v1[i] = i;
	for (int i = 0; v1[i]; i++)
        if (v1.at(i) != i)
			err++;
	if (!err)
		std::cout << "At :\t\t\e[0;32m[⭐️";
	else
		std::cout << "At :\t\t\e[0;31m[💥";

	try 
	{
		v1.at(20) = 100;
		std::cout << "💥";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "⭐️";
  	}
	try 
	{
		v1.at(20) = 5;
		std::cout << "💥";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "⭐️";
  	}
	try 
	{
		v1.at(2) = 5;
		std::cout << "⭐️";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "💥 ";
  	}
	try 
	{
		v1.at(-10) = 5;
		std::cout << "💥]\e[0m\t";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "⭐️]\e[0m\t";
  	}
}

void	const_at()
{	
	ft::vector<int>				const v1(10, 8);

	try 
	{
		std::cout << v1.at(20);
		std::cout << "\t\tConst_at :\t\e[0;32m[💥";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "\t\tConst_at :\t\e[0;32m[⭐️";
  	}
	try 
	{
		std::cout << v1.at(100);
		std::cout << "💥";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "⭐️";
  	}
	try 
	{
		if (v1.at(2))
			std::cout << "⭐️";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "💥 ";
  	}
	try 
	{
		if (v1.at(0))
			std::cout << "⭐️";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "💥 ";
  	}
	try 
	{
		std::cout << v1.at(-20);
		std::cout << "💥]\e[0m\t";
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "⭐️]\e[0m\t";
  	}
}

void    front()
{
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(5, 3);

	if (v1.front() == v1[0])
		std::cout << "Front :\t\t\e[0;32m[⭐️";
	else
		std::cout << "Front :\t\t\e[0;31m[💥";
	
	v1.insert(v1.begin(), *v2.begin());
	if (v1.front() == *v2.begin())
		std::cout << "⭐️]\e[0m\t";
	else
		std::cout << "💥]\e[0m\t";
}

void    back()
{
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(5, 3);

	if (v1.back() == *(v1.end() - 1))
		std::cout << "\t\t\tBack :\t\t\e[0;32m[⭐️";
	else
		std::cout << "\t\t\tBack :\t\t\e[0;31m[💥";
	
	v1.insert(v1.end(), *v2.begin());
	if (v1.back() == *v2.begin())
		std::cout << "⭐️]\e[0m\t";
	else
		std::cout << "💥]\e[0m\t";
}

int main(void)
{
	std::cout << "element access\n";
    at();
	const_at();
	std::cout << std::endl;
    front();
    back();

	std::cout << "\n";
}
