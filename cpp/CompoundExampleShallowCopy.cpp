//#include <iostream>
//
//class Shallow {
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
//	Shallow(int ArgData)//Constructor
//	{
//		data = new int;
//		*data = ArgData;
//	}
//	
//	Shallow(const Shallow& Obj);//Copy Constructor
//
//	
//	~Shallow()//Destructor
//	{
//		delete data;
//		std::cout << "Destructor is Called";
//	}
//
//};
//	
//
//	Shallow::Shallow(const Shallow& obj)
//		:data{obj.data}//Copies the value, not the address
//	{
//		std::cout << "Copy Constructor is Called!" << std::endl;
//	}
//
//	void display(Shallow s)
//	{
//		std::cout << s.getData()<<std::endl;
//	}
//
//
//	int main() {
//
//		Shallow s1=100;//Shallow s1{100}
//		display(s1);
//
//		Shallow s2{ s1 };
//		display(s2);//s2 and s1's adresses are the same, if one of them is NULLptr, the other one will be, too
//
//		//THIS CODE HAS AN ERROR. When the display function is called and s1 object's copy is created, The Arguement s and s1 objects data is pointing to
//		//same location. Thus, when it returns from display function, s's destructor is called and data is deleted. BOTH DATA IS DELETED. There is a memory leak
//
//		//IF THERE IS A POINTER IN YOUR CLASS MEMBERS, CREATE DEEP COPY.
//	}