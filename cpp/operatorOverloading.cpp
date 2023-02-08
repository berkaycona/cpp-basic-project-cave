#pragma warning(disable : 4996)

#include <iostream>
#include <cstring>
using namespace std;


class MyString {
private:
	char* str;
public:
	//Default Constructor
	MyString() 
		:str{nullptr}
	{
		str = new char[1];
		*str = '\0';
	}
	
	//Overloaded Constructor
	MyString(const char* s)
		:str{nullptr}
	{
		if (s == nullptr)
		{
			str = new char[1];
			*str = '\0';
		}
		else {
			str = new char[strlen(s) + 1]; //we have to define its length
			strcpy(str, s); //then the strcpy operation from argument
		}
	}

	//Destructor
	~MyString()
	{
		delete[] str;
	}

	void display() const
	{
		cout << str << ": " << getLength() << endl;
	}

	int getLength() const
	{
		return strlen(str);
	}

	const char* getStr() const
	{
		return str;
	}





	//Copy Constructor
	MyString(const MyString& obj);

	//Copy Operator Overloading
	MyString& operator=(const MyString& rhs);

	//Move Constructor
	MyString& operator=(MyString&& rhs);//3350, rhs is an r-value reference.

	MyString operator-()const; //4130 make string lowercase

	MyString operator+(const MyString& rhs)const;//4130 concatenate string

	bool operator==(const MyString& rhs)const;//4130 string comparison

	
	
};

//Copy Constructor
MyString::MyString(const MyString& obj)	

	:str{nullptr}
{
	str = new char[strlen(obj.str) + 1];
	strcpy(str, obj.str);
}


//Copy Assignment (=)
MyString &MyString::operator=(const MyString& rhs)//for s1=s2, it will be called for s1. The string inside the s2 object must be copied into s1(this)
{
	cout << "Copy Assignment" << endl;
	if (this == &rhs)
	{
		return *this;
	}
	else
	{
		delete this->str;//old string that is inside s1 won't be used.
		str = new char[strlen(rhs.str) + 1];
		strcpy(this->str, rhs.str);
		return *this;
	}
}

//Move Assignment
MyString& MyString::operator=(MyString&& rhs)
{
	cout << "Move Assignment!" << endl;
	if (this == &rhs)
		return *this;
	else
	{
		delete[] str;
		str = rhs.str;
		rhs.str = nullptr; //we stole its value, now we don't need it
		return *this;
	}
}

MyString MyString::operator-() const
{
	char* buff = new char[strlen(str) + 1];//setting the array's size
	strcpy(buff, str);
	for (size_t i = 0; i < strlen(str); i++)
	{
		buff[i] = tolower(buff[i]);
	}
	MyString returnValue{ buff };
	delete[] buff;

	return returnValue;
}

MyString MyString::operator+(const MyString& rhs) const
{
	char* buff = new char[strlen(str) + strlen(rhs.str) + 1];//setting the array's size
	strcpy(buff, str);
	strcat(buff, rhs.str);
	MyString returnValue{ buff };
	delete[] buff;

	return returnValue;
}

bool MyString::operator==(const MyString& rhs) const//the right constant means we are not changing inside content
{
	bool isEqual=false;
	if (strcmp(this->str, rhs.str) == 0)//if they are the same, strcmp returns 0
		isEqual = true;
	return isEqual;
}




int main()
{
	//copy assignment example
	MyString s1{ "Hello" };
	MyString s2;

	s1.display();
	s2.display();
	s2 = s1;//rhs will be s1

	s2.display();

	//move assignment example
	s2 = MyString{ "Bosa giden string" };
	s2.display();



	
	cout <<endl<<endl<< "+,-,== operators" << endl << "--------------" << endl;
	MyString s3 = "Hello";
	MyString s4{ "World" };
	s3.display();
	s4.display();
	MyString s5 = s3; //copy assignment
	s5.display();

	if (s3 == s4)//if there was no operator overload, it would have compared object adresses
	{
		cout << "Equal"<<endl;
	}
	else 
	{
		cout << "Not Equal" << endl;
	}

}
//5410