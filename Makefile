GCC = gcc
SRC = $(wildcard *.c)
CFLAGS = -O2 -std=c99 -lm

mnist: $(SRC)
	$(GCC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o
