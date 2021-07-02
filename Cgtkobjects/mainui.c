/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include"gtk/gtk.h"
#include"main.h"
#include"resources.h"

/*Function declarations*/
void combEntrystylez(Csstylez*, GtkWidget*);

/*Log-in main UI*/
GtkWidget* retUsrlog()
{
	GtkWidget *parentcont, *logparent, *logmage, *fullnames, *logpassword,
			*activationcode, *loginbtn;

	Csstylez *usrlogstylez = createstyles();

	/*Log in frame*/
	logparent = gtk_grid_new();
	gtk_widget_set_focus_on_click(logparent, TRUE);
	gtk_widget_set_name(logparent, "logparent");
	gtk_widget_set_halign(logparent, GTK_ALIGN_CENTER);
	gtk_grid_set_column_spacing(GTK_GRID(logparent), 12);
	gtk_grid_set_row_spacing(GTK_GRID(logparent), 40);

	/*Image*/
	logmage = gtk_image_new_from_file("Images/loginimage.png");
	gtk_widget_set_name(logmage, "logmage");
	gtk_widget_set_can_focus(logmage, TRUE);


	/*User full names*/
	char *flnames = "Username";
	fullnames = gtk_entry_new();
	gtk_widget_set_name(fullnames, "loginame");
	gtk_widget_set_halign(fullnames, GTK_ALIGN_CENTER);
	gtk_widget_set_valign(fullnames, GTK_ALIGN_CENTER);
	gtk_entry_set_placeholder_text(GTK_ENTRY(fullnames), flnames);
	combEntrystylez(usrlogstylez, fullnames);

	/*User password*/
	char *passcode = "Password";
	logpassword = gtk_entry_new();
	gtk_widget_set_name(logpassword, "logpasscode");
	gtk_widget_set_halign(logpassword, GTK_ALIGN_CENTER);
	gtk_widget_set_valign(logpassword, GTK_ALIGN_CENTER);
	gtk_entry_set_placeholder_text(GTK_ENTRY(logpassword), passcode);
	combEntrystylez(usrlogstylez, logpassword);

	/*Activation code*/
	char *activecode = "Activation code";
	activationcode = gtk_entry_new();
	gtk_widget_set_name(activationcode, "logactivation");
	gtk_widget_set_halign(activationcode, GTK_ALIGN_CENTER);
	gtk_widget_set_valign(activationcode, GTK_ALIGN_CENTER);
	gtk_entry_set_placeholder_text(GTK_ENTRY(activationcode), activecode);
	combEntrystylez(usrlogstylez, activationcode);

	/*Assign user*/
	char *lblb = "Activate";
	loginbtn = gtk_button_new_with_label(lblb);
	gtk_widget_set_name(loginbtn, "loginbtn");
	gtk_widget_set_halign(loginbtn, GTK_ALIGN_CENTER);
	gtk_widget_set_valign(loginbtn, GTK_ALIGN_CENTER);
	usrlogstylez->fontSize(&loginbtn, 1);
	usrlogstylez->fontColor(&loginbtn, "black");
	usrlogstylez->borderadius(&loginbtn, 14);
	usrlogstylez->paddingBottom(&loginbtn, 3);
	usrlogstylez->paddingTop(&loginbtn, 3);
	usrlogstylez->paddingLeft(&loginbtn, 8);
	usrlogstylez->paddingRight(&loginbtn, 8);
	usrlogstylez->minWidth(&loginbtn, 100);
	usrlogstylez->fontSize(&loginbtn, 1);
	usrlogstylez->fontColor(&loginbtn, "black");
	usrlogstylez->backgroundColor(&loginbtn, "#cccccc");
	usrlogstylez->boxShadow(&loginbtn, "inset 0px 0px 2px 2px rgba(0, 0, 0,0.1)");

	/*Add children*/
	gtk_grid_attach(GTK_GRID(logparent), logmage, 0, 0, 4, 1);
	gtk_grid_attach(GTK_GRID(logparent), fullnames, 0, 1, 4, 1);
	gtk_grid_attach(GTK_GRID(logparent), logpassword, 0, 2, 4, 1);
	gtk_grid_attach(GTK_GRID(logparent), activationcode, 0, 3, 4, 1);
	gtk_grid_attach(GTK_GRID(logparent), loginbtn, 3, 4, 1, 1);

	/*UI Parent box*/
	parentcont = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
	gtk_widget_set_name(parentcont, "usrlogcont");
	usrlogstylez->backgroundColor(&parentcont, "aliceblue");
	usrlogstylez->backgroundImage(&parentcont, "Images/defaulta.jpg");
	usrlogstylez->backgroundRepeat(&parentcont, "no-repeat");
	usrlogstylez->backgroundPosition(&parentcont, "center");
	usrlogstylez->backgroundSize(&parentcont, "cover");

	/*Add elements to parent*/
	gtk_box_pack_start(GTK_BOX(parentcont), logparent, FALSE, FALSE, 150);
	usrlogstylez->padding(&logparent, 20);
	usrlogstylez->borderadius(&logparent, 12);
	usrlogstylez->backgroundColor(&logparent, "rgba(0, 0, 0, 0.5)");
	usrlogstylez->boxShadow(&logparent, "inset 0 0 12px rgba(255, 255, 255, 0.6)");

	destroystylez(usrlogstylez);

	return parentcont;
}

/*Combined stylez*/
void combEntrystylez(Csstylez *usrlogstylez, GtkWidget *entrybox)
{
	usrlogstylez->minWidth(&entrybox, 450);
	usrlogstylez->fontColor(&entrybox, "black");
	usrlogstylez->fontSize(&entrybox, 1);
	usrlogstylez->paddingLeft(&entrybox, 12);
	usrlogstylez->paddingRight(&entrybox, 12);
	usrlogstylez->paddingTop(&entrybox, 5);
	usrlogstylez->paddingBottom(&entrybox, 5);
	usrlogstylez->borderadius(&entrybox, 15);
	usrlogstylez->boxShadow(&entrybox, "inset 2px 2px 5px rgba(0,0,0,0.8)");

}