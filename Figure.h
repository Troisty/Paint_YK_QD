#ifndef FIGURE_H
#define FIGURE_H

#include <cstdlib>
#include <iostream>
#include <vector>

class Figure{
    private:

         
    public:

        int const D_width; 
        int const D_height;

        int width;
        int height;

        std::vector<char> fig; 

        std::vector<char> getFig() const;
        

        void setPoint(int x,int y);

        virtual std::vector<char> draw() = 0 ;

        ~Figure(){}

    protected:

        Figure(int i_D_width,int i_D_height,int i_width,int i_height,std::vector<char> i_fig);
        Figure(int i_D_width,int i_D_height,std::vector<char> i_fig);

        

        
        
        
};

#endif