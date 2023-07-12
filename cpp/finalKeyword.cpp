//#pragma warning(disable : 4996)
////Cpp Polymorphism - finalKeyword.cpp
//#include <iostream>
//
//class Base {
//public:
//	virtual void Hello() const {
//		std::cout << "Hello From Base Class" << std::endl;
//	}
//
//	virtual ~Base() {}
//};
//
//class Derived final: public Base {
//public:
//	virtual void Hello() const override {
//		std::cout << "Hello From Derived Class" << std::endl;
//	}
//	virtual ~Derived() {}
//};
//
//////ERROR : CLASS
////class Grandchild : public Derived {
////public:
////	virtual void Hello() const override {
////		std::cout << "Hello From Derived Class" << std::endl;
////	}
////	virtual ~Grandchild() {}
////};
//
//class Derived2 : public Base {
//public:
//	virtual void Hello() const override final{
//		std::cout << "Hello From Derived2 Class" << std::endl;
//	}
//	virtual ~Derived2() {}
//};
//
//////ERROR : METHOD
////class Grandchild : public Derived2 {
////public:
////	virtual void Hello() const override {
////		std::cout << "Hello From Derived Class" << std::endl;
////	}
////	virtual ~Grandchild() {}
////};
//
//int main() {
//	Base* p1 = new Base();
//	p1->Hello(); // Hello from Base
//
//	Derived* p2 = new Derived();
//	p2->Hello();// Hello from Derived
//
//
//	Base* p3 = new Derived();//Upcasting
//	p3->Hello();
//
//
//	delete p1;
//	delete p2;
//}