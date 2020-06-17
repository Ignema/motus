#ifndef COULEUR_H_INCLUDED
#define COULEUR_H_INCLUDED

//Contient les initialisations des fonctions utilisees dans Couleur.c

int Existence(char a, char *b);

void Del(char c, char *str);

void bienPlace(char *alea, char *ttv, char *bien, char *mal, char *rest, int N_Max);

void malPlace(char *alea, char *ttv, char *mal, char *rest, int N_Max);

void Couleur(char *bien, char *mal, char *ttv, int E[], int N);

#endif // COULEUR_H_INCLUDED




