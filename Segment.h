#ifndef SEGMENT_H
#define SEGMENT_H

#include "Figure.h"

class Segment : public Figure{
    public :
        int x;//Coordonnee x de la figure
        int y;//Coordonnee y de la figure
        int thickness;//Int dans lequel on viens mettre l'épaisseur de la figure. Utilisé seulement par segment et croix
        bool horizontal; //Booleen ou l'on vient savoir si l'utilisateur a choisi horizontal(1) ou vertical(0)
        int color;//Int compris entre 0 et 255 permettant de choisir la couleur de la figure allant du blanc au noir
        Segment(int i_x,int i_y,int i_thickness,bool i_horizontal,int color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig); 
        Segment(bool i_horizontal,int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig);
        ~Segment(){}
    private:
    std::vector<char> draw();
};

#endif