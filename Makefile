# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mdelarbr <mdelarbr@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/02 17:42:56 by mdelarbr     #+#   ##    ##    #+#        #
#    Updated: 2019/04/15 10:37:16 by mdelarbr    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./src/
SRC =src/ft_atoi.c \
	src/ft_bzero.c \
	src/ft_count_char.c\
	src/ft_itoa.c\
	src/ft_lstadd.c\
	src/ft_lstdel.c\
	src/ft_lstdelone.c\
	src/ft_lstmap.c\
	src/ft_lstnew.c\
	src/ft_memcpy.c\
	src/ft_memdel.c\
	src/ft_putchar.c\
	src/ft_putchar_fd.c\
	src/ft_putendl.c\
	src/ft_putendl_fd.c\
	src/ft_putnbr.c\
	src/ft_putnbr_fd.c\
	src/ft_putstr.c\
	src/ft_putstr_fd.c\
	src/ft_strchr.c\
	src/ft_strcmp.c\
	src/ft_strcpy.c\
	src/ft_strdel.c\
	src/ft_strdup.c\
	src/ft_strjoin.c\
	src/ft_strlen.c\
	src/ft_strncmp.c\
	src/ft_strncpy.c\
	src/ft_strnew.c\
	src/ft_strnstr.c\
	src/ft_strrchr.c\
	src/ft_strsplit.c\
	src/ft_strstr.c\
	src/ft_strsub.c\
	src/ft_strfjoin.c\
	src/ft_itoa_base.c\
	src/ft_search.c\
	src/ft_strjoin_free.c\
	src/ft_strcat.c

BRED = \033[1;31m
WHITE = \033[0m
BGREEN = \033[1;32m

FLAG = -Wall -Werror -Wextra
HEADER = includes
OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME) : $(OBJ)
	@ar rc $@ $^
	@ranlib $@

OBJ:
	@gcc -c $(FLAG) $(NAME) -I
	@echo "Compilation $(BRED)libft$(WHITE) : ... $(BGREEN)[OK]$(WHITE)"


clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
