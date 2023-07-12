//#pragma warning(disable : 4996)
////Cpp Polymorphism - dynamicWithVirtualKeyword.cpp
//#include <iostream>
//#include <vector>
//
//class Account {
//public:
//	virtual void withdraw(double amount) {
//		std::cout << "Account Withdraw" << std::endl;
//	}
//	virtual ~Account() 
//	{
//		std::cout << "Account Destructor\n";
//	}
//};
//
//
//class Checking : public Account {
//public:
//	virtual void withdraw(double amount) {
//		std::cout << "Checking Withdraw" << std::endl;
//	}
//	virtual ~Checking()
//	{
//		std::cout << "Checking Destructor\n";
//	}
//};
//
//class Savings : public Account {
//public:
//	virtual void withdraw(double amount) {
//		std::cout << "Savings Withdraw" << std::endl;
//	}
//	virtual ~Savings()
//	{
//		std::cout << "Savings Destructor\n";
//	}
//};
//
//class Trust : public Account {
//public:
//	virtual void withdraw(double amount) {
//		std::cout << "Trust Withdraw" << std::endl;
//	}
//	virtual ~Trust()
//	{
//		std::cout << "Trust Destructor\n";
//	}
//};
//
//int main() {
//	Account* p1 = new Account(); //Account withdraw is called
//	p1->withdraw(100);
//
//	Account* p2 = new Checking(); //Checking withdraw is called
//	p2->withdraw(100);
//
//	Account* p3 = new Savings(); //Checking withdraw is called
//	p3->withdraw(100);
//
//	Account* p4 = new Trust(); //Checking withdraw is called
//	p4->withdraw(100);
//
//
//	std::vector<Account*> accounts{ p1,p2,p3,p4 };
//	for (auto accountPtr : accounts)
//	{
//		accountPtr->withdraw(100);
//	}
//
//
//	std::cout << "\n\n\nDestructors\n-------------\n";
//	delete p1;
//	delete p2;
//	delete p3;
//	delete p4;
//}