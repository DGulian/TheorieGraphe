#include "structure.h"

char *voisinNonOriente(Graph graphe, char sommet, int *nbrVois);
void voisinOriente(Graph graphe, char sommet, char *predecesseurs, char *successeurs, int *taillePred, int *tailleSucc);
int searchSom(char *tab, int taille, char sommet);