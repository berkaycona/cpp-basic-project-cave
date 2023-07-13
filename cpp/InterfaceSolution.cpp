#pragma warning(disable : 4996)
//Cpp Polymorphism - InterfaceProblem
#include <iostream>
#include <vector>

class I_Printable {
	friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
	virtual ~I_Printable() {};
};

std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
	obj.print(os);
	return os;
}


class Account : public I_Printable{
public:
	virtual void withdraw(double amount)
	{
		std::cout << "Account Withdraw" << std::endl;
	}

	virtual void print(std::ostream& os) const 
	{
		os << "Account Display";
	}
	virtual ~Account(){}
};


class Checking : public Account{
public:
	virtual void withdraw(double amount)
	{
		std::cout << "Checking Withdraw" << std::endl;
	}
	virtual void print(std::ostream& os) const
	{
		os << "Checking Display";
	}
	virtual ~Checking() {}
};


class Saving :public Account {
public:
	virtual void withdraw(double amount)
	{
		std::cout << "Saving Withdraw" << std::endl;
	}
	virtual void print(std::ostream& os) const
	{
		os << "Saving Display";
	}
	virtual ~Saving() {}
};


class Trust :public Account {
public:
	virtual void withdraw(double amount)
	{
		std::cout << "Trust Withdraw" << std::endl;
	}
	virtual void print(std::ostream& os) const
	{
		os << "Trust Display";
	}
	virtual ~Trust() {}
};


int main()
{
	//Account a;
	//std::cout << a<<std::endl;//OK :Account print method worked

	//Checking c;
	//std::cout << c << std::endl;//OK :Checking print method worked

	//Saving s;
	//std::cout << s << std::endl; //OK :Saving print method worked

	Account* a2 = new Account();
	std::cout << *a2 << std::endl;

	Account* c2 = new Checking(); // OK : Checking print method worked as it expected. 
	std::cout << *c2 << std::endl;

	delete a2;
	delete c2;
}

