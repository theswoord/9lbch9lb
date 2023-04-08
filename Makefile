



SRC = checker.c instructionpush.c instructionsrotate.c instructionsswap.c main.c output.c utils.c
NAME = push_swap
CC = gcc

# CFLAGS= -Wall -Wextra -Werror
msa7 = rm -rf
obj = ${SRC:.c=.o}
libraries = ./printf/libftprintf.a ./gnl/gnl.a ./libft/libft.a 
SUBDIRS = gnl printf libft

# .SILENT:
all : ${NAME}

${NAME} : ${obj}
	${CC} ${obj} $(libraries) -o $(NAME)

%.o: %.c
	${CC} -c $< -o $@

libs: $(SUBDIRS)
	@echo "\033[1;32mmaking the libs ...\033[0m"

	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) all;)
	@echo "\033[1;31mit's made \033[0m"
libsre: $(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) re;)
libsclean:	$(SUBDIRS)
	$(foreach dir, $(SUBDIRS), $(MAKE) -C $(dir) fclean;)

clean : 
	${msa7} ${obj}

fclean : clean
	${msa7} ${NAME}

re : fclean all