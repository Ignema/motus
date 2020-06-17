
#include <gtk/gtk.h>
#include "Var_Global.h"

/*

Ce fichier contient les fonctions qui enregistrent les entrees textuelles de l'utilisateur

*/

void	on_E1_changed (GtkEntry *e){

	sprintf(user, "%s", gtk_entry_get_text(e));

}

void	on_E2_changed (GtkEntry *e){

	sprintf(pwd, "%s", gtk_entry_get_text(e));

}

void	on_E3_changed (GtkEntry *e){

	sprintf(new_user, "%s", gtk_entry_get_text(e));

}

void	on_E4_changed (GtkEntry *e){

	sprintf(new_pwd, "%s", gtk_entry_get_text(e));

}

void	on_E5_changed (GtkEntry *e){

	sprintf(conf, "%s", gtk_entry_get_text(e));

}



void	on_Txt_changed (GtkEntry *e){

	sprintf(ttv, "%s", gtk_entry_get_text(e));

}
