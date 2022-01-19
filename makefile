CC = gcc

CFLags = -Wall -g

SRCS = test_bar.c bar.c mocking.c mock_foo.c

OBJS = ${SRCS:.c=.o}

MAIN = test_bar

all: ${MAIN}
	@echo done...

${MAIN}: ${OBJS}
	@echo ${MAIN} built
	@$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.c.o: 
	@echo compiling $< ...
	@$(CC) $(CFLAGS) -c $<  -o $@

clean:
	@$(RM) *.o *~ $(MAIN)