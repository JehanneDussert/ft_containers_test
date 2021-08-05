#include "utils.cpp"

int main(void)
{
	std::cout << "6️⃣  Operators :\n";

	ft::stack<int>	s1;
	ft::stack<int>	s2;
	ft::stack<int>	copy;

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);

	s2.push(1);

	copy = s1;
	std::cout << "operator= :\t";
	if (s1 != copy)
		std::cout << "lol\e[0;31m[💥]\e[0m\t";
	else if (s1 == copy)
	{
		std::cout << "\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator!= :\t\e[0;32m[⭐️]\e[0m\t";
		std::cout << "operator== :\t\e[0;32m[⭐️]\e[0m\t";
	}
	else
	{		
		std::cout << "\e[0;31m[💥]\e[0m\t";
		std::cout << "operator!= :\t\e[0;31m[💥]\e[0m\t";
		std::cout << "operator== :\t\e[0;31m[💥]\e[0m\t";
	}
	if (s2 < s1)
		std::cout << "operator< :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "operator< :\t\e[0;31m[💥]\e[0m\t";
	if (copy > s2)
		std::cout << "\noperator> :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "\noperator> :\t\e[0;31m[💥]\e[0m\t";
	if (s1 >= copy)
		std::cout << "operator>= :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "operator>= :\t\e[0;31m[💥]\e[0m\t";
	if (s2 <= s1)
		std::cout << "operator<= :\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "operator<= :\t\e[0;31m[💥]\e[0m\t";

	std::cout << "\n\n";
}
