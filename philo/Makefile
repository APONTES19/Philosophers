# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 19:01:44 by lucasmar          #+#    #+#              #
#    Updated: 2022/11/21 11:14:53 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# libs *********************************************************************** #
HEADERS_PATH=	./app/includes/
# inputs ********************************************************************* #
NAME=philo

SRC_PATH=./app/src
OBJ_PATH=./app/obj

SRC_FILES=	philo.c\
			check_arguments.c\
			error.c\
			ft_long_atoi.c

SRC=$(addprefix $(SRC_PATH)/, $(SRC_FILES))
OBJ=$(SRC:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)

# compilation **************************************************************** #
CC=cc
FLAG=-Wall -Werror -Wextra
# clean ********************************************************************** #
RM=-rm -f
RM_DIR=rm -rf
# rules ********************************************************************** #
all:	$(NAME)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAG) -I $(HEADERS_PATH) -c $< -o $@

$(NAME): $(OBJ)
		@$(CC) $(FLAG) -I $(HEADERS_PATH) -o $@ $(OBJ)
# message in terminal ************ #
		@echo "\033[1;32m"
		@echo "	Philo created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to Philosophers by lucasmar 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "	run ./philo \n\n\t 1.( 2 -> [number of Philosophers] )\n\t 2.( 10 ->[time_to_die] )\n\t 3.( 50 ->[time_to_eat] )\n\t 4.( 30 -> [time_to_sleep] )\n\t *5.( 1 ->[optional - number_of_times_each_philosopher_must_eat] )"
		@echo "\n	example: ./philo 2 10 50 30 "
		@echo "\033[0m"
clean:
		@$(RM_DIR) $(OBJ_PATH)
		@echo "\033[0;31m       ▥ Philo objects clean ✓ \033[0m"

fclean:		clean
		@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ Philo clean ✓ \033[0m"

re:		fclean all

.PHONY: all clean fclean re
