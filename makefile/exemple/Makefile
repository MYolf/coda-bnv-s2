# Makefile

NAME = nom_de_votre_executable

SRCS = main.c \
	fichier1.c \
	fichier2.c \
	fichier3.c

CFLAGS = -Wall -Wextra -O2

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all