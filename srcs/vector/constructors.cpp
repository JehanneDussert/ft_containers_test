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

int vector(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
    int err = 0;
	monFlux1 << "vector\n";
	monFlux1 << "#################################\n";
	monFlux2 << "vector\n";
	monFlux2 << "#################################\n";

	std::vector<int>			std_default;
	std::vector<int>			std_fill(8, 10);
	std::vector<int>			std_range(std_fill.begin() + 2, std_fill.end() - 3);
	std::vector<int>			std_copy(std_range);

	ft::vector<int>				ft_default;
	ft::vector<int>				ft_fill(8, 10);
	ft::vector<int>				ft_range(ft_fill.begin() + 2, ft_fill.end() - 3);
	ft::vector<int>				ft_copy(ft_range);

    err += check_size(std_default, ft_default, monFlux1, monFlux2);
	err += check_capacity(std_default, ft_default, monFlux1, monFlux2);
	err += check_content(std_default, ft_default, monFlux1, monFlux2);

    if (!err)
    {
        monFlux1 << "default done\n";
        monFlux2 << "default done\n";
    }
    else
    {
        monFlux1 << "error default vector\n";
        monFlux2 << "error default vector\n";
    }
    
    err += check_size(std_fill, ft_fill, monFlux1, monFlux2);
	err += check_capacity(std_fill, ft_fill, monFlux1, monFlux2);
	err += check_content(std_fill, ft_fill, monFlux1, monFlux2);
    
    err += check_size(std_copy, ft_copy, monFlux1, monFlux2);
	err += check_capacity(std_copy, ft_copy, monFlux1, monFlux2);
	err += check_content(std_copy, ft_copy, monFlux1, monFlux2);

    err += check_size(std_range, ft_range, monFlux1, monFlux2);
	err += check_capacity(std_range, ft_range, monFlux1, monFlux2);
	err += check_content(std_range, ft_range, monFlux1, monFlux2);
    
    return err;
}

int iterator(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
    int err = 0;
	monFlux1 << "iterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "iterator\n";
	monFlux2 << "#################################\n";

    std::vector<int>::iterator	std_it;
    ft::vector<int>::iterator	ft_it;
	std::cout << "Default :\t\e[0;32m[⭐️]\e[0m\t";

	std::vector<int>			        std_fill(8, 10);
	ft::vector<int>			            ft_fill(8, 10);
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
    
    return err;
}

int const_iterator(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
    int err = 0;
	monFlux1 << "const_iterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "const_iterator\n";
	monFlux2 << "#################################\n";

    std::vector<int>::const_iterator	std_const_it;
    ft::vector<int>::const_iterator	    ft_const_it;

    monFlux1 << "default done\n";
    monFlux2 << "default done\n";

	ft::vector<int>::iterator	it2 = ft_default.begin();
	for (std::vector<int>::iterator	it1 = std_default.begin(); it1 != std_default.end(); ++it1)
    {
        if (*it1 != *it2)
		    err++;
        ++it2;
    }

	std::vector<int>			        std_fill(8, 10);
	ft::vector<int>			            ft_fill(8, 10);
    std::vector<int>::const_iterator	std_const_it_val(std_fill.begin());
    ft::vector<int>::const_iterator     ft_const_it_val(ft_fill.begin());
	
    for (; std_const_it_val != std_fill.end(); ++std_const_it_val)
    {
        if (*std_const_it_val != *ft_const_it_val)
		    err++;
        ++ft_const_it_val;
    }
    
	err += check_size(std_const_it_val, ft_const_it_val, monFlux1, monFlux2);
	err += check_capacity(std_const_it_val, ft_const_it_val, monFlux1, monFlux2);
	err += check_content(std_const_it_val, ft_const_it_val, monFlux1, monFlux2);

    std::vector<int>::const_iterator	std_const_it_copy(std_const_it_val);
    ft::vector<int>::const_iterator	    ft_const_it_copy(ft_const_it_val);

	err += check_size(std_const_it_copy, ft_const_it_copy, monFlux1, monFlux2);
	err += check_capacity(std_const_it_copy, ft_const_it_copy, monFlux1, monFlux2);
	err += check_content(std_const_it_copy, ft_const_it_copy, monFlux1, monFlux2);
	
    typedef std::vector<int>::const_iterator	std_const_it_type;
    typedef ft::vector<int>::const_iterator		ft_const_it_type;
    typedef std_const_it_type::pointer			std_const_pointer;
    typedef ft_const_it_type::pointer			ft_const_pointer;
	
    if (is_const_iterator<std_const_it_type, std_const_pointer>::value == is_const_iterator<ft_const_it_type, ft_const_pointer>::value)
	{
        monFlux1 << "is_const done\n";
	    monFlux2 << "is_const done\n";
    }
	else
    {
		err++;
        monFlux1 << "error is_const\n";
	    monFlux2 << "error is_const\n";
    }

    return err;
}

