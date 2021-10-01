#include "../../includes/vector_test.hpp"

int	vector(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2;
	int err = 0;
	monFlux1 << "vector\n";
	monFlux1 << "#################################\n";
	monFlux2 << "vector\n";
	monFlux2 << "#################################\n";

	v2 = v1;

	if (v1 != v2)
		err++;
	else if (v1 == v2)
	{
		monFlux1 << "operator= done\n";
		monFlux2 << "operator= done\n";
		monFlux1 << "operator!= done\n";
		monFlux2 << "operator!= done\n";
		monFlux1 << "operator== done\n";
		monFlux2 << "operator== done\n";
	}
	else
	{
		monFlux1 << "error operator!=\n";
		monFlux2 << "error operator!=\n";
		monFlux1 << "error operator==\n";
		monFlux2 << "error operator==\n";
		err++;
	}
	if (v1[1] == v2[1])
	{
		monFlux1 << "operator[] done\n";
		monFlux2 << "operator[] done\n";
	}
	else
	{
		monFlux1 << "error operator[]\n";
		monFlux2 << "error operator[]\n";
		err++;
	}

	v1.pop_back();

	if (v1 < v2)
	{
		monFlux1 << "operator< done\n";
		monFlux2 << "operator< done\n";
	}
	else
	{
		monFlux1 << "error operator<\n";
		monFlux2 << "error operator<\n";
		err++;
	}
	if (!(v1 > v2))
	{
		monFlux1 << "operator> done\n";
		monFlux2 << "operator> done\n";
	}
	else
	{
		monFlux1 << "error operator>\n";
		monFlux2 << "error operator>\n";
		err++;
	}

	v1 = v2;

	if (v1 >= v2)
	{
		monFlux1 << "operator>= done\n";
		monFlux2 << "operator>= done\n";
	}
	else
	{
		monFlux1 << "error operator>=\n";
		monFlux2 << "error operator>=\n";
		err++;
	}

	if (v1 <= v2)
	{
		monFlux1 << "operator<= done\n";
		monFlux2 << "operator<= done\n";
	}
	else
	{
		monFlux1 << "error operator<=\n";
		monFlux2 << "error operator<=\n";
		err++;
	}

	return err;
}

