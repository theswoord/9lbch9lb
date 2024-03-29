



SRC = checker.c instructionpush.c instructionsrotate.c instructionsswap.c main.c output.c utils.c tools.c instructionhelpers.c sorts.c utils2.c tools2.c free.c
SRCB = ./bonus_checker/bonus.c ./bonus_checker/instructionpush_bonus.c ./bonus_checker/instructionsrotate_bonus.c ./bonus_checker/instructionsswap_bonus.c ./bonus_checker/output_bonus.c ./bonus_checker/tools_bonus.c ./bonus_checker/instructionhelpers_bonus.c ./bonus_checker/utils2_bonus.c ./bonus_checker/tools2_bonus.c ./bonus_checker/free_bonus.c ./bonus_checker/checker_bonus.c
NAME = push_swap
NAMEB = checker
CC = gcc

CFLAGS= -Wall -Wextra -Werror
msa7 = rm -rf
obj = ${SRC:.c=.o}
objb = ${SRCB:.c=.o}

libraries = ./printf/libftprintf.a ./gnl/gnl.a ./libft/libft.a 
SUBDIRS = gnl printf libft

.SILENT:
all : libs ${NAME}

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
	${CC} ${CFLAGS} ${objb} $(libraries) -o $(NAMEB)

rebonus : fcleanbonus bonus

clean : 
	${msa7} ${obj}
cleanbonus : 
	${msa7} ${objb}

fclean : clean
	${msa7} ${NAME}
fcleanbonus : cleanbonus
	${msa7} ${NAMEB}

re : fclean all