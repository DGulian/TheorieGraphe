main.o: main.c
	rm -rf *.o
	gcc main.c voisin_niveau_1.c poigneedemain.c -o main  

