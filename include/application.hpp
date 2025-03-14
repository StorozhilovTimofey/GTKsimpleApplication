#pragma once

#include <gtk/gtk.h>

class Application
{
public:
    Application();
    
    void run(int argc, char** argv);
private:
    static void activate(GtkApplication *app, gpointer user_data);
};

