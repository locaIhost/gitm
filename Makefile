TARGET = php7-session-clean
CC = gcc

PREFIX_HEADER = headers/
PREFIX_CONFIG = config/
PREFIX_SOURCE = ./source/
PREFIX_OBJECT = ./object/

SOURCE = $(wildcard $(PREFIX_SOURCE)*.c)
OBJECT = $(patsubst $(PREFIX_SOURCE)%.c, $(PREFIX_OBJECT)%.o, $(SOURCE))

$(TARGET): $(OBJECT)
	$(CC) -o $(TARGET) $(OBJECT)

$(PREFIX_OBJECT)%.o: $(PREFIX_SOURCE)%.c
	$(CC) -c $< -o $@ -I$(PREFIX_CONFIG) -I$(PREFIX_HEADER)

clean:
	rm -r $(PREFIX_OBJECT)*.o $(TARGET)