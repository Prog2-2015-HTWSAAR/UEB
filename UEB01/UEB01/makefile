VERSION = 1
CFLAGS  = -Wall -pedantic
all: create_o	
clean:	remove_o
	
remove_o:	create_o
	rm *.o	
create_o:	create_prog
	g++ $(CFLAGS) -c *.cpp
	
create_prog:
	g++ $(CFLAGS) -o prog *.o