# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matoledo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 22:47:59 by matoledo          #+#    #+#              #
#    Updated: 2025/03/09 22:54:48 by matoledo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
SRC = main.c dictionary_main.c string_manager.c error_manager.c
OBJ = main.o dictionary_main.o string_manager.o error_manager.o
EXEC = rush-02

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

dictionary.o: dictionary_main.c
	$(CC) $(CFLAGS) -c dictionary_main.c -o dictionary_main.o

error_manager.o: error_manager.c
	$(CC) $(CFLAGS) -c error_manager.c -o error_manager.o

string_manager.o: string_manager.c
	$(CC) $(CFLAGS) -c string_manager.c -o string_manager.o

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all