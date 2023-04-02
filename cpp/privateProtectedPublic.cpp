//#pragma warning(disable : 4996)
////Cpp Inheritance - Inheritance: private, protected and public
//#include <iostream>
//#include <string>
//
//class Base {
//public:
//	int a;
//	void display()
//	{
//		std::cout << a << ", " << b << ", " << c << std::endl;
//	}
//protected:
//	int b;
//private:
//	int c;
//
//};
//
//class Derived1 : public Base {
//public:
//	void accessBaseMembers()
//	{
//		a = 100;
//		b = 100;
//		//c = 100;//CANNOT ACCESS
//	}
//};
//
//class Derived2 : protected Base {
//public:
//	void accessBaseMembers()
//	{
//		a = 100;
//		b = 100;
//		//c = 100;//CANNOT ACCESS
//	}
//};
//
//class Derived3 : private Base {
//public:
//	void accessBaseMembers()
//	{
//		a = 100;
//		b = 100;
//		//c = 100;//CANNOT ACCESS
//	}
//};
//
//int main()
//{
//	Base b;
//	b.a = 100;
//	//b.b = 100;//CANNOT ACCESS
//	//b.c = 100;//CANNOT ACCESS
//
//	Derived1 d1;
//	d1.a = 100;
//	//d.b = 100;//CANNOT ACCESS
//	//d.c = 100;//CANNOT ACCESS
//
//	Derived2 d2;
//	//d2.a = 100;//CANNOT ACCESS
//	//d2.b = 100;//CANNOT ACCESS
//	//d2.c = 100;//CANNOT ACCESS
//
//	Derived3 d3;
//	//d2.a = 100;//CANNOT ACCESS
//	//d2.b = 100;//CANNOT ACCESS
//	//d2.c = 100;//CANNOT ACCESS
//}
