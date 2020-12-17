#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"



class Rectangle : public Figure {
    public :
        int x;//Coordonnee x de la figure
        int y;//Coordonnee y de la figure
        int color;//Int compris entre 0 et 255 permettant de choisir la couleur de la figure allant du blanc au noir
        Rectangle(int x,int y,int color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig);
        Rectangle(int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig);   
        ~Rectangle(){} 
    private:
    std::vector<char> draw();

};

#endif