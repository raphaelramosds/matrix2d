CC = g++

output: main.o matrix2d.o
	${CC} main.o matrix2d.o -o output
	./output

main.o: main.cpp
	${CC} -c main.cpp

matrix2d.o: matrix2d.cpp matrix2d.h
	${CC} -c matrix2d.cpp

clean:
	rm *.o output
