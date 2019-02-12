#include <stdio.h>
#include <stdlib.h>
#include "structure.h"


Graph initialisation_graphe(){
    Graph g;
    int nombreN;

    printf("Entrez le nombre de  sommets (MAX=25):\n");
    scanf("%d",&nombreN);
    g.nb_degres=nombreN;
    printf(" Nombre de sommet %d\n",nombreN);
    int i=0;
    while(i<nombreN){
        char s;
        scanf(" %c",&s);
        g.sommets[i]=s;
        i++;
    }
    int nbLiens;
    printf(" Entrez le nombre de liens\n");
    scanf("%d",&nbLiens);
    printf("Il y a donc %d liens\n",nbLiens);
    g.nb_liens=nbLiens;
    i=0;
    int oriente;
    printf("Le graphe est il oriente ? 1: Oui ///  0 : Non \n");
    scanf("%d",&oriente);
    while(i<nbLiens){
        char depart;
        char arrivee;
        printf("Depart\n");
        scanf(" %c",&depart);
        g.liens[i][0]=depart;
         printf("Arrivee\n");
        scanf(" %c",&arrivee);
        g.liens[i][1]=arrivee;
        i++;
    }





   
    return g;
}
int main(){
Graph g= initialisation_graphe();
    return 0;
}
