#include <iostream>

class Shallow {
private: 
	int* data;
public:
	void setData(int ArgData)
	{
		*data = ArgData;
	}
	int getData()
	{
		return *data;
	}
	//Constructor
	Shallow(int ArgData);

	//Copy Constructor
	Shallow(const Shallow& Obj);

	//Destructor
	~Shallow()
	{
		delete data;
		std::cout << "Destructor is Called";
	}

};
	Shallow::Shallow(int ArgData)
	{
		data = new int;
		*data = ArgData;
	}

	Shallow::Shallow(const Shallow& obj)
		:data{obj.data}
	{
		std::cout << "Copy Constructor is Called!" << std::endl;
	}

	void display(Shallow s)
	{
		std::cout << s.getData()<<std::endl;
	}