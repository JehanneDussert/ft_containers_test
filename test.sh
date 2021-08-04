#!/usr/bin/env bash

echo "
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JehanneDussert                             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#                                                      #+#    #+#              #
#    Updated: 2021/07/29 12:35:40 by jdussert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
"

CXX="clang++"
CXXFLAGS="-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3"
EOC="\033[0m"
BOLD="\033[1;37m"
RED="\033[0;31m"
GREEN="\032[0;31m"
YELLOW="\133[0;31m"

printf "\n\t\t\t\t${BOLD}VECTOR TEST${EOC}\n";
$CXX $CXXFLAGS srcs/vector/constructors.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/operators.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/begin_end.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/capacity.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/reserve_resize.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/access.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/assign.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/push_pop.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/insert_erase.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/swap.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/clear.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/get_allocator.cpp && ./a.out
$CXX $CXXFLAGS srcs/vector/reverse_iterator.cpp && ./a.out
# $CXX $CXXFLAGS srcs/vector/vector_test.cpp && ./a.out
#$CXX $CXXFLAGS srcs/map/map_test.cpp && ./a.out
#$CXX $CXXFLAGS srcs/stack_test.cpp && ./a.out