int	iterator(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	monFlux1 << "\niterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "\niterator\n";
	monFlux2 << "#################################\n";

	ft::vector<int>				v1(10, 8);
	ft::vector<int>				v2(10, 8);
    ft::vector<int>::iterator	it1 = v1.begin();
	ft::vector<int>::iterator	it2 = v2.begin();
	int err = 0;

    monFlux1 << "Check with fill constructor\n";
	monFlux1 << "********************************\n";
	monFlux2 << "Check with fill constructor\n";
	monFlux2 << "********************************\n";

	if (*it1 == *it2)
	{
		monFlux1 << "operator* done\n";
		monFlux2 << "operator* done\n";
	}
	else
	{
		monFlux1 << "error operator*\n";
		monFlux2 << "error operator*\n";
		err++;
	}
	
	for (; it1 != v1.end(); ++it1)
	{
        if (*it1 != *it2)
		{
			monFlux1 << "error operator++\n";
			monFlux2 << "error operator++\n";
			err++;
			break ;
		}
	}
	if (it1 == v1.end())
	{
		monFlux1 << "operator++ done\n";
		monFlux2 << "operator++ done\n";
	}

    it1 = it2;
    if (it1 != it2)
	{
		monFlux1 << "error operator=\n";
		monFlux2 << "error operator=\n";
		err++;
	}
	else
	{
		monFlux1 << "operator= done\n";
		monFlux2 << "operator= done\n";
	}

	it1++;

	if (it1 > it2 && !(it1 < it2) && it1 >= it2 && !(it1 <= it2))
    {
		monFlux1 << "operator> done\n";
		monFlux2 << "operator> done\n";
		monFlux1 << "operator< done\n";
		monFlux2 << "operator< done\n";
		monFlux1 << "operator>= done\n";
		monFlux2 << "operator>= done\n";
		monFlux1 << "operator<= done\n";
		monFlux2 << "operator<= done\n";
	}
	else
	{
		monFlux1 << "error operator>\n";
		monFlux2 << "error operator>\n";
		monFlux1 << "error operator<\n";
		monFlux2 << "error operator<\n";
		monFlux1 << "error operator>=\n";
		monFlux2 << "error operator>=\n";
		monFlux1 << "error operator<=\n";
		monFlux2 << "error operator<=\n";
		err++;
	}

	it1 = it2;

	if (it1 == it2 && !(it1 != it2))
	{ 
		monFlux1 << "operator== done\n";
		monFlux2 << "operator== done\n";
		monFlux1 << "operator!= done\n";
		monFlux2 << "operator!= done\n";
	}
	else
	{ 
		monFlux1 << "error operator==\n";
		monFlux2 << "error operator==\n";
		monFlux1 << "error operator!=\n";
		monFlux2 << "error operator!=\n";
		err++;
	}

	++it1;
	--it1;

	if (it1 == it2)
	{ 
		monFlux1 << "operator-- done\n";
		monFlux2 << "operator-- done\n";
	}
	else
	{ 
		monFlux1 << "error operator--\n";
		monFlux2 << "error operator--\n";
		err++;
	}

	it1 = v1.begin();
	v1.push_back(4);

	monFlux1 << "Check with copy constructor\n";
	monFlux1 << "********************************\n";
	monFlux2 << "Check with copy constructor\n";
	monFlux2 << "********************************\n";

    ft::vector<int>::iterator				first = v1.begin();	
    ft::vector<int>::iterator				last = v1.end();
	first += 10;

	if (*first == 4)
	{ 
		monFlux1 << "operator+= done\n";
		monFlux2 << "operator+= done\n";
	}
	else
	{ 
		monFlux1 << "error operator+=\n";
		monFlux2 << "error operator+=\n";
		err++;
	}
	first -= 10;

	if (first == v1.begin())
	{ 
		monFlux1 << "operator-= done\n";
		monFlux2 << "operator-= done\n";
	}
	else
	{ 
		monFlux1 << "error operator-=\n";
		monFlux2 << "error operator-=\n";
		err++;
	}

	if (first[10] == 4)
	{
		monFlux1 << "operator[] done\n";
		monFlux2 << "operator[] done\n";
	}
	else
	{
		monFlux1 << "error operator[]\n";
		monFlux2 << "error operator[]\n";
		err++;
	}

	return err;
}

