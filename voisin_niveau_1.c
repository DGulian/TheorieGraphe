#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

char *nbrVoisin(Graph graphe, char sommet, int *nbrVois)
{
    int i = 0;
    int cpt = 0;
    char *successeurs;
    char *predecesseurs;
    int taille = 0;
    if (graphe.oriented == 1)
    {
        while (i < 330)
        {
            if (graphe.liens[i][0] == sommet)
            {
                successeurs = (char *)realloc(successeurs, taille + sizeof(char));
                successeurs[cpt] = graphe.liens[i][1];
                cpt++;
            }
            i++;
        }

        while (i < 330)
        {
            if (graphe.liens[i][1] == sommet)
            {
                predecesseurs = (char *)realloc(predecesseurs, taille + sizeof(char));
                predecesseurs[cpt] = graphe.liens[i][0];
                cpt++;
            }
            i++;
        }

        return voisin;
    }
}


char 