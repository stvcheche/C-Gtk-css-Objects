/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jacob
 *
 * Created on July 2, 2021, 1:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include"main.h"


/*
 * 
 */

/*Initialize functions*/
static void destroy(GtkWidget*, gpointer);
static gboolean delete_event(GtkWidget*, GdkEvent*, gpointer);

/*Main function*/
int main(int argc, char** argv)
{
	/*Declarations*/
	GtkWidget *mnwindow, *usrlogui;

	/*Initialize library*/
	gtk_init(&argc, &argv);

	/*Create window*/
	mnwindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(mnwindow), "Cgtkcss Objects");
	gtk_window_set_resizable(GTK_WINDOW(mnwindow), TRUE);
	gtk_window_set_position(GTK_WINDOW(mnwindow), GTK_WIN_POS_CENTER);

	/*Window size*/
	gtk_window_set_default_size(GTK_WINDOW(mnwindow), 750, 600);

	g_signal_connect(G_OBJECT(mnwindow), "destroy", G_CALLBACK(destroy), NULL);
	g_signal_connect(G_OBJECT(mnwindow), "delete_event", G_CALLBACK(delete_event), NULL);

	/*Add UI*/
	usrlogui = retUsrlog();
	gtk_container_add(GTK_CONTAINER(mnwindow), usrlogui);


	/*Show window*/
	gtk_widget_show_all(mnwindow);

	/*Main loop*/
	gtk_main();

	return (EXIT_SUCCESS);
}

/*Destroy window on close*/
static void destroy(GtkWidget *window, gpointer data)
{
	gtk_main_quit();

}

/*Destroy widget*/
static gboolean delete_event(GtkWidget *window, GdkEvent *event, gpointer data)
{
	return FALSE;
}


