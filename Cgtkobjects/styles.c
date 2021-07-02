/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<stdio.h>
#include<stdlib.h>
#include"resources.h"

Csstylez *createstyles();
void destroystylez(Csstylez*);

void setFontsize(GtkWidget**, int);
void setFontcolor(GtkWidget**, char*);

void genFlipstyle(GtkWidget**, char*, char*);
void setCharvar(GtkWidget**, char*, char*);
void setIntvar(GtkWidget**, char*, int);

void setMargin(GtkWidget**, int);
void setMargintop(GtkWidget**, int);
void setMarginbottom(GtkWidget**, int);
void setMarginleft(GtkWidget**, int);
void setMarginright(GtkWidget**, int);

void setBackgroundcolor(GtkWidget**, char*);
void setBackgroundoimage(GtkWidget**, char*);
void setBackgroundrepeat(GtkWidget**, char*);
void setBackgroundposition(GtkWidget**, char*);
void setBackgroundsize(GtkWidget**, char*);

void setPadding(GtkWidget**, int);
void setpaddingTop(GtkWidget**, int);
void setpaddingBottom(GtkWidget**, int);
void setpaddingLeft(GtkWidget**, int);
void setpaddingRight(GtkWidget**, int);

void setbradius(GtkWidget**, int);
void setbradiusTopL(GtkWidget**, int);
void setbradiusTopR(GtkWidget**, int);
void setbradiusBottomR(GtkWidget**, int);
void setbradiusBottomL(GtkWidget**, int);

void setWidth(GtkWidget**, int);
void setminWidth(GtkWidget**, int);
void setboxShadow(GtkWidget**, char*);

/* Constructor */
Csstylez *createstyles()
{
	Csstylez *stylez = calloc(1, sizeof (*stylez));
	if (stylez != 0) {
		stylez->fontSize = &setFontsize;
		stylez->fontColor = &setFontcolor;

		stylez->margin = &setMargin;
		stylez->marginTop = &setMargintop;
		stylez->marginBottom = &setMarginbottom;
		stylez->marginLeft = &setMarginleft;
		stylez->marginRight = &setMarginright;

		stylez->backgroundColor = &setBackgroundcolor;
		stylez->backgroundImage = &setBackgroundoimage;
		stylez->backgroundRepeat = &setBackgroundrepeat;
		stylez->backgroundPosition = &setBackgroundposition;
		stylez->backgroundSize = &setBackgroundsize;

		stylez->padding = &setPadding;
		stylez->paddingTop = &setpaddingTop;
		stylez->paddingBottom = &setpaddingBottom;
		stylez->paddingLeft = &setpaddingLeft;
		stylez->paddingRight = &setpaddingRight;

		stylez->borderadius = &setbradius;
		stylez->borderadiusTopL = &setbradiusTopL;
		stylez->borderadiusTopR = &setbradiusTopR;
		stylez->borderadiusBottomR = &setbradiusBottomR;
		stylez->borderadiusRottomL = &setbradiusBottomL;

		stylez->width = &setWidth;
		stylez->minWidth = &setminWidth;
		stylez->boxShadow = &setboxShadow;

	}

	return stylez;
}

/* Destructor */
void destroystylez(Csstylez *stylez)
{
	if (stylez != NULL) {
		free(stylez);
		stylez = NULL;
	}
}

/*Font size*/
void setFontsize(GtkWidget **widget, int fonsize)
{
	char *stylestr = "#%s {font-size: %sem;}";
	setIntvar(widget, stylestr, fonsize);


}

/*Font color*/
void setFontcolor(GtkWidget **widget, char *color)
{
	char *stylestr = "#%s {color: %s;}";
	setCharvar(widget, stylestr, color);


}

/*Margins*/
void setMargin(GtkWidget **widget, int margin)
{
	char *stylestr = "#%s {margin: %spx;}";
	setIntvar(widget, stylestr, margin);


}

void setMargintop(GtkWidget **widget, int margin)
{
	char *stylestr = "#%s {margin-top: %spx;}";
	setIntvar(widget, stylestr, margin);


}

void setMarginbottom(GtkWidget **widget, int margin)
{
	char *stylestr = "#%s {margin-bottom: %spx;}";
	setIntvar(widget, stylestr, margin);


}

