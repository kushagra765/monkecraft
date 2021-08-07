TARGET ?= main
SRC_DIRS ?= ./src
CC = gcc

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(addsuffix .o,$(basename $(SRCS)))

CFLAGS ?= -Wall -Wextra -Iinclude/

%.o: %.c
	@echo [ CC ] $<
	@$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)

	@echo [ BIN ] $<
	@$(CC) $(OBJS) -o $@

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)
