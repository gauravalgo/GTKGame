#include <gtk/gtk.h>

/**
 * GtkFixed用于布置子构件在一个固定的位置和设定
 * 固定的大小。这种构建并不是属于自动的布局关系器。
 */

 /**
  * 在这个例子中，我们将三个button放到固定的坐标上
  * 即使我们尝试去改变窗口的大小的时候，其中的按钮
  * 的坐标是不变的。
  */

 int main(int argc,char *argv)
 {
    GtkWidget *window;
    GtkWidget *fixed;

    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *button3;

    gtk_init(&argc,&argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window),"GtkFixed");
    gtk_window_set_default_size(GTK_WINDOW(window),290,200);
    gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);

    fixed = gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window),fixed);

    button1 = gtk_button_new_with_label("Button");
    gtk_fixed_put(GTK_FIXED(fixed),button1,150,50);
    gtk_widget_set_size_request(button1,80,35);

    button2 = gtk_button_new_with_label("Button");
    gtk_fixed_put(GTK_FIXED(fixed),button2,15,15);
    gtk_widget_set_size_request(button2,80,35);

    button3 = gtk_button_new_with_label("Button");
    gtk_fixed_put(GTK_FIXED(fixed),button3,100,100);
    gtk_widget_set_size_request(button3,80,35);

    g_signal_connect_swapped(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit),NULL);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
 }





























