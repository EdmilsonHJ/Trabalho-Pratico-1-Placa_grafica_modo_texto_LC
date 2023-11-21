all: grafica.o main.c 
	gcc -o main main.c grafica.o

arquivo: grafica.c
	gcc -c grafica.c 

clean:
	rm * .o * .exe