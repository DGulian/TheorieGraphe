#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

char ** tri(char **tab, int taille){

for (size_t j = 0; j < 330; j++) {
  for (size_t i = 0; i < taille; i++) {
    if (tab[j][i] > tab[j][i+1]) {
      int temp ;
      temp = tab[j][i];
      tab[j][i] = tab[j][i+1];
      tab[j][i+1] = temp;
      }
    printf("%s\n", tab[j][i]);
    }
  }
for (i = 0; i < 330; i++) {
  for (j = 0; j < taille; j++) {
      printf("%c ", tab[i][j]);
    }
    puts("");
  }
  puts("");

return tab;
}
