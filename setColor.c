
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "Var_Global.h"


/*

Cette fonction est responsable d'afficher les lettres coloriees sur l'interface.

*/

void setColor(char ttv[], int clr[], int N_Max, int i_tent){

    char nom[]= "Motus Lettres/00.png";

    for(int i=1; i<N_Max; i++){

        nom[14] = ttv[i];

		if(clr[i]==0){

		nom[15] = '0';

		}else if(clr[i]==1){

			nom[15] = '1';

		}else if(clr[i]==2){

			nom[15] = '2';

		}

		gtk_image_set_from_file (GTK_IMAGE(L.i[ i+(i_tent-1)*10 ]), nom);        

    }

}