void setMarginleft(GtkWidget **widget, int margin)
{
	char *stylestr = "#%s {margin-left: %spx;}";
	setIntvar(widget, stylestr, margin);


}

void setMarginright(GtkWidget **widget, int margin)
{
	char *stylestr = "#%s {margin-right: %spx;}";
	setIntvar(widget, stylestr, margin);


}

/*Background color*/
void setBackgroundcolor(GtkWidget **widget, char *color)
{
	char *stylestr = "#%s {background-color: %s;}";
	setCharvar(widget, stylestr, color);


}

/*Background image*/
void setBackgroundoimage(GtkWidget **widget, char *image)
{
	char *stylestr = "#%s {background-image: url('%s');}";
	setCharvar(widget, stylestr, image);


}

/*Background repeat*/
void setBackgroundrepeat(GtkWidget **widget, char *repeat)
{
	char *stylestr = "#%s {background-repeat: %s;}";
	setCharvar(widget, stylestr, repeat);


}

/*Background position*/
void setBackgroundposition(GtkWidget **widget, char *position)
{
	char *stylestr = "#%s {background-position: %s;}";
	setCharvar(widget, stylestr, position);


}

/*Background size*/
void setBackgroundsize(GtkWidget **widget, char *size)
{
	char *stylestr = "#%s {background-size: %s;}";
	setCharvar(widget, stylestr, size);


}

/*Padding*/
void setPadding(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {padding: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setpaddingTop(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {padding-top: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setpaddingBottom(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {padding-bottom: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setpaddingLeft(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {padding-left: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setpaddingRight(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {padding-right: %spx;}";
	setIntvar(widget, stylestr, unit);


}

/*Border radius*/
void setbradius(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {border-radius: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setbradiusTopL(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {border-top-left-radius: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setbradiusTopR(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {border-top-right-radius: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setbradiusBottomR(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {border-bottom-right-radius: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setbradiusBottomL(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {border-bottom-left-radius: %spx;}";
	setIntvar(widget, stylestr, unit);


}

/*Width*/
void setWidth(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {width: %spx;}";
	setIntvar(widget, stylestr, unit);


}

void setminWidth(GtkWidget **widget, int unit)
{
	char *stylestr = "#%s {min-width: %spx;}";
	setIntvar(widget, stylestr, unit);


}

/*Box shadow*/
void setboxShadow(GtkWidget **widget, char *metrics)
{
	char *stylestr = "#%s {box-shadow: %s;}";
	setCharvar(widget, stylestr, metrics);


}

/*General functions*/
void setIntvar(GtkWidget **widget, char *stylestr, int manipvar)
{
	int fnmem;

	fnmem = (intlen(manipvar) + 1) * sizeof (char*);
	char *fonsizestr = calloc(1, fnmem);
	memcheck(fonsizestr);
	snprintf(fonsizestr, fnmem, "%i", manipvar);

	genFlipstyle(widget, stylestr, fonsizestr);

}

void setCharvar(GtkWidget **widget, char *stylestr, char *manipvar)
{
	int fnmem;

	fnmem = (strlen(manipvar) + 1) * sizeof (char*);
	char *fonsizestr = calloc(1, fnmem);
	memcheck(fonsizestr);
	strncpy(fonsizestr, manipvar, fnmem);

	genFlipstyle(widget, stylestr, fonsizestr);

}

void genFlipstyle(GtkWidget **gwidget, char *stylestr, char *styleval)
{
	GtkStyleContext *context;
	GtkCssProvider *provider;
	int memsize;

	const char *widgetnme = gtk_widget_get_name(*gwidget);

	memsize = (strlen(widgetnme) + strlen(styleval) + strlen(stylestr) + 1) * sizeof (char*);
	char *fonprop = calloc(1, memsize);
	memcheck(fonprop);
	snprintf(fonprop, memsize, stylestr, widgetnme, styleval);

	provider = gtk_css_provider_new();
	gtk_css_provider_load_from_data(provider, fonprop, -1, NULL);
	context = gtk_widget_get_style_context(*gwidget);
	gtk_style_context_add_provider(context, GTK_STYLE_PROVIDER(provider),
								GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

	free(fonprop);
	free(styleval);

	fonprop = NULL;
	styleval = NULL;
}