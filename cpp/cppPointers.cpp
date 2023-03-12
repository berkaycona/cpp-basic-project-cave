#pragma warning(disable : 4996)
//Cpp Basics - Pointers

#include <iostream>
using namespace std;





int main()
{
	
	
	//[3] Declaring Pointers
	int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;

}