#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

void simple_complet(Graph graphe, char sommet){

char * marque;
char * fils;
int taille = 0;

marque = voisinNonOriente(graphe, sommet, &taille);

for (size_t i = 0; i < taille; i++) {
  if(fils[i]!=marque[i]){
   simple_complet(graphe, fils[i]);
    }
  }
}

int main() {
  /* code */
  return 0;
}
