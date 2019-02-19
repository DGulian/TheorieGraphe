#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

//cherche le lien de poids minimal
char **lienMini(char **vois, int nbrvois2)
{
    char liens[1][2];
    int poids = vois[0][2];
    liens[0][0] = vois[0][1];
    liens[0][1] = vois[0][2];
    for (int i = 1; i < nbrvois2; i++)
    {
        //si le poids du liens suivant est plus petit on le remplace
        if (poids > vois[i][2])
        {
            poids = vois[i][2];
            liens[0][0] = vois[i][1];
            liens[0][1] = vois[i][2];
        }
    }
    return liens;
}

//algo de dijkstra
char **dijkNonOriente(Graph graphe, char *source)
{
    int nbrVois;
    int taille = 1;
    char *chemin = malloc(sizeof(char));
    char **voisinDir = voisinNonOriente(graphe, source, &nbrVois);
    chemin = realloc(chemin, taille * sizeof(char));
    taille = taille + 1;

}