//#pragma warning(disable : 4996)
////Cpp Polymorphism - dynamicWithVirtualKeywordReference
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
//void withdrawal(Account&a, double amount)
//{
//	a.withdraw(amount);
//}
//
//int main() {
//	/*Account a;
//	Account& ref = a;
//	ref.withdraw(100);
//
//	Trust t;
//	Account& ref2 = t;
//	ref2.withdraw(100);*/
//
//	Account a2;
//	Savings s2;
//	Trust t2;
//	Checking c2;
//
//	withdrawal(a2, 100);
//	withdrawal(s2, 100);
//	withdrawal(t2, 100);
//	withdrawal(c2, 100);
//
//	std::cout << "\n\n\nDestructors\n-------------\n";
//
//}