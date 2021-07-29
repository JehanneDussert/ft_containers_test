#include "../../includes/vector_test.hpp"

void	vector()
{
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2;
	
	std::cout << "\n📍 VECTOR\n";
	v2 = v1;
	std::cout << "operator= :\t";
	if (v1 != v2)
		std::cout << "\e[0;31m[💥]\e[0m\t";
	else if (v1 == v2)
	{
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator== :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{		
		std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator== :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
	}
	if (v1[1] == v2[1])
		std::cout << "operator[] :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	
	v1.pop_back();
	if (v1 < v2)
		{ std::cout << "\noperator< :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator< :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (!(v1 > v2))
		{ std::cout << "operator> :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator> :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	
	v1 = v2;
	if (v1 >= v2)
		{ std::cout << "operator>= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator>= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (v1 <= v2)
		{ std::cout << "operator<= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator<= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
}

void	iterator()
{
	std::cout << "\n\n📍 ITERATOR\n";

	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(10, 8);
    ft::vector<int>::iterator	it1 = v1.begin();
	ft::vector<int>::iterator	it2 = v2.begin();

	if (*it1 == *it2)
		{ std::cout << "operator* :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator* :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
    for (; it1 != v1.end(); ++it1)
        if (*it1 != *it2)
            { std::cout << "operator++ :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (it1 == v1.end())
    	{ std::cout << "operator++ :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
    it1 = it2;
    if (it1 != it2)   
		{ std::cout << "operator= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	it1++;
	if (it1 > it2 && !(it1 < it2) && it1 >= it2 && !(it1 <= it2))
    {
		std::cout << "operator> :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator< :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "\noperator>= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator<= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{
		std::cout << "operator> :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator< :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "\noperator>= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator<= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
	}

	it1 = it2;

	if (it1 == it2 && !(it1 != it2))
	{ 
		std::cout << "operator== :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{ 
		std::cout << "operator== :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
	}
	++it1; --it1;
	if (it1 == it2)
		{ std::cout << "\noperator-- :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "\noperator-- :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	it1 = v1.begin();
	v1.push_back(4);


    ft::vector<int>::iterator				first = v1.begin();	
    ft::vector<int>::iterator				last = v1.end();
	first += 10;
	if (*first == 4)
		{ std::cout << "operator+= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator+= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	first -= 10;
	if (first == v1.begin())
		{ std::cout << "operator-= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator-= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (first[10] == 4)
		{ std::cout << "operator[] :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator[] :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }	
	
	// ->
	std::cout << "\n\n";

}

void	const_iterator()
{
	std::cout << "📍 CONST_ITERATOR\n";

	const ft::vector<int>					v1(10, 8);
	const ft::vector<int>					v2(10, 8);
    ft::vector<int>::const_iterator	it1 = v1.begin();
	ft::vector<int>::const_iterator	it2 = v2.begin();

	if (*it1 == *it2)
		{ std::cout << "operator* :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator* :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
    for (; it1 != v1.end(); ++it1)
        if (*it1 != *it2)
            { std::cout << "operator++ :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (it1 == v1.end())
    	{ std::cout << "operator++ :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
    it1 = it2;
    if (it1 != it2)   
		{ std::cout << "operator= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	it1++;
	if (it1 > it2 && !(it1 < it2) && it1 >= it2 && !(it1 <= it2))
    {
		std::cout << "operator> :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator< :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "\noperator>= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator<= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{
		std::cout << "operator> :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator< :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "\noperator>= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator<= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
	}

	it1 = it2;

	if (it1 == it2 && !(it1 != it2))
	{ 
		std::cout << "operator== :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{ 
		std::cout << "operator== :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator!= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t";
	}
	++it1; --it1;
	if (it1 == it2)
		{ std::cout << "\noperator-- :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "\noperator-- :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	it1 = v1.begin();

    ft::vector<int>::const_iterator				first = v1.begin();	
    ft::vector<int>::const_iterator				last = v1.end();
	first += 9;
	if (*first == 8)
		{ std::cout << "operator+= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator+= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	first -= 9;
	if (first == v1.begin())
		{ std::cout << "operator-= :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator-= :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }
	if (first[9] == 8)
		{ std::cout << "operator[] :\t"; std::cout << "\e[0;32m[⭐️]\e[0m\t"; }
	else
		{ std::cout << "operator[] :\t"; std::cout << "\e[0;31m[💥]\e[0m\t"; }	
	
	// ->
	std::cout << "\n\n";
}

void	operators_test(void)
{
	vector();
	iterator();
	const_iterator();
}
