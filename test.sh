#!/usr/bin/env bash

echo "
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: JehanneDussert <marvin@42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/29 12:35:34 by jdussert          #+#    #+#              #
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
$CXX $CXXFLAGS srcs/vector/vector_test.cpp && ./a.out
#$CXX $CXXFLAGS srcs/map_test.cpp && ./a.out
#$CXX $CXXFLAGS srcs/stack_test.cpp && ./a.out