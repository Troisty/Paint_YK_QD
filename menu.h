#ifndef MENU_H
#define MENU_H

#include "Drawing.h"

const int width = 500;
const int height = 400;

class Menu{
    
    public :
        Menu(){}
        ~Menu(){}
        void run(); //Lance le menu qui permet d'utiliser le programme
        void clearConsole(); //Clear la console, ce qui permet d'avoir un terminal propre

        bool isFull();
        
};

#endif