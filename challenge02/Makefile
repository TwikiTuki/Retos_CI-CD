CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge02
FILES=operaciones.c
MAIN_FILES=starter.c $(FILES)
TEST_FILES=test_challenge02.c $(FILES)

all: $(TARGET)

$(TARGET): $(MAIN_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(MAIN_FILES) 

test: $(TEST_FILES)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_FILES)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

