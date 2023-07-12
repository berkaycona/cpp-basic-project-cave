//#pragma warning(disable : 4996)
////Cpp Polymorphism - staticWithoutVirtualKeyword.cpp
//#include <iostream>
//
//class Account {
//public:
//	void withdraw(double amount) {
//		std::cout << "Account Withdraw"<<std::endl;
//	}
//	~Account(){}
//};
//
//
//class Checking : public Account {
//public:
//	void withdraw(double amount) {
//		std::cout << "Checking Withdraw" << std::endl;
//	}
//	~Checking() {}
//};
//
//class Savings : public Account {
//public:
//	void withdraw(double amount) {
//		std::cout << "Savings Withdraw" << std::endl;
//	}
//	~Savings() {}
//};
//
//class Trust : public Account {
//public:
//	void withdraw(double amount) {
//		std::cout << "Trust Withdraw" << std::endl;
//	}
//	~Trust() {}
//};
//
//int main() {
//	Account* p1 = new Account(); //Account withdraw is called
//	p1->withdraw(100);
//
//	Account* p2 = new Checking(); //Account withdraw is called
//	p2->withdraw(100);
//
//	std::cout << "Destructors" << std::endl;
//	delete p1;
//}