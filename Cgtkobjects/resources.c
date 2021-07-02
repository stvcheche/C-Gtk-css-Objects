/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>
#include<stdlib.h>
#include<gtk/gtk.h>
#include <gtk/gtktypes.h>

/*Declarations*/
int intlen(int);
void ckFonts(GtkWidget**, int, char*);
int memcheck(char*);

/*Int length*/
int intlen(int dec)
{
	int len;

	int printsize = 50;
	char *arrecspoint;
	arrecspoint = calloc(printsize, sizeof (char*));
	memcheck(arrecspoint);

	snprintf(arrecspoint, printsize * sizeof (char*), "%d", dec);

	len = strlen(arrecspoint);
	free(arrecspoint);
	arrecspoint = NULL;

	return len;

}

/*Memory check*/
int memcheck(char *nwpointer)
{
	if (nwpointer == NULL) {
		perror("memory allocation failed");
		return EXIT_FAILURE;

	}
}
