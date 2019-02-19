main.o: main2.c
	rm -rf *.o
	gcc main2.c voisin_niveau_1.c -o main  

