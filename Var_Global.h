
#ifndef VAR_GLOBAL_H_INCLUDED
#define VAR_GLOBAL_H_INCLUDED

// CE FICHIER CONTIENT UNIQUEMENT LES INITIALISATIONS DES VARIABLES GLOBALES PERTINENTES

char user[20];                                             // Le Pseudo d'un utilisateur
char pwd[20];                                              // Son mot de passe

char new_user[20];                                         // Le Pseudo d'un nouveau utilisateur                                            
char new_pwd[20];                                          // Son mot de passe
char conf[20];                                             // Confirmation du mot de passe

int *clr;                                                  // Le tableau qui contient les couleurs des lettres

int N_Max;                                                 // Nombre maximale des lettres

int Tr;                                                    // Temps de reflexion
int i_tent;                                                // Iterateur sur les tentatives

int Orthographe;                                           // Signal si les mots saisient doivent respecter l'orthographe

char *bien;                                                // Tableau des lettres bien place
char *mal;                                                 // Tableau des lettres mal place
char *rest;                                                // Tableau du reste du mot a cherche
char *ttv;                                                 // Stocke la tentative de l'utilisateur

char *alea;                                                // Designe le mot a cherche

int f;                                                     // une variable booleen qui s'active si on a gagner

int *S;                                                    // Contient les scores

char data[7][15];                                          // Tableau de toutes les tentatives

typedef struct _img{

    GtkWidget *i[70];                                      // Structure contenant les images des lettres

}img;

img L; // Instantiation de la structure

typedef struct _Class{

    GtkWidget *p[10];

    GtkWidget *sc[10];                                      // Structure des Pseudo et leur scores

}Class;

Class C; // Instantiation de la structure

int limit;                                                  // Nombre max des scores a afficher

#endif // VAR_GLOBAL_H_INCLUDED
