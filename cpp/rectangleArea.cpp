////Display The Area of Rectangle
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//#define SIZE 3
//
//class Area {
//    int length;
//    int breadth;
//    int area;
//    int perimeter;
//public:
//    Area() 
//    {
//        this->length = 5;
//        this->breadth = 2;
//        cout << "In the Default Constructor"<<endl;
//    }
//    Area(int l, int b)
//    {
//        this->length = l;
//        this->breadth = b;
//        cout << "In the Overloaded Constructor With Length: " << l << " and Width: " << b<<endl;
//    }
//    ~Area() {
//        cout << "In the Destructor for the Object"<<endl;
//    };
//    void setLength()
//    {
//        cout << "Enter the Length and Breadth Respectively: ";
//        cin >> this->length >> this->breadth;
//    }
//    void calculateArea() 
//    { 
//        area = length * breadth; 
//    
//    }
//    void DisplayArea()
//    {
//        cout << "Area: " << area << endl;
//    }
//    void DisplayPerimeter(int temp)
//    {
//        cout << "Perimeter: " << perimeter << endl;
//    }
//};
//int main()
//{
//    int number;
//    Area a[3];
//    for (int i = 0; i < 3; i++) 
//    {
//        a[i].setLength();
//        a[i].calculateArea();
//    }
//    for (int i = 0; i < 3; i++) 
//    {
//        a[i].DisplayArea();
//    }
//    Area A(5, 2);
//    A.calculateArea();
//    A.DisplayArea();
//
//}