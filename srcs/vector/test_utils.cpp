#include "../../includes/vector_test.hpp"

bool mycomp (char c1, char c2) { return std::tolower(c1)<std::tolower(c2); }

int	iterator_traits(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int err = 0;
	typedef std::iterator_traits<int*> traits;
	typedef ft::iterator_traits<int*> traits1;

	if ((typeid(traits::iterator_category)==typeid(std::random_access_iterator_tag))
		== (typeid(traits1::iterator_category)==typeid(std::random_access_iterator_tag)))
	{
		monFlux1 << "iterator_traits\n\n";
    	monFlux2 << "iterator_traits\n\n";
	}
	else
	{
		err++;
        monFlux1 << "\nerror iterator_traits\n";
	    monFlux2 << "\nerror iterator_traits\n";
	}
	
	return err;
}

int	is_integral(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int err = 0;

	if (std::is_integral<char>::value == ft::is_integral<char>::value)
		;
	else
		err++;
	if (std::is_integral<int>::value == ft::is_integral<int>::value)
		;
	else
		err++;
	if (std::is_integral<float>::value == ft::is_integral<float>::value)
		;
	else
		err++;
	if (std::is_integral<bool>::value == ft::is_integral<bool>::value)
		;
	else
		err++;
	
	if (!err)
	{
		monFlux1 << "is_integral done\n\n";
    	monFlux2 << "is_integral done\n\n";
	}
	else
	{	
        monFlux1 << "\nerror is_integral\n";
	    monFlux2 << "\nerror is_integral\n";
	}
	
	return err;
}

int	lexicographical_compare(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	char	s1[] = "Bonjour";
	char	s2[] = "Bonsoir";
	int err = 0;

	if (std::lexicographical_compare(s1, s1 + 3, s2, s2 + 2) == ft::lexicographical_compare(s1, s1 + 3, s2, s2 + 2))
		;
	else
		err++;

	if (std::lexicographical_compare(s1, s1 + 3, s2, s2 + 2, mycomp) == ft::lexicographical_compare(s1, s1 + 3, s2, s2 + 2, mycomp))
		;
	else
		err++;

	if (!err)
	{
		monFlux1 << "is_integral done\n\n";
    	monFlux2 << "is_integral done\n\n";
	}
	else
	{	
        monFlux1 << "\nerror is_integral\n";
	    monFlux2 << "\nerror is_integral\n";
	}

	return err;
}

int	equal(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
	int					tab[] = {10, 2, 4, 89};
	int					tab_err[] = {100, 4628};
	std::vector<int> 	std_v;
	ft::vector<int> 	ft_v;
	int err = 0;

	std_v.push_back(10); std_v.push_back(2); std_v.push_back(4); std_v.push_back(89); 
	ft_v.push_back(10); ft_v.push_back(2); ft_v.push_back(4); ft_v.push_back(89); 

	if (std::equal(std_v.begin(), std_v.end(), tab) == ft::equal(ft_v.begin(), ft_v.end(), tab))
		;
	else
		err++;

	if (std::equal(std_v.begin(), std_v.end(), tab_err) == ft::equal(ft_v.begin(), ft_v.end(), tab_err))
		;
	else
		err++;

	if (!err)
	{
		monFlux1 << "equal done\n\n";
    	monFlux2 << "equal done\n\n";
	}
	else
	{	
        monFlux1 << "\nerror equal\n";
	    monFlux2 << "\nerror equal\n";
	}

	return err;
}

int main(void)
{
	std::cout << "utils";
	int err = 0;

	std::ofstream monFlux1("logs/vector/ft_vector.utils.log");
	std::ofstream monFlux2("logs/vector/std_vector.utils.log");

	err += iterator_traits(monFlux1, monFlux2);
	err += equal(monFlux1, monFlux2);
	err += is_integral(monFlux1, monFlux2);
	err += lexicographical_compare(monFlux1, monFlux2);

	if (err)
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";
	monFlux1.close();
	monFlux2.close();

	std::cout << "\n";
	return 0;
}
