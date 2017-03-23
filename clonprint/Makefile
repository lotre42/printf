# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kahantar <kahantar@42.student.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/04 15:33:12 by kahantar          #+#    #+#              #
#    Updated: 2017/03/23 19:25:53 by kahantar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc
FLAGS 	= -Wall -Werror -Wextra
PATH_SRCS = src/

SRCS = ft_printf.c \
	  ft_modif.c \
	  ft_parse.c \
	  ft_resflag.c \
	  ft_complete.c \
	  ft_itoa_base.c \
	  ft_manadress.c \
	  ft_manatt.c \
	  ft_manattplus.c \
	  ft_manattspace.c \
	  ft_manatttag.c \
	  ft_manattti.c \
	  ft_manconvd.c \
	  ft_manconvs.c \
	  ft_manflag.c \
	  ft_manmodd.c \
	  ft_manmodz.c \
	  ft_manneg.c \
	  ft_modbase.c \
	  ft_strnew.c \
	  ft_strlen.c \
	  ft_strjoin.c \
	  ft_strdup.c \
	  ft_strcmp.c \
	  ft_strchr.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_isdigit.c \
	  ft_atoi.c \
	  ft_memset.c \
	  ft_manforcent.c \
	  ft_strsub.c \
	  ft_manconvc.c \
	  ft_initflag.c \
	  ft_strdel.c \
	  ft_joinfreeall.c \
	  ft_joinfree1.c \
	  ft_joinfree2.c \
	  ft_addtago.c \
	  ft_manmodd2.c \
	  ft_manconvlc.c \
	  ft_manconvls.c

OBJ = $(SRCS:.c=.o)
SRC = $(addprefix $(PATH_SRCS),$(SRCS))

all : $(NAME)

$(NAME) :
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f ./$(OBJ)

fclean : clean
	/bin/rm -f ./$(NAME)

re: fclean all

.PHONY: all clean fclean re
