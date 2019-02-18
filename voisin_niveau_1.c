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
        if ((graphe.liens[i][0] == sommet) && (searchSom(predecesseurs, cpt, graphe.liens[i][0])==0))
        {
            predecesseurs[cpt] = graphe.liens[i][1];
            predecesseurs = realloc(predecesseurs, taille + sizeof(char));
            cpt++;
        }
        i++;
    }

    *nbrVois += cpt;

    while (i < 330)
    {
        if ((graphe.liens[i][1] == sommet) && (searchSom(predecesseurs, cpt, graphe.liens[i][1])==0))
        {
            predecesseurs[cpt] = graphe.liens[i][0];
            predecesseurs = realloc(predecesseurs, taille + sizeof(char));
            cpt++;
        }
        i++;
    }
    *nbrVois += cpt;

    return predecesseurs;
}

void voisinOriente(Graph graphe, char sommet, char *predecesseurs, char *successeurs, int *taillePred, int *tailleSucc)
{
    int i = 0;
    int cpt = 0;
    char *predec = malloc(sizeof(char));
    char *succes = malloc(sizeof(char));
    int taille1 = 0;
    int taille2 = 0;
    while (i < 330)
    {
        if ((graphe.liens[i][1] == sommet) && (searchSom(predecesseurs, cpt, sommet)==0))
        {
            taille1 = taille1 + sizeof(char);
            predec = realloc(predec, taille1);
            predec[cpt] = graphe.liens[i][0];
            cpt++;
        }
        i++;
    }
    *taillePred = cpt;

    i = 0;
    cpt = 0;
    while (i < 330)
    {
        if ((graphe.liens[i][0] == sommet) && (searchSom(predecesseurs, cpt, sommet)==0))
        {
            taille2 = taille2 + sizeof(char);
            succes = realloc(succes, taille2);
            succes[cpt] = graphe.liens[i][1];
            cpt++;
        }
        i++;
    }
    *tailleSucc = cpt;
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