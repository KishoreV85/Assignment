#Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Target executable
TARGET = train_booking

# Source files
SRC_FILES = TrainBooking.c train_details.c ticket_booking.c booking_data.c cancel_ticket.c view_tickets.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Default rule to build the target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $(OBJ_FILES)

# Rule for object files
%.o: %.c train_details.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJ_FILES) $(TARGET)

# Rebuild the project from scratch
rebuild: clean all

