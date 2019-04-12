main: main.o hello.o add.o sub.o
	g++ -o main main.o hello.o add.o sub.o
main.o: main.cpp
	g++ -c -o main.o main.cpp
add.o: add.cpp
	g++ -c -o add.o add.cpp
sub.o: sub.cpp
	g++ -c -o sub.o sub.cpp
hello.o: hello.cpp
	g++ -c -o hello.o hello.cpp
clean:
	rm main *.o
