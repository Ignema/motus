
#include <gtk/gtk.h>

#include "Gtk_Widgets.h"

// Cette fonction affiche une fenetre de type dialog contenant un text variable

int	Show_Dialog (const gchar *txt) {

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Dialog = GTK_WIDGET(gtk_builder_get_object(builder, "Dialog"));

	g_signal_connect(Dialog, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_builder_connect_signals(builder, NULL);

	Box = GTK_WIDGET(gtk_builder_get_object(builder, "Box"));
	ChampBt = GTK_WIDGET(gtk_builder_get_object(builder, "ChampBt"));
	Bt = GTK_WIDGET(gtk_builder_get_object(builder, "Bt"));
	Info = GTK_WIDGET(gtk_builder_get_object(builder, "Info"));

	gtk_widget_show(Dialog);

	gtk_label_set_text(GTK_LABEL(Info),txt);

	gtk_main();

	return EXIT_SUCCESS;

	}

int	Show_Dialog2 (const gchar *txt, char *str) {

	builder = gtk_builder_new_from_file ("Hafsa.glade");
 
	Dialog = GTK_WIDGET(gtk_builder_get_object(builder, "Dialog"));

	g_signal_connect(Dialog, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_builder_connect_signals(builder, NULL);

	Box = GTK_WIDGET(gtk_builder_get_object(builder, "Box"));
	ChampBt = GTK_WIDGET(gtk_builder_get_object(builder, "ChampBt"));
	Bt = GTK_WIDGET(gtk_builder_get_object(builder, "Bt"));
	Info = GTK_WIDGET(gtk_builder_get_object(builder, "Info"));

	gtk_widget_show(Dialog);

	char tmp[50];

	sprintf(tmp, "%s %s", txt, str);

	gtk_label_set_text(GTK_LABEL(Info),tmp);

	gtk_main();

	return EXIT_SUCCESS;

	}