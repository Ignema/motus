
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "Gtk_Widgets.h"
#include "Var_Global.h"
#include "Bouttons.h"


/*

Ce ficher contient les fonctions qui seront executees lorsqu'on clique sur un button particulier

La plupart des fonctions ci-dessous ferment la fenetre actuelle et ouvrent la fenetre suivante. (Ceux qui sont nommes bX)

Ceux qui sont nommes RX sont les bouttons de retour.

Les bouttons de validation VX verifient une condition avant de passer a la fenetre suivante

*/


int	on_b1_clicked (GtkButton *b) {

	gtk_window_close(GTK_WINDOW(main_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Jouer_window = GTK_WIDGET(gtk_builder_get_object(builder, "Jouer_window"));

	g_signal_connect(Jouer_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx2 = GTK_WIDGET(gtk_builder_get_object(builder, "fx2"));
	b5 = GTK_WIDGET(gtk_builder_get_object(builder, "b5"));
	b6 = GTK_WIDGET(gtk_builder_get_object(builder, "b6"));	
	R1 = GTK_WIDGET(gtk_builder_get_object(builder, "R1"));

	gtk_widget_show(Jouer_window);

	gtk_main();

	return EXIT_SUCCESS;

	}

int	on_b2_clicked (GtkButton *b) {

	gtk_window_close(GTK_WINDOW(main_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Aide_window = GTK_WIDGET(gtk_builder_get_object(builder, "Aide_window"));

	g_signal_connect(Aide_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx7 = GTK_WIDGET(gtk_builder_get_object(builder, "fx7"));
	Txtvw1 = GTK_WIDGET(gtk_builder_get_object(builder, "Txtvw1"));
	R5 = GTK_WIDGET(gtk_builder_get_object(builder, "R5"));

	gtk_widget_show(Aide_window);

	gtk_main();

	return EXIT_SUCCESS;

	}

int	on_b3_clicked (GtkButton *b) {

	gtk_window_close(GTK_WINDOW(main_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Class_window = GTK_WIDGET(gtk_builder_get_object(builder, "Class_window"));

	g_signal_connect(Class_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_builder_connect_signals(builder, NULL);

	fx8 = GTK_WIDGET(gtk_builder_get_object(builder, "fx8"));
	l9 = GTK_WIDGET(gtk_builder_get_object(builder, "l9"));
	R6 = GTK_WIDGET(gtk_builder_get_object(builder, "R6"));
	Table = GTK_WIDGET(gtk_builder_get_object(builder, "Table"));

	for(int i=1; i<11; i++){

		char p[] = "p1";

		char sc[] = "sc1";

		p[1] = '0' + i;

		sc[2] = '0' + i;

		C.p[i-1] = GTK_WIDGET(gtk_builder_get_object(builder, p));

		C.sc[i-1] = GTK_WIDGET(gtk_builder_get_object(builder, sc));

	}

	//Score_afficher();

	gtk_widget_show(Class_window);

	gtk_main();

	return EXIT_SUCCESS;

	}

void	on_b4_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(main_window));

	}

int	on_b5_clicked (GtkButton *b) {

	gtk_window_close(GTK_WINDOW(Jouer_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Se_connecter_window = GTK_WIDGET(gtk_builder_get_object(builder, "Se_connecter_window"));

	g_signal_connect(Se_connecter_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx3 = GTK_WIDGET(gtk_builder_get_object(builder, "fx3"));
	l31 = GTK_WIDGET(gtk_builder_get_object(builder, "l31"));
	l32 = GTK_WIDGET(gtk_builder_get_object(builder, "l32"));
	R2 = GTK_WIDGET(gtk_builder_get_object(builder, "R2"));
	E1 = GTK_WIDGET(gtk_builder_get_object(builder, "E1"));
	E2 = GTK_WIDGET(gtk_builder_get_object(builder, "E2"));
	V1 = GTK_WIDGET(gtk_builder_get_object(builder, "V1"));

	gtk_widget_show(Se_connecter_window);

	gtk_main();

	return EXIT_SUCCESS;

	}

int	on_b6_clicked (GtkButton *b) {

	gtk_window_close(GTK_WINDOW(Jouer_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Creer_window = GTK_WIDGET(gtk_builder_get_object(builder, "Creer_window"));

	g_signal_connect(Creer_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx4 = GTK_WIDGET(gtk_builder_get_object(builder, "fx4"));
	l2 = GTK_WIDGET(gtk_builder_get_object(builder, "l2"));
	l3 = GTK_WIDGET(gtk_builder_get_object(builder, "l3"));
	l4 = GTK_WIDGET(gtk_builder_get_object(builder, "l4"));
	R3 = GTK_WIDGET(gtk_builder_get_object(builder, "R3"));
	E3 = GTK_WIDGET(gtk_builder_get_object(builder, "E3"));
	E4 = GTK_WIDGET(gtk_builder_get_object(builder, "E4"));
	E5 = GTK_WIDGET(gtk_builder_get_object(builder, "E5"));
	V2 = GTK_WIDGET(gtk_builder_get_object(builder, "V2"));

	gtk_widget_show(Creer_window);

	gtk_main();

	return EXIT_SUCCESS;

	}

int	on_b7_clicked (GtkButton *b){


		gtk_window_close(GTK_WINDOW(Apres_jeu_window));


		on_V1_clicked(GTK_BUTTON(b7));


}

int	on_b9_clicked (GtkButton *b){


		gtk_window_close(GTK_WINDOW(Apres_jeu_window));


		main(0,NULL);


}

int	on_b10_clicked (GtkButton *b){


		gtk_window_close(GTK_WINDOW(Apres_jeu_window));


}

int	on_V1_clicked (GtkButton *b) {

	if(check(user,pwd)==1){														// Verifie si le nom de l'utilisateur et son mot de passe sont valides

	gtk_window_close(GTK_WINDOW(Se_connecter_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Choix_window = GTK_WIDGET(gtk_builder_get_object(builder, "Choix_window"));

	g_signal_connect(Choix_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx5 = GTK_WIDGET(gtk_builder_get_object(builder, "fx5"));
	l5 = GTK_WIDGET(gtk_builder_get_object(builder, "l5"));
	l6 = GTK_WIDGET(gtk_builder_get_object(builder, "l6"));
	l7 = GTK_WIDGET(gtk_builder_get_object(builder, "l7"));
	l8 = GTK_WIDGET(gtk_builder_get_object(builder, "l8"));
	R4 = GTK_WIDGET(gtk_builder_get_object(builder, "R4"));
	sp1 = GTK_WIDGET(gtk_builder_get_object(builder, "sp1"));
	sp2 = GTK_WIDGET(gtk_builder_get_object(builder, "sp2"));
	V3 = GTK_WIDGET(gtk_builder_get_object(builder, "V3"));
	combo = GTK_WIDGET(gtk_builder_get_object(builder, "combo"));
	Og = GTK_WIDGET(gtk_builder_get_object(builder, "Og"));

	liststore1 = GTK_LIST_STORE(gtk_builder_get_object(builder, "liststore1"));
	adjustment1 = GTK_ADJUSTMENT(gtk_builder_get_object(builder, "adjustment1"));
	adjustment2 = GTK_ADJUSTMENT(gtk_builder_get_object(builder, "adjustment2"));

	gtk_widget_show(Choix_window);

	char tmp[30];															 

	sprintf(tmp, "Score: %d", score(user));										

	gtk_label_set_text (GTK_LABEL(l8), (const gchar *) tmp);					// Afficher le score correspendant a chaque utilisateur obtenu par score()

	for(int i=0; i<7; i++){

		strcpy(data[i],"temp");					// Initialisation du tableau qui stocke les tentatives de l'utilisateur

	}

	gtk_main();

	return EXIT_SUCCESS;

	}else{

		Show_Dialog("Authentification impossible.");

	}

	}

int	on_V2_clicked (GtkButton *b) {

	if(strcmp(new_pwd,conf)==0 && strcmp(new_pwd,"")!=0 && Dupli(new_user)==0){  // Creation d'un compte

		save(new_user,new_pwd);

	on_R3_clicked(GTK_BUTTON(V2));

	}

}

int	on_V3_clicked (GtkButton *b) {

	N_Max = gtk_spin_button_get_value (GTK_SPIN_BUTTON(sp2));

	Tr = gtk_spin_button_get_value (GTK_SPIN_BUTTON(sp1));

	if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(Og))){

		Orthographe = 1;

	}else{

		Orthographe = 0;

	}

	gtk_window_close(GTK_WINDOW(Choix_window));

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	motus_window = GTK_WIDGET(gtk_builder_get_object(builder, "motus_window"));

	g_signal_connect(motus_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_builder_connect_signals(builder, NULL);

	fx9 = GTK_WIDGET(gtk_builder_get_object(builder, "fx9"));
	Txt = GTK_WIDGET(gtk_builder_get_object(builder, "Txt"));
	bt1 = GTK_WIDGET(gtk_builder_get_object(builder, "bt1"));
	Grid = GTK_WIDGET(gtk_builder_get_object(builder, "Grid"));

	T1 = GTK_WIDGET(gtk_builder_get_object(builder, "T1"));
	T2 = GTK_WIDGET(gtk_builder_get_object(builder, "T2"));
	T3 = GTK_WIDGET(gtk_builder_get_object(builder, "T3"));
	T4 = GTK_WIDGET(gtk_builder_get_object(builder, "T4"));
	T5 = GTK_WIDGET(gtk_builder_get_object(builder, "T5"));
	T6 = GTK_WIDGET(gtk_builder_get_object(builder, "T6"));
	T7 = GTK_WIDGET(gtk_builder_get_object(builder, "T7"));
	TC = GTK_WIDGET(gtk_builder_get_object(builder, "TC"));

	for(int i=0; i<7; i++){

		for(int j=0; j<10; j++){

		char path[]= "0 0";

		path[0] = '0' + i;

		path[2] = '0' + j;

		L.i[i*10+j]= GTK_WIDGET(gtk_builder_get_object(builder, path)); 	// Initialisation des images en variant la chaine de caracteres path

		}

	}

	gtk_widget_show(motus_window);

	gtk_entry_set_max_length (GTK_ENTRY(Txt),N_Max);	                     // Impose la longueur maximale choisie du mot saisi

	ChoixAlea(&alea,N_Max);													// Choix du mot aleatoire pour le jeu
	
	bien = (char *) realloc(bien,N_Max*sizeof(char));

	mal = (char *) realloc(mal,N_Max*sizeof(char));							// allocation memoire

	rest = (char *) realloc(rest,N_Max*sizeof(char));

	ttv = (char *) realloc(ttv,N_Max*sizeof(char));

	clr = (int *) realloc(clr,N_Max*sizeof(int));

	for(int i=0; i<N_Max; i++){

		bien[i] = '-';										// Initialiase le tableau bien par des tirets

	}

	for (int i = 0; alea[i]!='\0'; i++) {
      if(alea[i] >= 'a' && alea[i] <= 'z') {
         alea[i] = alea[i] - 32;							// Rend le mot aleatoire majuscule
      }
   }

    strcpy(rest,alea);

	i_tent = 1;												// On se place a la premiere tentative

	char nom[]= "Motus Lettres/00.png";

	nom[14] = alea[0];

	gtk_image_set_from_file (GTK_IMAGE(L.i[0]), nom);		// On affiche la premiere lettre du mot a chercher

	gtk_main();

	return EXIT_SUCCESS;

}

void	on_bt1_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(motus_window));

		on_V1_clicked(GTK_BUTTON(bt1));

	}

int	on_bt2_clicked () {

	gtk_window_close(GTK_WINDOW(motus_window));

	
	for(int i=0;i<10;i++){

		clr[i] = 0;

	}

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Apres_jeu_window = GTK_WIDGET(gtk_builder_get_object(builder, "Apres_jeu_window"));

	g_signal_connect(Apres_jeu_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fx6 = GTK_WIDGET(gtk_builder_get_object(builder, "fx6"));
	b7 = GTK_WIDGET(gtk_builder_get_object(builder, "b7"));
	b9 = GTK_WIDGET(gtk_builder_get_object(builder, "b9"));
	b10 = GTK_WIDGET(gtk_builder_get_object(builder, "b10"));

	gtk_widget_show(Apres_jeu_window);

	gtk_main();

	return EXIT_SUCCESS;

	}



void	on_R1_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Jouer_window));

		main(0,NULL);

	}


void	on_R2_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Se_connecter_window));

		on_b1_clicked(GTK_BUTTON(R2));

		

	}

void	on_R3_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Creer_window));

		on_b1_clicked(GTK_BUTTON(R3));


	}

void	on_R4_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Choix_window));

		on_b5_clicked(GTK_BUTTON(R4));

	}

void	on_R5_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Aide_window));

		main(0,NULL);

	}

void	on_R6_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Class_window));

		main(0,NULL);

	}

void	on_Bt_clicked (GtkButton *b) {

		gtk_window_close(GTK_WINDOW(Dialog));

	}