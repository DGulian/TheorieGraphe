typedef struct{
    int oriented;
    char sommets[25];
    char liens[330][2];
    int nb_degres;
    int nb_liens;
}Graph;

char * nbrVoisin(Graph graphe, char sommet, int *nbrVois);
void poigneeDeMain(Graph graphe);