CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o)
NAME = school
RM: rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

# makes executables
all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# deletes temporary files and the executable
clean:
	$(RM) *~ $(NAME)

# deletes object files
oclean:
	$(RM) $(OBJ)

# deletes all files
fclean: clean oclean

# deletes all & recompiles all source files
re: oclean all
