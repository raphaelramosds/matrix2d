cls

g++ -c matrix2d.cpp -o matrix2d.o
g++ -c main.cpp -o main.o
g++ -o programa matrix2d.o main.o

programa

del *.o
del programa.exe