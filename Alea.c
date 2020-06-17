
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ce fichier contient les fonctions qui aident a recuperer un mot aleatoire pour le deroulement du jeu

int rGen(){

    srand(time(NULL));

    return 1 + rand() %  51;

}

void ChoixAlea(char **buffer, int N){

    *buffer = (char *) malloc(N*sizeof(char));

    FILE* f;

    switch(N){

        case 6: f = fopen("Mots/Mots6.txt","r"); break;

        case 7: f = fopen("Mots/Mots7.txt","r"); break;

        case 8: f = fopen("Mots/Mots8.txt","r"); break;
        
        case 9: f = fopen("Mots/Mots9.txt","r"); break;

        case 10: f = fopen("Mots/Mots10.txt","r"); break;

    }

    int r = rGen(); 

    for(int i=0; i<r;i++){

        fscanf(f,"%s",*buffer);

    }

}
