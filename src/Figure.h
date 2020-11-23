#ifndef Figure_h
#define Figure_h

#include <string>
#include <vector>

class Figure{
public:
    Figure(const int width, const int height): width(width), height(height);

private:
    bool setPoint(const int col, const int line);
    
    
private:
    const int width;
    const int height;
    
    std::vector<char> figure;
}


#endif /* Figure_h */
