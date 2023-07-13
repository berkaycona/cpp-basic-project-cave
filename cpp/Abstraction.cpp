//#pragma warning(disable : 4996)
////Cpp Polymorphism - Abstraction
//#include <iostream>
//
//class Shape {
//private:
//	//private members for all shapes
//public:  
//	//It has draw methods in its children. It doesn't have it,
//    //since we don't know how to implement it. If its children
//    //doesn't have this method, it children's methods are abstract, too.
//	virtual void draw() = 0; 
//		
//	virtual void rotate() = 0;
//
//	virtual void print()
//	{
//		std::cout << "Shape." << std::endl;
//	}
//
//	virtual ~Shape(){}
//};
//
//class OpenShape : public Shape {
//public:
//	virtual ~OpenShape(){}
//};
//
//class ClosedShape : public Shape {
//public:
//	virtual ~ClosedShape() {}
//};
//
//class line : public OpenShape {
//public:
//	virtual void draw()
//	{
//		std::cout << "Line Draw" << std::endl;
//	}
//	virtual void rotate()
//	{
//		std::cout << "Line Rotate" << std::endl;
//	}
//	virtual ~line(){ }
//};
//
//class circle : public ClosedShape {
//public:
//	virtual void draw()
//	{
//		std::cout << "Circle Draw" << std::endl;
//	}
//	virtual void rotate()
//	{
//		std::cout << "Circle Rotate" << std::endl;
//	}
//	virtual ~circle(){}
//};
//
//
//int main()
//{
//	//Shape s; //ERROR
//	
//	Shape* s = new circle();//OK
//}