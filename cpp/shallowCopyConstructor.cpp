#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int ArgX, int ArgY)
    {
        this->x = ArgX;
        this->y = ArgY;
    }

    // Copy constructor
    Point(const Point& p1)
    {
        x = p1.x;
        y = p1.y;
    }

    int getX() { return x; }
    int getY() { return y; }
    void setPoint(int ArgX, int ArgY) { this->x = ArgX; this->y = ArgY; }
};

int main()
{
    Point p1(10, 15); // Normal constructor is called 
    Point p2 = p1; // Copy constructor is called 

    std::cout << "INITIALLY" << std::endl << "--------" << std::endl;

    std::cout << "P1 Point's Coordinates:  (" << p1.getX() << " , " << p1.getY() << ")" << std::endl;
    std::cout << "P2 Point's Coordinates:  (" << p2.getX() << " , " << p2.getY() << ")" << std::endl;

    p1.setPoint(0, 0); //P1 points coordinates are changed
    
    std::cout <<std::endl<< "AFTER" << std::endl << "--------" << std::endl;
    std::cout << "P1 Point's Coordinates:  (" << p1.getX() << " , " << p1.getY() << ")" << std::endl;
    std::cout << "P2 Point's Coordinates:  (" << p2.getX() << " , " << p2.getY() << ")" << std::endl;

   

}