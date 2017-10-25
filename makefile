OBJS = principal.cpp sort.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -pedantic
LFLAGS = -Wall   $(DEBUG)   -pedantic
TARGET = principal

$(TARGET) : $(OBJS)
	$(CC)  $(LFLAGS)   $(OBJS)  -o  $(TARGET)

sort.o : sort.h sort.cpp
	$(CC)   $(CFLAGS)   sort.cpp

clean:
	\rm  -f  *.o  $(TARGET)
