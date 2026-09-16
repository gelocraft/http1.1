CC = cc
CFLAGS = -std=c99 -Wall -Wextra
BINARY = grassfed-http
OBJECTS = $(patsubst %.c,%.o,$(shell find -name "*.c"))

.PHONY: all clean

.PHONY: all
all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(BINARY) $(OBJECTS)
