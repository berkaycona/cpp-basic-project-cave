//#pragma warning(disable : 4996)
////Cpp Polymorphism - InterfaceProblem
//#include <iostream>
//#include <vector>
//
//class Account {
//	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
//public:
//	virtual void withdraw(double amount)
//	{
//		std::cout << "Account Withdraw" << std::endl;
//	}
//	virtual ~Account(){}
//};
//
//std::ostream& operator<<(std::ostream& os, const Account& acc)
//{
//	os << "Account Display";
//	return os;
//}
//
//class Checking : public Account{
//	friend std::ostream& operator<<(std::ostream& os, const Checking& acc);
//public:
//	virtual void withdraw(double amount)
//	{
//		std::cout << "Checking Withdraw" << std::endl;
//	}
//	virtual ~Checking() {}
//};
//
//std::ostream& operator<<(std::ostream& os, const Checking& acc)
//{
//	os << "Checking Display";
//	return os;
//}
//
//class Saving :public Account {
//	friend std::ostream& operator<<(std::ostream& os, const Saving& acc);
//public:
//	virtual void withdraw(double amount)
//	{
//		std::cout << "Saving Withdraw" << std::endl;
//	}
//	virtual ~Saving() {}
//};
//
//std::ostream& operator<<(std::ostream& os, const Saving& acc)
//{
//	os << "Saving Display";
//	return os;
//}
//
//class Trust :public Account {
//	friend std::ostream& operator<<(std::ostream& os, const Trust& acc);
//public:
//	virtual void withdraw(double amount)
//	{
//		std::cout << "Trust Withdraw" << std::endl;
//	}
//	virtual ~Trust() {}
//};
//
//std::ostream& operator<<(std::ostream& os, const Trust& acc)
//{
//	os << "Trust Display";
//	return os;
//}
//
//int main()
//{
//	//Account a;
//	//std::cout << a<<std::endl;//OK :Account print method worked
//
//	//Checking c;
//	//std::cout << c << std::endl;//OK :Checking print method worked
//
//	//Saving s;
//	//std::cout << s << std::endl; //OK :Saving print method worked
//
//	Account* a2 = new Account();
//	std::cout << a2 << std::endl;
//
//	Account* c2 = new Checking(); // ERROR : Account print method worked. However, we wanted Checking print method to work.
//	std::cout << c2 << std::endl;
//
//	delete a2;
//}