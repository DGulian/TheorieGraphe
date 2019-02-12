#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include <string.h>

int connexite(Graph G, Sommet s):
{
    char file [25];
    char sommet[2];
    int positionIni=0;
    int positionFin=0;

    for ( int i = positionIni ; i <= nbrDeVoisin(sommet) ; i++)
    {
        strcpy(file[i], Voisin[i](Graph ,sommet);
        positionFin++;
    }

    while (positionIni != positionFin)
    {
        for ( int i = positionIni ; i <= nbrDeVoisin(sommet) ; i++)
        {
            strcpy(file[i], Voisin[i](Graph ,sommet);
            positionFin++;
        }
        positionIni++;
    }
    if (strcmp(file, Graph.sommets) == 0)
        return 1;
    else
        return 0;
}

