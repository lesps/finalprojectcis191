CC=clang
EXEC=program
OPTS=-Wall
DEBUGOPTS=-g

$(EXEC): $(EXEC).c
	$(CC) $(OPTS) -o $(EXEC) $(EXEC).c

debug: $(EXEC).c
	$(CC) $(OPTS) $(DEBUGOPTS) -o $(EXEC) $(EXEC).c

.PHONY:
clean:
	rm -f *.o *~
