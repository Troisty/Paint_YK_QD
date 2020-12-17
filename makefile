STB_INCLUDE_PATH = ./extern/stb

CFLAGS = -std=c++11 -g -I$(STB_INCLUDE_PATH) -Isrc
LDFLAGS =

APP = FigureCreator
OBJ = menu.o miniproj.o Drawing.o Figure.o Carre.o Croix.o Rectangle.o Segment.o


$(APP): $(OBJ)
	g++ $(CFLAGS) -o $(APP) $(OBJ) $(LDFLAGS)

menu.o: menu.cpp
	g++ $(CFLAGS) -c menu.cpp $(LDFLAGS)

miniproj.o: miniproj.cpp
	g++ $(CFLAGS) -c miniproj.cpp $(LDFLAGS)

Drawing.o: Drawing.cpp
	g++ $(CFLAGS) -c Drawing.cpp $(LDFLAGS)

Figure.o: Figure.cpp
	g++ $(CFLAGS) -c Figure.cpp $(LDFLAGS)

Carre.o: Carre.cpp
	g++ $(CFLAGS) -c Carre.cpp $(LDFLAGS)

Croix.o: Croix.cpp
	g++ $(CFLAGS) -c Croix.cpp $(LDFLAGS)

Rectangle.o: Rectangle.cpp
	g++ $(CFLAGS) -c Rectangle.cpp $(LDFLAGS)

Segment.o: Segment.cpp
	g++ $(CFLAGS) -c Segment.cpp $(LDFLAGS)
	
.PHONY: test clean

clean:
	rm -f $(APP)
	rm -f *.o
