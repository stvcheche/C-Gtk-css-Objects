/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   resources.h
 * Author: jacob
 *
 * Created on July 2, 2021, 1:28 PM
 */

#ifndef RESOURCES_H
#define RESOURCES_H
#include<gtk/gtk.h>

/*Functions*/
int memcheck(char*);
int intlen(int);

/*Structure*/
typedef struct Csstylez {
    void (*fontSize)(GtkWidget**, int);
    void (*fontColor)(GtkWidget**, char*);

    void (*margin)(GtkWidget**, int);
    void (*marginTop)(GtkWidget**, int);
    void (*marginBottom)(GtkWidget**, int);
    void (*marginLeft)(GtkWidget**, int);
    void (*marginRight)(GtkWidget**, int);

    void (*backgroundColor)(GtkWidget**, char*);
    void (*backgroundImage)(GtkWidget**, char*);
    void (*backgroundRepeat)(GtkWidget**, char*);
    void (*backgroundPosition)(GtkWidget**, char*);
    void (*backgroundSize)(GtkWidget**, char*);

    void (*padding)(GtkWidget**, int);
    void (*paddingTop)(GtkWidget**, int);
    void (*paddingBottom)(GtkWidget**, int);
    void (*paddingLeft)(GtkWidget**, int);
    void (*paddingRight)(GtkWidget**, int);

    void (*borderadius)(GtkWidget**, int);
    void (*borderadiusTopL)(GtkWidget**, int);
    void (*borderadiusTopR)(GtkWidget**, int);
    void (*borderadiusBottomR)(GtkWidget**, int);
    void (*borderadiusRottomL)(GtkWidget**, int);

    void (*width)(GtkWidget**, int);
    void (*minWidth)(GtkWidget**, int);
    void (*boxShadow)(GtkWidget**, char*);

} Csstylez;

/* Constructor */
Csstylez *createstyles();

/* Destructor */
void destroystylez(Csstylez *stylez);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* RESOURCES_H */

