#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

void poigneeDeMain(Graph graphe)
{
    int i = 0 ;
    int sommeSommet;
    int nbArrete ;


     sommeSommet= graphe.nb_degres;


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
