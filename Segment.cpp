#include "Segment.h"
//Fonction permettant de dessiner un segment ayant  une taille choisi par l'utilisateur.
Segment::Segment(int i_x,int i_y,int i_thickness,bool i_horizontal,int i_color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig)
    : Figure(i_D_width,i_D_height,i_width,i_height,i_fig) , thickness(i_thickness), x(i_x) , y(i_y) , color(i_color){}

//Fonction permettant de dessiner un segment ayant la taille de l'image
Segment::Segment(bool i_horizontal,int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig)
    : Figure(i_D_width,i_D_height,i_fig) , horizontal(i_horizontal), color(i_color), x(0) , y(0){
        thickness = (width > height) ? height/10 : width/10;
    }

//Création d'un semgent. La fonction regarde tout les pixels de défini entre le x et le y ainsi que l'épaisseur de la croix définit par l'utilisateur ou par défaut (dépend du choix precedent).
// Si le pixel se trouve dans l'espace défini, le programme change alors sa couleur.
std::vector<char> Segment::draw(){
    std::vector<char> o_fig = getFig();
    for(int i=y;i< y + height ;i++){
        for(int j=x;j< x + width;j++){
            if(horizontal){
                if(j<D_width && i<D_height && i>=0 && j>=0 && i < y + thickness)
                o_fig[i * D_width + j] = color;
            }
            else{
                if(j<D_width && i<D_height && i>=0 && j>=0 && j< x + thickness)
                o_fig[i * D_width + j] = color;
            }
        }
    }
    return o_fig;
}