#include "../../includes/vector_test.hpp"

bool mycomp (char c1, char c2) { return std::tolower(c1)<std::tolower(c2); }

void	iterator_traits()
{
	typedef std::iterator_traits<int*> traits;
	typedef ft::iterator_traits<int*> traits1;

	if ((typeid(traits::iterator_category)==typeid(std::random_access_iterator_tag))
		== (typeid(traits1::iterator_category)==typeid(std::random_access_iterator_tag)))
		std::cout << "iterator_traits \e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "iterator_traits \t\e[0;31m[💥]\e[0m\t";
}

void	is_integral()
{
	// std::cout << std::boolalpha;
	if (std::is_integral<char>::value == ft::is_integral<char>::value)
		std::cout << "is_integral :\t\e[0;32m[⭐️\e[0m";
	else
		std::cout << "\e[0;31m[💥]e[0m";
	if (std::is_integral<int>::value == ft::is_integral<int>::value)
		std::cout << "\e[0;32m⭐️\e[0m";
	else
		std::cout << "\e[0;31m💥\e[0m";
	if (std::is_integral<float>::value == ft::is_integral<float>::value)
		std::cout << "\e[0;32m⭐️\e[0m";
	else
		std::cout << "\e[0;31m💥\e[0m";
	if (std::is_integral<bool>::value == ft::is_integral<bool>::value)
		std::cout << "\e[0;32m⭐️]\e[0m\t";
	else
		std::cout << "\e[0;31m💥]\e[0m\t";
}

void	lexicographical_compare()
{
	char	s1[] = "Bonjour";
	char	s2[] = "Bonsoir";

	if (std::lexicographical_compare(s1, s1 + 3, s2, s2 + 2) == ft::lexicographical_compare(s1, s1 + 3, s2, s2 + 2))
		std::cout << "lexicographical_compare :\t\e[0;32m[⭐️\e[0m";
	else
		std::cout << "lexicographical_compare :\t\t\e[0;31m[💥\e[0m";

	if (std::lexicographical_compare(s1, s1 + 3, s2, s2 + 2, mycomp) == ft::lexicographical_compare(s1, s1 + 3, s2, s2 + 2, mycomp))
		std::cout << "\e[0;32m⭐️]\e[0m\t\t";
	else
		std::cout << "\e[0;31m💥]\e[0m\t\t";

}

void	equal()
{
	int					tab[] = {10, 2, 4, 89};
	int					tab_err[] = {100, 4628};
	std::vector<int> 	std_v;
	ft::vector<int> 	ft_v;

	std_v.push_back(10); std_v.push_back(2); std_v.push_back(4); std_v.push_back(89); 
	ft_v.push_back(10); ft_v.push_back(2); ft_v.push_back(4); ft_v.push_back(89); 

	if (std::equal(std_v.begin(), std_v.end(), tab) == ft::equal(ft_v.begin(), ft_v.end(), tab))
		std::cout << "equal :\t\e[0;32m[⭐️\e[0m";
	else
		std::cout << "equal :\t\t\e[0;31m[💥\e[0m";

	if (std::equal(std_v.begin(), std_v.end(), tab_err) == ft::equal(ft_v.begin(), ft_v.end(), tab_err))
		std::cout << "\e[0;32m⭐️]\e[0m\t";
	else
		std::cout << "\e[0;31m💥]\e[0m\t";
}

int main(void)
{
	std::cout << "\n1️⃣ 5️⃣  Utils\n";

	iterator_traits();
	equal();
	is_integral();
	lexicographical_compare();

	std::cout << "\n\n";
	return 0;
}
