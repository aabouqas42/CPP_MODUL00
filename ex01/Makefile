CC = c++
CFLAGS = -Wextra -Werror -Wall -std=c++98
SRC = main.cpp PhoneBook.cpp Contact.cpp
NAME = phonebook

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

re: clean all

clean:
	rm -f $(NAME)
