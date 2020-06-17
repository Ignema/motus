#OBJS specifies which files to compile as part of the project
OBJS = main.c

#CC specifies which compiler we're using
CC = gcc

#GTK_FLAGS specifies the additional compilation options we're using
# -W suppresses warnings
GTK_FLAGS = -Wno-format -Wno-deprecated-declarations -Wno-format-security -lm `pkg-config --cflags --libs gtk+-3.0` -export-dynamic -w

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = main

#This is the target that compiles our executable
all : main.o Alea.o Authentification.o Score.o Bouttons.o Entries.o Dialog.o Couleur.o  Creation_compte.o Gagner.o setColor.o Entrer.o
	$(CC) main.o Alea.o Authentification.o Couleur.o Creation_compte.o Entrer.o Gagner.o Score.o setColor.o Bouttons.o Dialog.o Entries.o $(GTK_FLAGS) -o $(OBJ_NAME)


Alea.o: Alea.c
	$(CC) -c Alea.c  


Authentification.o: Authentification.c
	$(CC) -c Authentification.c  

Couleur.o: Couleur.c
	$(CC) -c Couleur.c  

Creation_compte.o: Creation_compte.c
	$(CC) -c Creation_compte.c  

Entrer.o: Entrer.c 
	$(CC) -c Entrer.c  $(GTK_FLAGS)

Gagner.o: Gagner.c
	$(CC) -c Gagner.c $(GTK_FLAGS)

Score.o: Score.c
	$(CC) -c Score.c  $(GTK_FLAGS)

setColor.o: setColor.c
	$(CC) -c setColor.c  $(GTK_FLAGS)

Bouttons.o: Bouttons.c 
	$(CC) -c Bouttons.c  $(GTK_FLAGS)

Dialog.o: Dialog.c
	$(CC) -c Dialog.c  $(GTK_FLAGS)

Entries.o: Entries.c
	$(CC) -c Entries.c  $(GTK_FLAGS)


main.o: main.c Alea.h Authentification.h Couleur.h Creation_compte.h Entrer.h Gagner.h Score.h setColor.h Var_Global.h Bouttons.h Dialog.h Entries.h Gtk_Widgets.h
	$(CC) -c main.c $(GTK_FLAGS)

clear:
	rm *.o main
