#include "../../includes/vector_test.hpp"

int main(void)
{
	std::cout << "clear\t";

	std::vector<int>			v1(10, 8);
	ft::vector<int>				v2(10, 8);
  int err = 0;
	std::ofstream monFlux1("logs/vector/ft_vector.clear.log");
	std::ofstream monFlux2("logs/vector/std_vector.clear.log");

    v1.clear(); v2.clear();
    err += check_size(v1, v2, monFlux1, monFlux2);
	  err += check_capacity(v1, v2, monFlux1, monFlux2);
	  err += check_content(v1, v2, monFlux1, monFlux2);
    if (v1.empty() && v2.empty())
		  ;
    else
        err++;

    v1.push_back(8); v2.push_back(8);
    v1.clear(); v2.clear();
    err += check_size(v1, v2, monFlux1, monFlux2);
	  err += check_capacity(v1, v2, monFlux1, monFlux2);
	  err += check_content(v1, v2, monFlux1, monFlux2);
    if (v1.empty() && v2.empty())
	    ;
    else
        err++;
    
    if (err)
      std::cout << "\t\e[0;31m[💥]\e[0m";
    else
      std::cout << "\t\e[0;32m[⭐️]\e[0m";

    std::cout << "\n";
    monFlux1.close();
    monFlux2.close();
}
