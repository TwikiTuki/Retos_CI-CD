CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=src/suma.c src/resta.c src/multiplicacion.c src/division.c 
TARGET=programa
TEST_TARGET=test_challenge06

MAIN=starter.c
TEST_MAIN=test_challenge06.c

build: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(MAIN)

test: build $(TEST_MAIN)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(SRC) $(TEST_MAIN)
	./$(TEST_TARGET)

package: build
	mkdir -p dist
	cp $(TARGET) dist/

clean:
	rm -f $(TARGET) $(TEST_TARGET) 
	rm -rf dist