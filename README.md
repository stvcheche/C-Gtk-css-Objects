# C Gtk Css Objects
These C objects make it possible to set CSS styles on GTK UI elements inline. This is very crucial when setting calculated dimensions for example setting the font sizes based on the screen resolution which is not possible using pure css style sheet. These objects can be extended to include and desired css style tags.
<br>


<h3>Demo window</h3>

![Demo window](https://github.com/stvcheche/CGtkcssObjects/blob/main/cgtkcssobjects.png)


<h3>Application example</h3>
GtkWidget *loginbtn;<br><br>
      
**Initialize object**     
Csstylez *usrlogstylez = createstyles();<br>

**Create and set button style**<br>
	char *lblb = "Activate";<br>
	loginbtn = gtk_button_new_with_label(lblb);<br>
	gtk_widget_set_name(loginbtn, "loginbtn");<br>
	gtk_widget_set_halign(loginbtn, GTK_ALIGN_CENTER);<br>
	gtk_widget_set_valign(loginbtn, GTK_ALIGN_CENTER);<br>
	usrlogstylez->fontSize(&loginbtn, 1);<br>
	usrlogstylez->fontColor(&loginbtn, "black");<br>
	usrlogstylez->borderadius(&loginbtn, 14);<br>
	usrlogstylez->paddingBottom(&loginbtn, 3);<br>
	usrlogstylez->paddingTop(&loginbtn, 3);<br>
	usrlogstylez->paddingLeft(&loginbtn, 8);<br>
	usrlogstylez->paddingRight(&loginbtn, 8);<br>
	usrlogstylez->minWidth(&loginbtn, 100);<br>
	usrlogstylez->fontSize(&loginbtn, 1);<br>
	usrlogstylez->fontColor(&loginbtn, "black");<br>
	usrlogstylez->backgroundColor(&loginbtn, "#cccccc");<br>
	usrlogstylez->boxShadow(&loginbtn, "inset 0px 0px 2px 2px rgba(0, 0, 0,0.1)");<br>
  
  **Destry object**<br>
  destroystylez(usrlogstylez);<br>
