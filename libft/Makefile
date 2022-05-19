# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 22:53:01 by mahmad-j          #+#    #+#              #
#    Updated: 2022/04/18 00:47:01 by mahmad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	

SRCSB	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_strrncmp.c		\
			ft_countcharinstr.c	\
			ft_strjoinfree.c	\
			ft_freematrix.c		\
			ft_matrixdup.c		\
			ft_vectornew.c		\
			$(SRCS)

NAME	=	libft.a

O = obj/
OBJ = $(SRC:.c=.o)
OBJINDIR = $(addprefix $(O), $(OBJ))

OBJB = $(SRCSB:.c=.o)
OBJBINDIR = $(addprefix $(O), $(OBJB))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -g3

$(O)%.o :	%.c libft.h
			mkdir -p $(O)
			${CC} ${CFLAGS} -c $< -o $@

$(NAME)	:	$(OBJINDIR)
			ar -rcs $(NAME) $(OBJINDIR)

.PHONY	:	all clean fclean re bonus

all		:	$(NAME)

clean	:
			rm -rf $(O)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

bonus	:	$(OBJINDIR) $(OBJBINDIR)
			ar -rcs $(NAME) $(OBJINDIR) $(OBJBINDIR)
