#ifndef VECTOR_TEST_HPP
# define VECTOR_TEST_HPP

# include <vector>
# include "../../srcs/Vector/Vector_functions.hpp"
# include "../srcs/vector/utils.cpp"
# include <fstream>
# include <iostream>

int     check_content(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2);
int     check_size(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2);
int     check_capacity(std::vector<int> &v1, ft::vector<int> &v2, std::ofstream &monFlux1, std::ofstream &monFlux2);

#endif