#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

char *nbrVoisin(Graph graphe, char sommet, int *nbrVois)
{
    int i = 0;
    int cpt = 0;
    char *predecesseurs;
    int taille = 0;
    while (i < 330)
    {
        if (graphe.liens[i][0] == sommet)
        {
            predecesseurs = (char *)realloc(predecesseurs, taille + sizeof(char));
            predecesseurs[cpt] = graphe.liens[i][1];
            cpt++;
        }
        i++;
    }
    *nbrVois = cpt;
    return predecesseurs;
}

void voisinOriente(Graph graphe, char sommet, char *predecesseurs, char *successeurs)
{
    int i = 0;
    int cpt = 0;
    char *predec;
    char *succes;
    int taille = 0;
    while (i < 330)
    {
        if (graphe.liens[i][1] == sommet)
        {
            predec = (char *)realloc(predec, taille + sizeof(char));
            predec[cpt] = graphe.liens[i][0];
            cpt++;
        }
        i++;
    }

    while (i < 330)
    {
        if (graphe.liens[i][0] == sommet)
        {
            succes = (char *)realloc(succes, taille + sizeof(char));
            succes[cpt] = graphe.liens[i][1];
            cpt++;
        }
        i++;
    }
}
