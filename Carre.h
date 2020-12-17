#ifndef CARRE_H
#define CARRE_H

#include "Figure.h"

class Carre : public Figure {
    public: 
        int x;//Coordonnee x de la figure
        int y;//Coordonnee y de la figure
        int color;//Int compris entre 0 et 255 permettant de choisir la couleur de la figure allant du blanc au noir
        Carre(int x,int y,int color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig);   
        Carre(int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig);  
        ~Carre();

    private:
        std::vector<char> draw();
};

#endif