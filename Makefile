CC:=cc
CFLAGS:=-Wall -Wextra -Werror
SOURCEFILES_SERVER:=src/server/main_srv.c
SOURCEFILES_CLIENT:=src/client/main_clt.c
OBJECTS_SERVER:=$(patsubst src/server/%.c,objects/%.o,$(SOURCEFILES_SERVER))
OBJECTS_CLIENT:=$(patsubst src/client/%.c,objects/%.o,$(SOURCEFILES_CLIENT))
NAME_CLIENT:=client
NAME_SERVER:=server
OBJDIR:=objects

all: $(NAME_SERVER) $(NAME_CLIENT)

libft.a:
	$(MAKE) -C libft/ all
	cp libft/libft.a .

$(OBJDIR)/%.o: src/server/%.c
	mkdir -p objects
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes/

$(OBJDIR)/%.o: src/client/%.c
	mkdir -p objects
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes/

$(NAME_CLIENT): libft.a ${OBJECTS_CLIENT}
	${CC} ${CFLAGS} ${OBJECTS_CLIENT} -o $(NAME_CLIENT) -L. -lft

$(NAME_SERVER): libft.a ${OBJECTS_SERVER}
	${CC} ${CFLAGS} ${OBJECTS_SERVER} -o $(NAME_SERVER) -L. -lft

clean:
	rm -f $(OBJECTS_CLIENT) $(OBJECTS_SERVER)
	$(MAKE) -C libft/ clean

fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)
	rm -f libft.a
	$(MAKE) -C libft/ fclean

re: 
	+make fclean
	+make all

.PHONY: all clean fclean re
