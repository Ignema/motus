
#include <gtk/gtk.h>

#include <ctype.h>

#include "Gtk_Widgets.h"
#include "Bouttons.h"


// Ce fichier contient la fonction qui verifie si l'utilisateur a saisi le mot correct


void Test(char *alea, char *ttv, int N_Max){

    int i=0;

    int c=alea[i];

    while(c!='\0' && (alea[i]==toupper(ttv[i])||alea[i]==tolower(ttv[i]))){

        i++;

        c=alea[i];

    }

    if(i==N_Max){

        Show_Dialog("Vous avez gagner!!");

        on_bt2_clicked();

    }

}

int Ortho(char *ttv){

    FILE* f = fopen("Mots/FRANCAIS.txt","r");

    if(!f){

        printf("An error happened after attempting to open file\n");

        return 0;

    }

    int N=0;

    char buffer[30];

    for(int i=0;i<87050;i++){

        fscanf(f,"%s",buffer);

        for (int i = 0; buffer[i]!='\0'; i++) {
      if(buffer[i] >= 'a' && buffer[i] <= 'z') {
         buffer[i] = buffer[i] - 32;
      }
   }


        if(strcmp(ttv,buffer)==0){

          N = 1;

          break;

        }

    }

    fclose(f);

    return N;

}
