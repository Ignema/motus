

#include <string.h>

/*

Ce fichier contient l'algorithme qu'on utilise pour construire un tableau de couleur qui obeit au

paradigme couleur deja elabore dans le rapport.

*/


int Existence(char a, char *b){                                // Cherche si le caractere a existe dans la chaine b

    int i = 0;

    char c = *(b+i);

    while(*(b+i)!='\0' && c !=a){
        
        i++;

        c = *(b+i);

    }

    if(*(b+i)=='\0'){

        return -1;

    }else{

    return i;

    }

}

void Del(char c, char *str){                              //Supprime la premiere occurence de c dans str

  int i=0; 

  while(str[i]!='\0' && str[i]!=c){
    
      i++;

  }
   
  if(str[i]!='\0'){ 

    do
      {
        i++;
        str[i-1]=str[i];
      }
    while(str[i]!='\0');

  }


}

void bienPlace(char *alea, char *ttv, char *bien, char *mal, char *rest, int N_Max){

    for(int i=0; i<N_Max; i++){

            if(ttv[i]==alea[i] && bien[i]=='-')
         { 
           bien[i]=ttv[i]; 
           rest[i]='-'; 
           Del(ttv[i],mal);                           
         }

    }


}

void malPlace(char *alea, char *ttv, char *mal, char *rest, int N_Max){

    for(int i=0; i<N_Max; i++){

        if(ttv[i]!=alea[i] && Existence(ttv[i],rest)!=-1 && Existence(ttv[i],mal)==-1) {

            char tmp[2];

            tmp[0]=ttv[i];
            tmp[1]='\0';

	        strcat(mal,tmp);

         }

      }

}

void Couleur(char *bien, char *mal, char *ttv, int clr[], int N_Max){

   for(int j=0;j<N_Max;j++){

       if(bien[j]!='-'){

           clr[j] = 2;

       }

       else if(Existence(ttv[j],mal)!=-1){

            clr[j] = 1;

            Del(ttv[j],mal);

       }

   }

}
