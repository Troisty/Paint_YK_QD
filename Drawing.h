#ifndef DRAWING_H
#define DRAWING_H


#include <vector>
#include <iostream>
#include <string>


#include "Figure.h"
#include "Carre.h"
#include "Croix.h"
#include "Rectangle.h"
#include "Segment.h"

class Drawing{
  public:
    

    Drawing(const int width, const int height);
    Drawing() : width(0) , height(0){};
    ~Drawing();

  void save(std::string filename);
  int getWidth(){return width;}
  int getHeight(){return height;}
  std::vector<char> getImage(){return image;}
  void setImage(std::vector<char> i_image){image = i_image;}
  
  void drawList();
  
private:
  void clearImage();
  void createTestImage();

private:
  const int width;
  const int height;
  
  std::vector<Figure*> listToDraw;
  std::vector<char> image;
  
};

#endif /* DRAWIN_H */