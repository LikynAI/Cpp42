# executable
NAME := exe

# sources
SRC :=	main.cpp		\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		
# tmp files
OBJ := $(SRC:%.cpp=%.o)
DPS := $(SRC:%.cpp=%.d)

# flags
CPPFLAGS := -std=c++98 -Wall -Wextra -Werror
CXXFLAGS := -MMD -MP

# rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

%.o: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

-include $(DPS)

clean:
	@printf ">Makefile> clean tmp files\n"
	$(RM) $(OBJ) $(DPS)

fclean: clean
	@printf ">Makefile> clean executable\n"
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean compile_libs create_dirs clean_libs log_compile_start