int reverse_iterator(std::ofstream &monFlux1, std::ofstream &monFlux2)
{
    int err = 0;
	monFlux1 << "reverse_iterator\n";
	monFlux1 << "#################################\n";
	monFlux2 << "reverse_iterator\n";
	monFlux2 << "#################################\n";

    std::vector<int>::reverse_iterator	    std_rev_it;
    ft::vector<int>::reverse_iterator	    ft_rev_it;

	monFlux1 << "default done\n";
	monFlux2 << "default done\n";

	std::vector<int>			        std_fill(8, 10);
	ft::vector<int>			            ft_fill(8, 10);
    std::vector<int>::reverse_iterator	std_rev_it_val(std_fill.rbegin());
    ft::vector<int>::reverse_iterator	ft_rev_it_val(ft_fill.rbegin());

	err += check_size(ft_rev_it_val, std_rev_it_val, monFlux1, monFlux2);
	err += check_capacity(ft_rev_it_val, std_rev_it_val, monFlux1, monFlux2);
	err += check_content(ft_rev_it_val, std_rev_it_val, monFlux1, monFlux2);

    std::vector<int>::reverse_iterator	std_rev_it_copy(std_rev_it_val);
    ft::vector<int>::reverse_iterator	ft_rev_it_copy(ft_rev_it_val);

	err += check_size(ft_rev_it_copy, std_rev_it_copy, monFlux1, monFlux2);
	err += check_capacity(ft_rev_it_copy, std_rev_it_copy, monFlux1, monFlux2);
	err += check_content(ft_rev_it_copy, std_rev_it_copy, monFlux1, monFlux2);

	typedef std::vector<int>::iterator			std_it_type;
	typedef ft::vector<int>::iterator			ft_it_type;
	typedef std::vector<int>::iterator			std_rev_it_type;
	typedef ft::vector<int>::iterator			ft_rev_it_type;
    typedef std_it_type::pointer				std_rev_pointer;
    typedef ft_it_type::pointer 				ft_rev_pointer;

    if (is_const_iterator<std_rev_it_type, std_rev_pointer>::value == is_const_iterator<ft_rev_it_type, ft_rev_pointer>::value)
	{
        monFlux1 << "is_const done\n";
	    monFlux2 << "is_const done\n";
    }
	else
    {
		err++;
        monFlux1 << "error is_const\n";
	    monFlux2 << "error is_const\n";
    }

    return err;
}

int main(void)
{
    std::cout << "constructors";

	std::ofstream monFlux1("logs/vector/ft_vector.constructors.log");
	std::ofstream monFlux2("logs/vector/std_vector.constructors.log");

	if (vector(monFlux1, monFlux2))
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";
    
    if (iterator(monFlux1, monFlux2))
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";
    
    if (const_iterator(monFlux1, monFlux2))
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";
    
    if (reverse_iterator(monFlux1, monFlux2))
		std::cout << "\t\t\e[0;31m[💥]\e[0m";
	else
		std::cout << "\t\t\e[0;32m[⭐️]\e[0m";

    std::cout << "\n";
	monFlux1.close();
	monFlux2.close();
	return 0;
}
