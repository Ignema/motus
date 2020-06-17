
#include <gtk/gtk.h>

#include <ctype.h>

#include "Bouttons.h"
#include "Var_Global.h"
#include "Gtk_Widgets.h"
#include "Couleur.h"
#include "setColor.h"
#include "Gagner.h"

// ce fichier contient la fonction executee en cliquant sur entre (saisie d une tentative)

void	on_Txt_activate (GtkEntry *e){

	Tr = 0;				 										// Temps ecoule reinitialiser a 0 

for (int i = 0; ttv[i]!='\0'; i++) {
      if(ttv[i] >= 'a' && ttv[i] <= 'z') {
         ttv[i] = ttv[i] - 32;									// Transforme la tentative en majuscule 
      }
   }



for (int i = 0; ttv[i]!='\0'; i++) {

      if(!isalpha(ttv[i])) {                                           // Verifie si le mot saisi contient uniquenment des lettres

		  Show_Dialog("Veuiller entrer des lettres\n\nRemarque: Saisir les lettres sans accents si il y en a");

         return;
      }
   }


if(Ortho(ttv)!=1 && Orthographe==1) { 								// Verifie si le mot saisi est bien orthographie et si l'utilisateur a choisit comme option de prendre en compte l ortographe

		  Show_Dialog("Le mot saisi est mal orthographiee\nou n'existe pas dans le dictionnaire ou est un nom propre\n\n Resaisir s'il vous plait");

         return;
      }

for (int i = 0; i<7; i++) {

      if(strcmp(data[i],ttv)==0 && strcmp(data[i],"temp")!=0) {          // pour eviter la resaisie du meme mot

		  Show_Dialog("Le mot est deja saisi!");

         return;
      }
   }

if(strlen(ttv)!=N_Max) {

		  Show_Dialog("Le mot est tres court!");                          // oblige le respect de la longueur du mot

         return;
      }


for (int i = 0; ttv[i]!='\0'; i++) {

      if(ttv[i] != bien[i] && bien[i]!='-') {                             // oblige la resaisie d'une lettre deja bien place a sa bonne place

		  Show_Dialog("Le mot doit contenir les lettres deja bien place!!!");

         return;
      }
   }

if(ttv[0]==alea[0]){

		Test(alea,ttv,N_Max);

		bienPlace(alea, ttv, bien, mal, rest, N_Max); 					// Cette parti fait la gestion de couleur du mot saisi

		malPlace(alea, ttv, mal, rest, N_Max);
		
		Couleur(bien, mal, ttv, clr, N_Max);

		strcpy(data[i_tent],ttv);


	 switch(i_tent){													// Affiche la ligne par rapport a la tentative actuelle


		case 1: setColor(ttv,clr,N_Max,i_tent); 
		
		gtk_label_set_text (GTK_LABEL(T2), "Tentative 2"); 
		
		char nom[]= "Motus Lettres/00.png";

		nom[14] = alea[0];

		nom[15] = '2';

		gtk_image_set_from_file (GTK_IMAGE( L.i[0]), nom);

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE( L.i[10]), nom);

		break;

		case 2: setColor(ttv,clr,N_Max,i_tent); 

		gtk_label_set_text (GTK_LABEL(T3), "Tentative 3");
		
		strcpy(nom, "Motus Lettres/00.png");

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE(  L.i[20]), nom);

		break;

		case 3: setColor(ttv,clr,N_Max,i_tent); 

		gtk_label_set_text (GTK_LABEL(T4), "Tentative 4"); 
		
		strcpy(nom, "Motus Lettres/00.png");

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE(  L.i[30]), nom);

		break;

		case 4: setColor(ttv,clr,N_Max,i_tent); 

		gtk_label_set_text (GTK_LABEL(T5), "Tentative 5"); 
		
		strcpy(nom, "Motus Lettres/00.png");

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE( L.i[40]), nom);

		break;

		case 5: setColor(ttv,clr,N_Max,i_tent); 

		gtk_label_set_text (GTK_LABEL(T6), "Tentative 6"); 
		
		strcpy(nom, "Motus Lettres/00.png");

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE(  L.i[50]), nom);
		
		break;

		case 6: setColor(ttv,clr,N_Max,i_tent); 

		gtk_label_set_text (GTK_LABEL(T7), "Tentative 7"); 
		
		strcpy(nom, "Motus Lettres/00.png");

		nom[14] = ttv[0];

		if(clr[0]==0){

		nom[15] = '0';

		}else if(clr[0]==1){

			nom[15] = '1';

		}else if(clr[0]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE( L.i[60]), nom);
		
		break;

		case 7: setColor(ttv,clr,N_Max,i_tent); 

		Show_Dialog2("Vous avez perdu!\n\nLe mot etait:  ",alea);
		
		gtk_window_close(GTK_WINDOW(motus_window));
		
		on_V1_clicked(GTK_BUTTON(V1));

		break;

	}

	strcpy(ttv,"         ");

	strcpy(mal,"");														// Reinitialiser le variables

	for(int i=0; i<N_Max;i++){

		clr[i] = 0;

	}

	i_tent++;

	gtk_editable_delete_text (GTK_EDITABLE(Txt), 0, -1);

}
}
