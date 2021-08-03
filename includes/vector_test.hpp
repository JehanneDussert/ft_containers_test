#ifndef VECTOR_TEST_HPP
# define VECTOR_TEST_HPP

# include <vector>
# include "../../srcs/Vector_functions.hpp"
# include "../srcs/vector/capacity.cpp"
# include "../srcs/vector/assign.cpp"
# include "../srcs/vector/operators.cpp"
# include "../srcs/vector/begin_end.cpp"
# include "../srcs/vector/reserve_resize.cpp"
# include "../srcs/vector/push_pop.cpp"
# include "../srcs/vector/insert_erase.cpp"
# include "../srcs/vector/swap.cpp"
# include "../srcs/vector/constructors.cpp"
# include "../srcs/vector/clear.cpp"
# include "../srcs/vector/get_allocator.cpp"
# include "../srcs/vector/access.cpp"
# include "../srcs/vector/reverse_iterator.cpp"

void	check_content(std::vector<int> &v1, ft::vector<int> &v2);
void	check_size(std::vector<int> &v1, ft::vector<int> &v2);
void	check_capacity(std::vector<int> &v1, ft::vector<int> &v2);
void	operators_test(void);
void	assign_test(void);
void	operators_test(void);
void	begin_end(void);
void	capacity(void);
void	reserve_resize(void);
void	push_pop(void);
void	insert_erase(void);
void	swap(void);
void    constructors(void);
void    clear(void);
void    get_allocator();
void    access(void);
void	rbegin_rend();
void	reverse_iterator();
int     main(void);

#endif