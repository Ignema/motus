
#include <gtk/gtk.h>

#include <stdio.h>
#include <string.h>
#include "Var_Global.h"

// Ce fichier contient la fonction qui cherche le score de l'utilisateur actuelle

int score(char user[]){

    FILE* f = fopen("users","r");

    if(!f){

        printf("An error happened after attempting to open file\n");

        return -1;

    }

    int tmp1,tmp2,N=0;

    char buffer1[20];
    char buffer2[20];

    for(int i=0;!feof(f);i++){

        fscanf(f,"%d %s %s %d",&tmp1,buffer1,buffer2,&tmp2);

        N++;

    }

    fseek(f,0,SEEK_SET);

    int index[N];
    int score[N];

    int i = 0;

    for(i=0;1;i++){

    fflush(stdin);

    fscanf(f,"%d %s %s %d",&index[i],buffer1,buffer2,&score[i]);

    if(strcmp(user,buffer1)==0) break;

    }

    return score[i];

    fclose(f);

}


void Score_afficher(){

    FILE* f = fopen("users","r");

    if(!f){

        printf("An error happened after attempting to open file\n");

        return ;

    }

    int tmp1,tmp2,N=0;

    char buffer1[20];
    char buffer2[20];

    for(int i=0;!feof(f);i++){

        fscanf(f,"%d %s %s %d",&tmp1,buffer1,buffer2,&tmp2);

        N++;

    }

    fseek(f,0,SEEK_SET);

    int index[N];
    int score[N];

    for(int i=0;i<N;i++){

    fflush(stdin);

    fscanf(f,"%d %s %s %d",&index[i],buffer1,buffer2,&score[i]);

    }

    fclose(f);

    int temp;

    for(int k=N-1; k>0; k--){

        for(int j=1; j<=k; j++){

            if(score[j-1]>score[j]){

                temp = score[j-1];

                score[j-1] = score[j];

                score[j] = temp;

            }

        }


    }

    for(int i=0; i<N; i++){

    gtk_label_set_text(GTK_LABEL(C.sc[i]), '0' + score[i]);

    }

}