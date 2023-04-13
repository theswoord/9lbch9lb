



SRC = checker.c instructionpush.c instructionsrotate.c instructionsswap.c main.c output.c utils.c tools.c instructionhelpers.c sorts.c utils2.c tools2.c free.c
SRCB = bonus.c bonus_utils.c checker_bonus.c instructionpush_bonus.c instructionsrotate_bonus.c instructionsswap_bonus.c output_bonus.c utils_bonus.c tools_bonus.c instructionhelpers_bonus.c sorts_bonus.c utils2_bonus.c tools2_bonus.c free_bonus.c
NAME = push_swap
CC = gcc

CFLAGS= -Wall -Wextra -Werror
msa7 = rm -rf
obj = ${SRC:.c=.o}
objb = ${SRCB:.c=.o}

libraries = ./printf/libftprintf.a ./gnl/gnl.a ./libft/libft.a 
SUBDIRS = gnl printf libft

# .SILENT:
all : ${NAME}

${NAME} : ${obj}
	${CC} ${CFLAGS} ${obj} $(libraries) -o $(NAME)

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

bonus: ${objb}
	${CC} ${CFLAGS} ${objb} $(libraries) -o checker


clean : 
	${msa7} ${obj}
cleanbonus : 
	${msa7} ${objb}

fclean : clean
	${msa7} ${NAME}

re : fclean all