#include "../../includes/vector_test.hpp"

int at(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	ft::vector<int>				v1(10, 8);
	int err = 0;

	for (int i = 0; i < 10; i++)
        v1[i] = i;
	for (int i = 0; v1[i]; i++)
        if (v1.at(i) != i)
			err++;

	try 
	{
		v1.at(20) = 100;
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}
	try 
	{
		v1.at(20) = 5;
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}
	try 
	{
		v1.at(2) = 5;
	}
	catch (const std::out_of_range& oor)
	{
		err++;
  	}
	try 
	{
		v1.at(-10) = 5;
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}

	if (!err)
	{ 
		monFlux1 << "at() done\n";
		monFlux2 << "at() done\n";
	}
	else
	{ 
		monFlux1 << "error at()\n";
		monFlux2 << "error at()\n";
		err++;
	}
	
	return err;
}

int const_at(std::ofstream &monFlux1, std::ofstream &monFlux2)
{	
	int err = 0;
	ft::vector<int>				const v1(10, 8);

	try 
	{
		std::cout << v1.at(20);
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}
	try 
	{
		std::cout << v1.at(100);
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}
	try 
	{
		if (v1.at(2))
			;
	}
	catch (const std::out_of_range& oor)
	{
		err++;
  	}
	try 
	{
		if (v1.at(0))
			;
	}
	catch (const std::out_of_range& oor)
	{
		err++;
  	}
	try 
	{
		std::cout << v1.at(-20);
		err++;
	}
	catch (const std::out_of_range& oor)
	{
		;
  	}

	if (!err)
	{ 
		monFlux1 << "const_at() done\n";
		monFlux2 << "const_at() done\n";
	}
	else
	{ 
		monFlux1 << "error const_at()\n";
		monFlux2 << "error const_at()\n";
		err++;
	}

	return err;
}

int front(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int err = 0;
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(5, 3);

	if (v1.front() == v1[0])
		;
	else
		err++;
	
	v1.insert(v1.begin(), *v2.begin());
	if (v1.front() == *v2.begin())
		;
	else
		err++;

	if (!err)
	{ 
		monFlux1 << "front() done\n";
		monFlux2 << "front() done\n";
	}
	else
	{ 
		monFlux1 << "error front()\n";
		monFlux2 << "error front()\n";
		err++;
	}

	return err;
}

int back(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int err = 0;
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(5, 3);

	if (v1.back() == *(v1.end() - 1))
		;
	else
		err++;
	
	v1.insert(v1.end(), *v2.begin());
	if (v1.back() == *v2.begin())
		;
	else
		err++;

	if (!err)
	{ 
		monFlux1 << "back() done\n";
		monFlux2 << "back() done\n";
	}
	else
	{ 
		monFlux1 << "error back()\n";
		monFlux2 << "error back()\n";
		err++;
	}

	return err;
}

int main(void)
{
	int err = 0;
	std::ofstream monFlux1("logs/vector/ft_vector.access.log");
	std::ofstream monFlux2("logs/vector/std_vector.access.log");

	std::cout << "element access";
    err += at(monFlux1, monFlux2);
	err += const_at(monFlux1, monFlux2);
    err += front(monFlux1, monFlux2);
    err += back(monFlux1, monFlux2);

	if (err)
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";

	std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
