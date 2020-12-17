#ifndef CROIX_H
#define CROIX_H

#include "Figure.h"

class Croix : public Figure{

    public:
        int x; //Coordonnee x de la figure
        int y; //Coordonnee y de la figure
        int thickness; //Int dans lequel on viens mettre l'épaisseur de la figure. Utilisé seulement par segment et croix
        int color; //Int compris entre 0 et 255 permettant de choisir la couleur de la figure allant du blanc au noir
        Croix(int i_x,int i_y,int i_thickness,int i_color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig);
        Croix(int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig);
        ~Croix(){};
    private:
    std::vector<char> draw();
    
};

#endif