#include "Menu.h"

void Menu::run(){
    Drawing draw(width,height); 
    
    bool boucle = true; //Déclare la variable boucle comme vrai
    clearConsole(); //Nettoie la console 
    while(boucle){ //Tant que boucle est vrai, le programme tourne a l'infini
        int n=0; //Variable permettant de choisir dans le premier menu

        //Premier menu
        std::cout << "-----------Menu-----------" << std::endl;
        std::cout << "1 - Creer une Figure......" << std::endl;
        std::cout << "2 - Dessiner la figure...." << std::endl;
        std::cout << "3 - Quitter le programme.." << std::endl;
        std::cout << "Saisir : ";

        std::cin >> n; //Saisi du choix dans le premier menu

        clearConsole();
        switch(n){ //Switch case du premier menu
            case 1: //Dans le cas d'une creation d'une figure, on arrive sur un deuxieme menu avec le choix des figures  a créer.
            {
                int n2 = 0; //Variable permettant de choisir dans le deuxieme menu
                std::cout << "-----------Liste des figures-----------" << std::endl;
                std::cout << "1 - Un Carre..........................." << std::endl;
                std::cout << "2 - Un Rectangle......................." << std::endl;
                std::cout << "3 - Un Segment........................." << std::endl;
                std::cout << "4 - Un Croix..........................." << std::endl;
                std::cout << "5 - Retour au menu principal..........." << std::endl;
                std::cout << "Saisir : ";

                std::cin >> n2; //Saisi du choix dans le deuxieme menu
                int w=0,h=0,c=0,x=0,y=0,e=0; //Initialisations des variables permettant la modifications de la taille et position de la figure
                // w=longueur / h=largeur / c=couleur / x=coordonnee_x / y=coordonnee_y / e=epaisseur du trait (segment et croix uniquement)

                clearConsole();
                if(n2>=1 && n2<=4){ //Quel que soit le cas, on peut choisir une couleur dans une nuance entre le blanc et le noir (0-255)
                    std::cout << "Veuillez saisir la couleur (0 - 255) : ";
                    std::cin >> c; //Saisi du choix de la couleur du pixel
                }
                switch(n2){
                    case 1: //Carrée
                        if(isFull()){ //Taille pleine
                            Carre *carre = new Carre(c,width,height,draw.getImage()); //On vient creer le carre a la taille de l'image
                            draw.listToDraw.push_back(carre); //On vient stocker le carre dans un vecteur en attendant qu'il soit dessiner
                        }

                        else{ //Taille choisi par l'utilisateur
                            std::cout << "Saisir sa longueur: ";
                            std::cin >> w; //Saisi de la longueur
                            std::cout << std::endl << "Saisir sa largeur : ";
                            std::cin >> h; //Saisi de largeur
                            std::cout << std::endl << "Saisir la coordonnee x : ";
                            std::cin >> x; //Saisi de la coordonnee x
                            std::cout << std::endl << "Saisir la coordonnee y : ";
                            std::cin >> y; //Saisi de la coordonnee y

                            Carre *carre = new Carre(x,y,c,width,height,w,h,draw.getImage()); //On vient creer le carre a la taille et a la position predefinie par l'utilisateur
                            draw.listToDraw.push_back(carre); //On vient stocker le carre dans un vecteur en attendant qu'il soit dessiner
                        }

                        break; //On revient eu menu principal
                    case 2: //Rectangle
                        if(isFull()){ //Taille pleine
                            Rectangle *rect = new Rectangle(c,width,height,draw.getImage()); //On vient creer le rectangle a la taille de l'image
                            draw.listToDraw.push_back(rect); //On vient stocker le rectangle dans un vecteur en attendant qu'il soit dessiner
                        }

                        else{ //Taille choisi par l'utilisateur
                            std::cout << "Saisir sa longueur : ";
                            std::cin >> w; //Saisi de la longueur
                            std::cout << std::endl << "Saisir sa largeur : ";
                            std::cin >> h; //Saisi de la largeur
                            std::cout << std::endl << "Saisir la coordonnee x : ";
                            std::cin >> x; //Saisi de la coordonnee x
                            std::cout << std::endl << "Saisir la coordoonee y : ";
                            std::cin >> y; //Saisi de la coordonnee y

                            Rectangle *rect = new Rectangle(x,y,c,width,height,w,h,draw.getImage()); //On vient creer le carre a la taille et a la position predefinie par l'utilisateur
                            draw.listToDraw.push_back(rect); //On vient stocker le rectangle dans un vecteur en attendant qu'il soit dessiner
                        }
                        break;
                    case 3: //Segment
                        if(isFull()){ //Taille pleine
                            int ho = 0; //Initialisation de la variable qui permet de choisir si le segment doit etre horizontal ou vertical
                            std::cout << "-----------Sens du segment-----------" << std::endl;
                            std::cout << "1 - Horizontal......................." << std::endl;
                            std::cout << "2 - Vertical........................." << std::endl;
                            std::cout << "Saisir votre choix : ";
                            std::cin >> ho; //Variable dans laquelle on doit saisir notre choix
                            bool horizontal = (ho == 1) ? true : false;
                            Segment *seg = new Segment(horizontal,c,width,height,draw.getImage()); //On vient creer le segment a la taille de l'image
                            draw.listToDraw.push_back(seg);//On vient stocker le segment dans un vecteur en attendant qu'il soit dessiner
                        }

                        else{ //Taille choisi par l'utilisateur
                            int hu = 0; //Initialisation de la variable qui permet de choisir si le segment doir etre horizontal ou vertical
                            std::cout << "-----------Sens du segment-----------" << std::endl;
                            std::cout << "1 - Horizontal......................." << std::endl;
                            std::cout << "2 - Vertical........................." << std::endl;
                            std::cout << "Saisir votre choix : ";
                            std::cin >> hu; //Variable dans laquelle on doit saisir notre choix
                            bool horizontal = (hu == 1) ? true : false;
                            std::cout << std::endl << "Saisir l'epaisseur du segment : ";
                            std::cin >> e; //Saisi de l'epaisseur du trait
                            std::cout << std::endl << "Saisir sa longueur : ";
                            std::cin >> w; //Saisi de la longueur du segment
                            std::cout << std::endl << "Saisir sa largeur : ";
                            std::cin >> h; //Saisi de la largeur du segment
                            std::cout << std::endl << "Saisir la coordonnee x : ";
                            std::cin >> x; //Saisi de la coordonnee x
                            std::cout << std::endl << "Saisir la coordonnee y : ";
                            std::cin >> y; //Saisi de la coordonnee y

                            Segment *seg = new Segment(x,y,e,horizontal,c,width,height,w,h,draw.getImage()); //On vient creer le segment a la taille et la position choisi par l'utilisateur
                            draw.listToDraw.push_back(seg); //On vient stocker le segment dans un vecteur en attendant qu'il soit dessiner
                        }
                        break;
                    case 4: // Croix
                        if(isFull()){ //Taille pleine
                            
                            Croix *croix = new Croix(c,width,height,draw.getImage()); //On vient creer la croix a la taille de l'image
                            draw.listToDraw.push_back(croix); //On vient stocker la croix dans un vecteur en attendant qu'elle soit dessiner
                        }

                        else{ //Taille choisi par l'utilisateur
                            std::cout << std::endl << "Saisir l'epaisseur de la croix : ";
                            std::cin >> e; //Saisi de l'epaisseur de croix
                            std::cout << std::endl << "Saisir sa longueur : ";
                            std::cin >> w; //Saisi de la longueur
                            std::cout << std::endl << "Saisir sa margeur : ";
                            std::cin >> h; //Saisi de la largeur
                            std::cout << std::endl << "Saisir la coordonnee x : ";
                            std::cin >> x; //Saisi de la coordonnee x
                            std::cout << std::endl << "Saisir la coordonnee y : ";
                            std::cin >> y; //Saisi de la coordonnee y

                            Croix *croix = new Croix(x,y,e,c,width,height,w,h,draw.getImage()); //On vient creer la croix a la taille, l'epaisseur et la position choisi par l'utilisateur
                            draw.listToDraw.push_back(croix);//On vient stocker la croix dans un vecteur en attendant qu'elle soit dessiner
                        }
                        break;
                    case 5: //Retour au menu principal
                        break;
                    default:
                        break;
                }
            }
                break;
            case 2: //Sauvegarde l'image en figure_draw.bmp
                draw.save("figure_draw.bmp");
                break;
            case 3:
                boucle = false;// Passage de boucle à faux, ce qui provoque l'arrete de la boucle et donc l'arret du programme.
                break;
            default:

                break;
        }
        clearConsole();
    }
}

void Menu::clearConsole(){
    for(int i=0;i<50;i++)
        std::cout<< std::endl;
}

bool Menu::isFull(){ // Fonction qui permet de choisir si la figure doit prendre la taille de l'image (isFull) ou si l'utilisateur veut lui-même choisir la taille et les coordonees de celle-ci
    int n;
    clearConsole(); //clear la console (terminal propre)
    std::cout << "Voulez vous mettre la figure au format de l'image ? (taille de l'image)" << std::endl; // Taille par défaut(taille image) ou taille choisi par l'utilisateur
    std::cout << "1 - Oui" << std::endl;
    std::cout << "2 - Non" << std::endl;

    std::cin >> n;
    return (n==2) ? false : true;
}