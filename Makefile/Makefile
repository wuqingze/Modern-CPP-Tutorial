CC = g++
main: main.cc tool.o
	$(CC) main.cc tool.o -o main

tool.o: tool.cc
	$(CC) -c tool.cc

clean:
	rm *.o main
