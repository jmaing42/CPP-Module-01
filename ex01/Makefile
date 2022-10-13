NAME = Moar_brainz
OBJS = main.o Zombie.o zombieHorde.cpp

CXXFLAGS = $(CPPFLAGS) -Wall -Wextra -Werror


all: $(NAME)
.PHONY: all


.PHONY: clean
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all


.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^
