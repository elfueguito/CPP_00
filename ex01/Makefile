NAME = PhoneBook
S = src/
HEADERS = ./includes/Contact.hpp ./includes/PhoneBook.hpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

SRC = 	$SContact.cpp $SPhoneBook.cpp $Smain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS) Makefile
	$(CC) $(CFLAGS) $(OBJ) -o $@ -I ./includes

%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes

clean:
	rm -f $S*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean