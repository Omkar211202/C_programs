test: complexmain.o complex.o
	gcc -o test complexmain.o complex.o
complexmain.o: complexmain.c
	gcc -c complexmain.c
complex.o: complex.c
	gcc -c complex.c
clean:
	rm complex.o complexmain.o                                  
