#include <gtk/gtk.h>

#include "Var_Global.h"

#include "Gtk_Widgets.h"

#include "Bouttons.h"
#include "Entries.h"
#include "Dialog.h"

#include "Entrer.h"

#include "Alea.h"
#include "Authentification.h"
#include "Couleur.h"
#include "Creation_compte.h"
#include "Gagner.h"
#include "Score.h"
#include "setColor.h"


int main(int argc, char *argv[]) {

	gtk_init(&argc, &argv);

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	main_window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));

	g_signal_connect(main_window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_builder_connect_signals(builder, NULL);

	fx1 = GTK_WIDGET(gtk_builder_get_object(builder, "fx1"));
	b1 = GTK_WIDGET(gtk_builder_get_object(builder, "b1"));
	b2 = GTK_WIDGET(gtk_builder_get_object(builder, "b2"));
	b3 = GTK_WIDGET(gtk_builder_get_object(builder, "b3"));
	b4 = GTK_WIDGET(gtk_builder_get_object(builder, "b4"));
	l1 = GTK_WIDGET(gtk_builder_get_object(builder, "l1"));

	gtk_widget_show(main_window);

	gtk_main();

	return EXIT_SUCCESS;

	}










