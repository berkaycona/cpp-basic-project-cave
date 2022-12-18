//Friend Functions 
//Copy Constructors
//Outside Member Function Definitions
#include <iostream>
#include <cstdlib>
using namespace std;


class Polygon {
private:
	int* ptr;
	int length;
public:
	friend void sumOfEdges(Polygon& obj); // friend function
	void getCircumference();
	Polygon(int len); 
	Polygon(const Polygon& obj); // copy constructor
	~Polygon();
	void setEdges();

};

//Member functions definitions including constructor
Polygon::Polygon(int lengthFromMain) 
{
	cout << "Default Constructor Allocating ptr" << endl;
	
	// allocate memory for the pointer;
	ptr = (int*)malloc(lengthFromMain * sizeof(int));
	length = lengthFromMain;
	// *ptr = len;
}

//Copy Constructor
Polygon::Polygon(const Polygon& obj) 
{
	cout << "Copy Constructor Allocating ptr" << endl;
	//ptr = new int;
	length = obj.length;
	ptr = new int[length];
	for (int i = 0; i < length; i++) 
	{
		ptr[i] = obj.ptr[i];
	}

}

//Destructor
Polygon::~Polygon(void) 
{
	cout << "Freeing Memory!" << endl;
	free(ptr);
}




void Polygon::setEdges(void) 
{
	for (int i = 0; i < length; i++) 
	{
		cout << "Enter the Edge " << i + 1 << ": ";
		cin >> ptr[i];
	}
}

void sumOfEdges(Polygon& obj) 
{
	int total = 0;
	for (int i = 0; i < obj.length; i++) {
		total += obj.ptr[i];
	}
	cout << "Sum of Edges: " << total << endl;
}

void Polygon::getCircumference() 
{
	int total = 0;
	for (int i = 0; i < length; i++) 
	{
		total += ptr[i];
	}
	cout << "Sum of edges: " << total << endl;
}

int main() 
{
	int number;
	cout << "Enter Number of Edges for Polygon: ";
	cin >> number;
	Polygon line1(number);
	// Polygon line2 = line1; // This also calls copy constructor
	line1.setEdges();
	line1.getCircumference();
	Polygon line2 = line1;
	//line2.getLength();
	line2.getCircumference();
	return 0;
}