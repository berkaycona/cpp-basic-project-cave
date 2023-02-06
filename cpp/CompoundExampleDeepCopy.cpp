//#include <iostream>
//
//
//class Deep {
//private:
//	int* data;
//public:
//	void setData(int ArgData)
//	{
//		*data = ArgData;
//	}
//	int getData()
//	{
//		return *data;
//	}
//	
//	Deep(int ArgData)//Constructor
//	{
//		data = new int;
//		*data = ArgData;
//	}
//
//	Deep(const Deep& Obj);//Copy Constructor
//
//	~Deep()//Destructor
//	{
//		delete data;
//		std::cout << "Destructor is Called" << std::endl;
//	}
//};
//
//Deep::Deep(const Deep& obj)
//{
//	data = new int;
//	*data = *obj.data;
//	std::cout << "Copy Constructor is Called!" << std::endl;
//}
//
//void display(Deep d)
//{
//	std::cout << d.getData() << std::endl;
//}
//
//
//int main() {
//
//	Deep d1 = 100;//Shallow s1{100}
//	display(d1);
//
//	Deep d2{ d1 };
//	display(d2);//s2 and s1's adresses are the same, if one of them is NULLptr, the other one will be, too
//
//	
//}