#include "../../includes/vector_test.hpp"

template<typename T>
struct is_const_pointer { static const bool value = false; };

template<typename T>
struct is_const_pointer<const T*> { static const bool value = true; };

template <typename TIterator, typename Pointer>
struct is_const_iterator
{
    static const bool value = is_const_pointer<Pointer>::value;
};

void	constructors()
{
	std::cout << "\n📍 VECTOR\n";
    int err = 0;
	std::vector<int>			std_default;
	std::vector<int>			std_fill(8, 10);
	std::vector<int>			std_range(std_fill.begin() + 2, std_fill.end() - 3);
	std::vector<int>			std_copy(std_range);

	ft::vector<int>				ft_default;
	ft::vector<int>				ft_fill(8, 10);
	ft::vector<int>				ft_range(ft_fill.begin() + 2, ft_fill.end() - 3);
	ft::vector<int>				ft_copy(ft_range);

    if (std_default.size() != ft_default.size() || std_default.capacity() != ft_default.capacity() || std_default.max_size() != ft_default.max_size())
		err++;
	ft::vector<int>::iterator	it2 = ft_default.begin();
	for (std::vector<int>::iterator	it1 = std_default.begin(); it1 != std_default.end(); ++it1)
    {
        if (*it1 != *it2)
		    err++;
        ++it2;
    }
    if (!err)
		std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Default :\t\e[0;31m[💥]\e[0m\t"; 
    
    err = 0;
    if (std_fill.size() != ft_fill.size() || std_fill.capacity() != ft_fill.capacity() || std_fill.max_size() != ft_fill.max_size())
		err++;
	ft::vector<int>::iterator	it3 = ft_fill.begin();
	for (std::vector<int>::iterator	it1 = std_fill.begin(); it1 != std_fill.end(); ++it1)
    {
        if (*it1 != *it3)
		    err++;
        ++it3;
    }
    if (!err)
		std::cout << "Fill :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Fill :\t\t\e[0;31m[💥]\e[0m\t"; 
    
    err = 0;
    if (std_copy.size() != ft_copy.size() || std_copy.capacity() != ft_copy.capacity() || std_copy.max_size() != ft_copy.max_size())
		err++;
	ft::vector<int>::iterator	it5 = ft_copy.begin();
	for (std::vector<int>::iterator	it1 = std_copy.begin(); it1 != std_copy.end(); ++it1)
    {
        if (*it1 != *it5)
		    err++;
        ++it5;
    }
    if (!err)
		std::cout << "Copy :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Copy :\t\t\e[0;31m[💥]\e[0m\t"; 

    err = 0;
    if (std_range.size() != ft_range.size() || std_range.capacity() != ft_range.capacity() || std_range.max_size() != ft_range.max_size())
		err++;
	ft::vector<int>::iterator	it4 = ft_range.begin();
	for (std::vector<int>::iterator	it1 = std_range.begin(); it1 != std_range.end(); ++it1)
    {
        if (*it1 != *it4)
		    err++;
        ++it4;
    }
    if (!err)
		std::cout << "Range :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Range :\t\t\e[0;31m[💥]\e[0m\t"; 

	err = 0;
	std::cout << "\n\n📍 ITERATOR\n";
    std::vector<int>::iterator	std_it;
    ft::vector<int>::iterator	ft_it;
	std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";

    std::vector<int>::iterator			std_it_val(std_fill.begin());
    ft::vector<int>::iterator			ft_it_val(ft_fill.begin());
	for (; std_it_val != std_fill.end(); ++std_it_val)
    {
        if (*std_it_val != *ft_it_val)
		    err++;
        ++ft_it_val;
    }
	if (!err)
		std::cout << "Fill :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Fill :\t\t\e[0;31m[💥]\e[0m\t"; 

    err = 0;
    std::vector<int>::iterator	std_it_copy(std_it_val);
    ft::vector<int>::iterator	ft_it_copy(ft_it_val);
	for (; std_it_copy != std_fill.end(); ++std_it_copy)
    {
        if (*std_it_copy != *ft_it_copy)
		    err++;
        ++ft_it_copy;
    }
	if (!err)
		std::cout << "Copy :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Copy :\t\t\e[0;31m[💥]\e[0m\t";

	typedef std::vector<int>::iterator			std_it_type;
	typedef ft::vector<int>::iterator			ft_it_type;

    typedef std_it_type::pointer				std_pointer;
    typedef ft_it_type::pointer 				ft_pointer;

    if (is_const_iterator<std_it_type, std_pointer>::value == is_const_iterator<ft_it_type, ft_pointer>::value)
		std::cout << "Type :\t\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Type :\t\t\e[0;31m[💥]\e[0m\t";

	err = 0;
	std::cout << "\n\n📍 CONST_ITERATOR\n";
    std::vector<int>::const_iterator	std_const_it;
    ft::vector<int>::const_iterator	    ft_const_it;
	std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";

	err = 0;
    std::vector<int>::const_iterator	std_const_it_val(std_fill.begin());
    ft::vector<int>::const_iterator     ft_const_it_val(ft_fill.begin());
	for (; std_const_it_val != std_fill.end(); ++std_const_it_val)
    {
        if (*std_const_it_val != *ft_const_it_val)
		    err++;
        ++ft_const_it_val;
    }
	if (!err)
		std::cout << "Fill :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Fill :\t\t\e[0;31m[💥]\e[0m\t"; 

    err = 0;
    std::vector<int>::const_iterator	std_const_it_copy(std_const_it_val);
    ft::vector<int>::const_iterator	ft_const_it_copy(ft_const_it_val);
	for (; std_const_it_copy != std_fill.end(); ++std_const_it_copy)
    {
        if (*std_const_it_copy != *ft_const_it_copy)
		    err++;
        ++ft_const_it_copy;
    }
	if (!err)
		std::cout << "Copy :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Copy :\t\t\e[0;31m[💥]\e[0m\t"; 
	
    typedef std::vector<int>::const_iterator	std_const_it_type;
    typedef ft::vector<int>::const_iterator		ft_const_it_type;
    typedef std_const_it_type::pointer			std_const_pointer;
    typedef ft_const_it_type::pointer			ft_const_pointer;
	
    if (is_const_iterator<std_const_it_type, std_const_pointer>::value == is_const_iterator<ft_const_it_type, ft_const_pointer>::value)
		std::cout << "Type :\t\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Type :\t\t\e[0;31m[💥]\e[0m\t";

    err = 0;
	std::cout << "\n\n📍 REVERSE_ITERATOR\n";
    std::vector<int>::reverse_iterator	    std_rev_it;
    ft::vector<int>::reverse_iterator	    ft_rev_it;
	std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";

	err = 0;
    std::vector<int>::reverse_iterator	std_rev_it_val(std_fill.rbegin());
    ft::vector<int>::reverse_iterator	ft_rev_it_val(ft_fill.rbegin());
	for (; std_rev_it_val != std_fill.rend(); ++std_rev_it_val)
    {
        if (*std_rev_it_val != *ft_rev_it_val)
		    err++;
        ++ft_rev_it_val;
    }
	if (!err)
		std::cout << "Fill :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Fill :\t\t\e[0;31m[💥]\e[0m\t"; 

    err = 0;
    std::vector<int>::reverse_iterator	std_rev_it_copy(std_rev_it_val);
    ft::vector<int>::reverse_iterator	ft_rev_it_copy(ft_rev_it_val);
	for (; std_rev_it_copy != std_fill.rend(); ++std_rev_it_copy)
    {
        if (*std_rev_it_copy != *ft_rev_it_copy)
		    err++;
        ++ft_rev_it_copy;
    }
	if (!err)
		std::cout << "Copy :\t\t\e[0;32m[⭐️]\e[0m\t";
    else
        std::cout << "Copy :\t\t\e[0;31m[💥]\e[0m\t"; 

	typedef std::vector<int>::iterator			std_rev_it_type;
	typedef ft::vector<int>::iterator			ft_rev_it_type;
    typedef std_it_type::pointer				std_rev_pointer;
    typedef ft_it_type::pointer 				ft_rev_pointer;

    if (is_const_iterator<std_rev_it_type, std_rev_pointer>::value == is_const_iterator<ft_rev_it_type, ft_rev_pointer>::value)
		std::cout << "Type :\t\t\e[0;32m[⭐️]\e[0m\t";
	else
		std::cout << "Type :\t\t\e[0;31m[💥]\e[0m\t";

    std::cout << "\n\n";
}
