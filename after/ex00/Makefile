#Name
NAME = factory0

#Compiler
CC = 			clang++
CFLAGS = 		-Wall -Wextra -Werror

#Shell
MKDIR =			mkdir -p
RM =			rm -rf

#Directories
SRCDIR = 		./srcs
OBJDIR =  		./objs
INCDIR = 		./incs

#Files
FILES =			Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				main.cpp

#Srcs
SRCS = 			$(foreach FILE, $(FILES), $(shell find $(SRCDIR) -name $(FILE)))

#Objs
OBJS = 			$(patsubst $(SRCDIR)/%, $(OBJDIR)/%, $(SRCS:.cpp=.o))

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(MKDIR) $(@D)
	@$(CC) $(CFLAGS) -I $(INCDIR) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJDIR) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re