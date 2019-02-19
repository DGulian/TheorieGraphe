#include <stdio.h>
#include <stdlib.h>
#include "structure.h"

char *voisinNonOriente(Graph graphe, char sommet, int *nbrVois)
{
    int i = 0;
    int cpt = 0;
    char *predecesseurs = malloc(sizeof(char));
    int taille = 0;
    while (i < 330)
    {
        if ((graphe.liens[i][0] == sommet) && (searchSom(predecesseurs, cpt, graphe.liens[i][1]) == 0))
        {
            predecesseurs[cpt] = graphe.liens[i][1];
            taille = taille + 1;
            predecesseurs = realloc(predecesseurs, (taille) * sizeof(char));
            cpt++;
        }
        i++;
    }

    *nbrVois += cpt;
    i = 0;
    while (i < 330)
    {
        if ((graphe.liens[i][1] == sommet) && (searchSom(predecesseurs, cpt, graphe.liens[i][0]) == 0))
        {
            predecesseurs[cpt] = graphe.liens[i][0];
            taille = taille + 1;
            predecesseurs = realloc(predecesseurs, (taille) * sizeof(char));
            cpt++;
        }
        i++;
    }
    *nbrVois += cpt;

    return predecesseurs;
}

char *voisinOriente1(Graph graphe, char sommet, int *taillePred, int *tailleSucc)
{
    int i = 0;
    int cpt = 0;
    char *predecesseurs = malloc(sizeof(char));
    int taille1 = 0;
    while (i < 330)
    {
        if ((graphe.liens[i][1] == sommet) && (searchSom(predecesseurs, cpt, graphe.liens[i][0]) == 0))
        {
            taille1 = taille1 + 1;
            predecesseurs = realloc(predecesseurs, taille1 * sizeof(char));
            predecesseurs[cpt] = graphe.liens[i][0];
            cpt++;
        }
        i++;
    }
    *taillePred = cpt;
    printf("taille pred %d\n", *taillePred);
    return predecesseurs;
}

char *voisinOriente2(Graph graphe, char sommet, int *taillePred, int *tailleSucc)
{
    int i = 0;
    int cpt = 0;
    int taille2 = 0;
    char *successeurs = malloc(sizeof(char));
    while (i < 330)
    {
        if ((graphe.liens[i][0] == sommet) && (searchSom(successeurs, cpt, graphe.liens[i][1]) == 0))
        {
            taille2 = taille2 + 1;
            successeurs = realloc(successeurs, taille2 * sizeof(char));
            successeurs[cpt] = graphe.liens[i][1];
            cpt++;
        }
        i++;
    }
    *tailleSucc = cpt;
    return successeurs;
}

int searchSom(char *tab, int taille, char sommet)
{
    int i = 0;
    while (i < taille)
    {
        if (tab[i] == sommet)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