int	const_iterator(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	monFlux1 << "\nconst_iterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "\nconst_iterator\n";
	monFlux2 << "#################################\n";
	int err = 0;

	const ft::vector<int>					v1(10, 8);
	const ft::vector<int>					v2(10, 8);
    ft::vector<int>::const_iterator	it1 = v1.begin();
	ft::vector<int>::const_iterator	it2 = v2.begin();

    monFlux1 << "Check with fill constructor\n";
	monFlux1 << "********************************\n";
	monFlux2 << "Check with fill constructor\n";
	monFlux2 << "********************************\n";


	if (*it1 == *it2)
	{
		monFlux1 << "operator* done\n";
		monFlux2 << "operator* done\n";
	}
	else
	{
		monFlux1 << "error operator*\n";
		monFlux2 << "error operator*\n";
		err++;
	}

   for (; it1 != v1.end(); ++it1)
	{
        if (*it1 != *it2)
		{
			monFlux1 << "error operator++\n";
			monFlux2 << "error operator++\n";
			err++;
			break ;
		}
	}
	
	if (it1 == v1.end())
	{
		monFlux1 << "operator++ done\n";
		monFlux2 << "operator++ done\n";
	}

    it1 = it2;
    if (it1 != it2)
	{
		monFlux1 << "error operator=\n";
		monFlux2 << "error operator=\n";
		err++;
	}
	else
	{
		monFlux1 << "operator= done\n";
		monFlux2 << "operator= done\n";
	}
	
	it1++;
	if (it1 > it2 && !(it1 < it2) && it1 >= it2 && !(it1 <= it2))
    {
		monFlux1 << "operator> done\n";
		monFlux2 << "operator> done\n";
		monFlux1 << "operator< done\n";
		monFlux2 << "operator< done\n";
		monFlux1 << "operator>= done\n";
		monFlux2 << "operator>= done\n";
		monFlux1 << "operator<= done\n";
		monFlux2 << "operator<= done\n";
	}
	else
	{
		monFlux1 << "error operator>\n";
		monFlux2 << "error operator>\n";
		monFlux1 << "error operator<\n";
		monFlux2 << "error operator<\n";
		monFlux1 << "error operator>=\n";
		monFlux2 << "error operator>=\n";
		monFlux1 << "error operator<=\n";
		monFlux2 << "error operator<=\n";
		err++;
	}

	it1 = it2;

	if (it1 == it2 && !(it1 != it2))
	{ 
		monFlux1 << "operator== done\n";
		monFlux2 << "operator== done\n";
		monFlux1 << "operator!= done\n";
		monFlux2 << "operator!= done\n";
	}
	else
	{ 
		monFlux1 << "error operator==\n";
		monFlux2 << "error operator==\n";
		monFlux1 << "error operator!=\n";
		monFlux2 << "error operator!=\n";
		err++;
	}

	++it1;
	--it1;

	if (it1 == it2)
	{ 
		monFlux1 << "operator-- done\n";
		monFlux2 << "operator-- done\n";
	}
	else
	{ 
		monFlux1 << "error operator--\n";
		monFlux2 << "error operator--\n";
		err++;
	}
	
	it1 = v1.begin();

    ft::vector<int>::const_iterator				first = v1.begin();	
    ft::vector<int>::const_iterator				last = v1.end();
	first += 9;

	monFlux1 << "Check with modified const_iterator\n";
	monFlux1 << "********************************\n";
	monFlux2 << "Check with modified const_iterator\n";
	monFlux2 << "********************************\n";

	if (*first == 8)
	{ 
		monFlux1 << "operator+= done\n";
		monFlux2 << "operator+= done\n";
	}
	else
	{ 
		monFlux1 << "error operator+=\n";
		monFlux2 << "error operator+=\n";
		err++;
	}
	
	first -= 9;

	if (first == v1.begin())
	{ 
		monFlux1 << "operator-= done\n";
		monFlux2 << "operator-= done\n";
	}
	else
	{ 
		monFlux1 << "error operator-=\n";
		monFlux2 << "error operator-=\n";
		err++;
	}
	
	if (first[9] == 8)
	{
		monFlux1 << "operator[] done\n";
		monFlux2 << "operator[] done\n";
	}
	else
	{
		monFlux1 << "error operator[]\n";
		monFlux2 << "error operator[]\n";
		err++;
	}

	return err;
}

