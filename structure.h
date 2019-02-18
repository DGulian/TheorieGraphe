typedef struct{
    int oriented;
    char sommets[25];
    char liens[330][2];
    int nb_degres;
    int nb_liens;
}Graph;

char *voisinNonOriente(Graph graphe, char sommet, int *nbrVois);
void voisinOriente(Graph graphe, char sommet, char *predecesseurs, char *successeurs, int *taillePred, int *tailleSucc);
int searchSom(char *tab, int taille, char sommet);
// void simple_complet(Graph graphe, char sommet);
// void poigneeDeMain(Graph graphe);
