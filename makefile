BINARY_NAME = timer

all:
	gcc timer.c -o $(BINARY_NAME)

run: all
	./timer

clean:
	rm -rf $(BINARY_NAME)
