NAME = Bureaucrat
CFLAG = -Wall -Werror -Wextra -g -std=c++98 ##-fsanitize=address
SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)
HEADER = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

%.o: %.cpp
	$(CC) -I. $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HEADER) Makefile
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

git: fclean
	git add *
	git commit -m "auto commit"
	git push

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean