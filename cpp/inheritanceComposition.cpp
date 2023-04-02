//#pragma warning(disable : 4996)
////Cpp Inheritance - Inheritance and Composition
//
//#include <iostream>
//#include <string>
//class Account
//{
//private:
//	double balance;//composition
//	std::string name;//composition
//public:
//	void deposit(double amount)
//	{
//		std::cout << "Account deposit called with: " << amount<<std::endl;
//		balance = 0.0;
//		name = "NoName Account";
//	}
//	void withdraw(double amount)
//	{
//		std::cout << "Account withdraw called with: " << amount<<std::endl;
//	}
//	Account()
//	{
//		std::cout<<"Account no args constructor"<<std::endl;
//	}
//	~Account()
//	{
//		std::cout << "Account Destructor" << std::endl;
//	}
//};
//class SavingsAccount : Account
//{
//private:
//	double rate;
//public:
//	SavingsAccount()
//	{
//		std::cout << "Saving Account no args constructor" << std::endl;
//		rate = 15.0;
//	}
//	~SavingsAccount()
//	{
//		std::cout << "Saving Account Destructor" << std::endl;
//	}
//	void deposit(double amount)
//	{
//		std::cout << "Savings Account deposit called with: " << amount<<std::endl;
//	}
//	void withdraw(double amount)
//	{
//		std::cout << "Savings Account withdraw called with: " << amount<<std::endl;
//	}
//};
//
//
//int main()
//{
//	//[1] Constructor, Destructor Order
//	std::cout << "--------------Account--------------" << std::endl;
//	Account a1;
//	a1.deposit(500);
//	a1.withdraw(300);
//
//
//	Account *a2;
//	a2 = new Account();
//	a2->deposit(1000);
//	a2->withdraw(500);
//
//	std::cout <<std::endl<< "--------------Saving Account--------------" << std::endl;
//	SavingsAccount s1;
//	s1.deposit(999);
//	s1.withdraw(444);
//}