int	reverse_iterator_op(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	monFlux1 << "\nreverse_iterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "\nreverse_iterator\n";
	monFlux2 << "#################################\n";
	int err = 0;

	ft::vector<int>				        v1(10, 8);
	ft::vector<int>				        v2(10, 8);
    ft::vector<int>::reverse_iterator	it1 = v1.rbegin();
	ft::vector<int>::reverse_iterator	it2 = v2.rbegin();

	if (*it1 == *it2)
	{
		monFlux1 << "operator* done\n";
		monFlux2 << "operator* done\n";
	}
	else
	{
		monFlux1 << "error operator*\n";
		monFlux2 << "error operator*\n";
		err++;
	}
	
	for (; it1 != v1.rend(); ++it1)
    {
        if (*it1 != *it2)
		{
			monFlux1 << "error operator++\n";
			monFlux2 << "error operator++\n";
			err++;
			break ;
		}
	}
	
	if (it1 == v1.rend())
	{
		monFlux1 << "operator++ done\n";
		monFlux2 << "operator++ done\n";
	}
	
	it1 = it2;
    if (it1 != it2)   
	{
		monFlux1 << "error operator=\n";
		monFlux2 << "error operator=\n";
		err++;
	}
	else
	{
		monFlux1 << "operator= done\n";
		monFlux2 << "operator= done\n";
	}
	
	it1++;
	
	if (it1 > it2 && !(it1 < it2) && it1 >= it2 && !(it1 <= it2))
    {
		monFlux1 << "operator> done\n";
		monFlux2 << "operator> done\n";
		monFlux1 << "operator< done\n";
		monFlux2 << "operator< done\n";
		monFlux1 << "operator>= done\n";
		monFlux2 << "operator>= done\n";
		monFlux1 << "operator<= done\n";
		monFlux2 << "operator<= done\n";
	}
	else
	{
		monFlux1 << "error operator>\n";
		monFlux2 << "error operator>\n";
		monFlux1 << "error operator<\n";
		monFlux2 << "error operator<\n";
		monFlux1 << "error operator>=\n";
		monFlux2 << "error operator>=\n";
		monFlux1 << "error operator<=\n";
		monFlux2 << "error operator<=\n";
		err++;
	}

	it1 = it2;

	if (it1 == it2 && !(it1 != it2))
	{ 
		monFlux1 << "operator== done\n";
		monFlux2 << "operator== done\n";
		monFlux1 << "operator!= done\n";
		monFlux2 << "operator!= done\n";
	}
	else
	{ 
		monFlux1 << "error operator==\n";
		monFlux2 << "error operator==\n";
		monFlux1 << "error operator!=\n";
		monFlux2 << "error operator!=\n";
		err++;
	}

	++it1;
	--it1;

	if (it1 == it2)
	{ 
		monFlux1 << "operator-- done\n";
		monFlux2 << "operator-- done\n";
	}
	else
	{ 
		monFlux1 << "error operator--\n";
		monFlux2 << "error operator--\n";
		err++;
	}
	
	it1 = v1.rbegin();

    ft::vector<int>::reverse_iterator				first = v1.rbegin();	
    ft::vector<int>::reverse_iterator				last = v1.rend();
	first += 9;

	monFlux1 << "Check with copy constructor\n";
	monFlux1 << "********************************\n";
	monFlux2 << "Check with copy constructor\n";
	monFlux2 << "********************************\n";

	if (*first == 8)
	{ 
		monFlux1 << "operator+= done\n";
		monFlux2 << "operator+= done\n";
	}
	else
	{ 
		monFlux1 << "error operator+=\n";
		monFlux2 << "error operator+=\n";
		err++;
	}
	
	first -= 9;
	
	if (first == v1.rbegin())
	{ 
		monFlux1 << "operator-= done\n";
		monFlux2 << "operator-= done\n";
	}
	else
	{ 
		monFlux1 << "error operator-=\n";
		monFlux2 << "error operator-=\n";
		err++;
	}
	
	if (first[9] == 8)
	{
		monFlux1 << "operator[] done\n";
		monFlux2 << "operator[] done\n";
	}
	else
	{
		monFlux1 << "error operator[]\n";
		monFlux2 << "error operator[]\n";
		err++;
	}

	return err;
}

int	main(void)
{
	int err = 0;
	std::ofstream monFlux1("logs/vector/ft_vector.operators.log");
	std::ofstream monFlux2("logs/vector/std_vector.operators.log");

	std::cout << "operators";
	err += vector(monFlux1, monFlux2);
	err += iterator(monFlux1, monFlux2);
	err += const_iterator(monFlux1, monFlux2);
	err += reverse_iterator_op(monFlux1, monFlux2);

	if (err)
		std::cout << "\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\e[0;32m[⭐️]\e[0m";

    std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
