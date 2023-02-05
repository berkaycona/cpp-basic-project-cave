//// Implicit copy constructor Calling
//#include <iostream>
//
//
//class Sample {
//	int x;
//
//public:
//	void setter(int ArgX) { this->x = ArgX; }
//	void display() { std::cout << "Value=" << x<<std::endl; }
//};
//
//int main()
//{
//	Sample obj1;
//	std::cout << "INITIALLY" << std::endl << "--------" << std::endl;
//	obj1.setter(10);
//	obj1.display();
//	Sample obj2(obj1); // or obj2=obj1; //Implicit Copy Constructor Calling
//	obj2.display();
//	std::cout << std::endl << "AFTER" << std::endl << "--------" << std::endl;
//	obj1.setter(20); //Changing the obj1 Value
//	obj1.display();
//	obj2.display();
//}
//
//
//
