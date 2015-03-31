main2:lab2.o main2.o
	g++ -o main2 main2.o lab2.o

lab2.o:lab2.cpp lab2.h
	g++ -c lab2.cpp

main2.o:main2.cpp lab2.h
	g++ -c main2.cpp

clean:
	rm main2*.o
