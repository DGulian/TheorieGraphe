#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include "voisin_niveau_1.c"




void poigneeDeMain(Graph graphe)
{

    int i = 0 ;
    int sommeSommet;
    int nbArrete ;
    int taille;

     sommeSommet= voisinNonOriente(graphe, graphe.sommets, &taille);


    nbArrete = 2*graphe.nb_liens ;

    if (nbArrete == sommeSommet)
    {
         printf("le theoreme des lemmes de main est verifie");

    }
    else
    {
        printf("le theoreme des lemmes de main est pas verifie");
    }

}
