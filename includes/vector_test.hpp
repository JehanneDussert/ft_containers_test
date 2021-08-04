#ifndef VECTOR_TEST_HPP
# define VECTOR_TEST_HPP

# include <vector>
# include "../../srcs/Vector/Vector_functions.hpp"
# include "../srcs/vector/utils.cpp"

void	check_content(std::vector<int> &v1, ft::vector<int> &v2);
void	check_size(std::vector<int> &v1, ft::vector<int> &v2);
void	check_capacity(std::vector<int> &v1, ft::vector<int> &v2);

#endif