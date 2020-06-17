
#include <stdio.h>
#include <string.h>

// Ce fichier contient la fonction qui verifie si l'utilisateur et son mot de passe sont valides

int check(char user[],char pwd[]){

    FILE* f = fopen("users","r");

    if(!f){

        printf("An error happened after attempting to open file\n");

        return 0;

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

    if(strcmp(user,buffer1)==0 && strcmp(pwd,buffer2)==0){

        return 1;

    }

    }

    fclose(f);

    return 0;


}
