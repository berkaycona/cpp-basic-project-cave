//#pragma warning(disable : 4996)
////Cpp Inheritance - Constructors and Inheritance
//#include <iostream>
//#include <string>
//
//class Base {
//private:
//	int value;
//public:
//	int getValue() { return value; }
//	void setValue(int x) { value = x; }
//	Base() :value{ 0 }
//	{
//		std::cout << "Base no args constructor" << std::endl;
//	}
//	Base(int x) :value{ x }
//	{
//		std::cout << "Base overloaded constructor" << std::endl;
//	}
//	Base(const Base& other) :value{ other.value } {
//		std::cout << "Base copy constructor" << std::endl;
//	}
//	~Base()
//	{
//		std::cout << "Base destructor" << std::endl;
//	}
//};
//
//class Derived : public Base {
//private:
//	int doubled_value;
//public:
//	int getDoubledValue() { return doubled_value; }
//	void setDoubledValue(int x) { doubled_value = x; }
//
//	Derived() :doubled_value{ 0 } {
//		std::cout << "Derived no args constructor" << std::endl;
//	}
//	Derived(int x) :Base(x), doubled_value{ 2 * x }
//	{
//		std::cout << "Derived overloaded constructor" << std::endl;
//	}
//	Derived(const Derived& other) :Base(other),doubled_value{ other.doubled_value } {
//		std::cout << "Derived copy constructor" << std::endl;
//	}
//	~Derived()
//	{
//		std::cout << "Derived destructor" << std::endl;
//	}
//};
//
//
//
//
//
//
//int main()
//{
//	/*Base b;
//	Base b1{b};*/
//
//	Derived d{ 100 };
//	Derived d2{ d };
//	//Derived d;
//	/*Derived e{ 5 };*/
//}
//
