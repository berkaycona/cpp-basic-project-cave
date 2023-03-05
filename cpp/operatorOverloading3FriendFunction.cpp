//#pragma warning(disable : 4996)
////Operator Overloading 3 - Use of the Friend Function
// 
//#include <iostream>
//
//class Mystring{
//	friend bool operator ==(const Mystring& lhs, const Mystring& rhs)//friend değilken tek parametre alıyordu, burda artık çift parametre alıcak, çünkü kendisi için çağırıldığını bilmiyorr
//	{
//		bool isEqual= false;
//		if ((lhs.str) == (rhs.str))
//			isEqual=true;
//		return isEqual;
//	}
//	friend Mystring operator -(const Mystring& obj)//member func iken parametre almıyordu, burada alıcak.
//	{
//		char* buff = new char[strlen(obj.str) + 1];//setting the array's size
//			strcpy(buff, obj.str);
//			for (size_t i = 0; i < strlen(obj.str); i++)
//			{
//				buff[i] = tolower(buff[i]);
//			}
//			Mystring returnValue{ buff };
//			delete[] buff;
//		
//			return returnValue;
//	}
//	friend Mystring operator +(const Mystring& lhs, const Mystring& rhs)
//	{
//		char* buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];//setting the array's size
//			strcpy(buff, lhs.str);
//			strcat(buff, rhs.str);
//			Mystring returnValue{ buff };
//			delete[] buff;
//		
//			return returnValue;
//	}
//private :
//char * str;
//public:
//	Mystring();
//	Mystring(const char* s);
//	Mystring (const Mystring & source);
//	~Mystring();
//
//	Mystring &operator = (const Mystring & rhs); 
//	Mystring& operator = (Mystring&& rhs);
//
//	void display() const;
//	int getLength() const;
//	const char *getStr() const;
//};