#include "Carre.h"

//Fonction permettant de dessiner un carré ayant une taille choisi par l'utilisateur
Carre::Carre(int i_x,int i_y,int i_color,int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig)
    : Figure(i_D_width,i_D_height,i_width,i_height,i_fig) , x(i_x) , y(i_y) , color(i_color){}

//Fonction permettant de dessiner un carré ayant la taille de l'image
Carre::Carre(int i_color,int i_D_width,int i_D_height,std::vector<char> i_fig)
    : Figure(i_D_width,i_D_height,i_fig) , color(i_color), x(0) , y(0) {}


std::vector<char> Carre::draw(){
    
    std::vector<char> o_fig = getFig();
     
//Création de la figure carré. La fonction regarde tout les pixels de défini entre le x et le y définit par l'utilisateur ou par défaut (dépend du choix precedent).
// Si le pixel se trouve dans l'espace défini, le programme change alors sa couleur
    for(int i=y;i< y + height ;i++){
        for(int j=x;j< x + width;j++){
            if(j<D_width && i<D_height && i>=0 && j>=0 && i<D_width && j<D_height && i<width + y && j<height + x)
                o_fig[i * D_width + j] = color;
        }
    }
    return o_fig;
}