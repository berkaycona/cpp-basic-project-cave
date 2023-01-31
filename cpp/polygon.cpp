//Friend Functions 
//Copy Constructors
//Outside Member Function Definitions
#include <iostream>
#include <cstdlib>
using namespace std;


class Polygon {
private:
	int* edgesPointer;
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
	cout << "Overloaded Constructor Allocating ptr" << endl;
	
	// allocate memory for the pointer;
	edgesPointer = (int*)malloc(lengthFromMain * sizeof(int)); //How exactly does this statement work


	length = lengthFromMain;
}


//Copy Constructor
Polygon::Polygon(const Polygon& obj) 
{
	cout << "Copy Constructor Allocating ptr" << endl;
	//ptr = new int;
	length = obj.length;
	edgesPointer = new int[length];
	for (int i = 0; i < length; i++) 
	{
		edgesPointer[i] = obj.edgesPointer[i];
	}

}

//Destructor
Polygon::~Polygon(void) 
{
	cout << "Freeing Memory!" << endl;
	free(edgesPointer);
}




void Polygon::setEdges(void) 
{
	for (int i = 0; i < this->length; i++) 
	{
		cout << "Enter the Edge " << i + 1 << ": ";
		cin >> edgesPointer[i];
	}
}

//friend function
void sumOfEdges(Polygon& obj) 
{
	int total = 0;
	for (int i = 0; i < obj.length; i++) {
		total += obj.edgesPointer[i];
	}
	cout << "Sum of Edges: " << total << endl;
}

void Polygon::getCircumference() 
{
	int total = 0;
	for (int i = 0; i < length; i++) 
	{
		total += edgesPointer[i];
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