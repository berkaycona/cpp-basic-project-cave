#pragma warning(disable : 4996)
//Cpp Basics - Pointers

#include <iostream>
using namespace std;





int main()
{
	
	
	////[3] Declaring Pointers
	//int firstvalue, secondvalue;
	//int* mypointer;

	//mypointer = &firstvalue;
	//*mypointer = 10;
	//mypointer = &secondvalue;
	//*mypointer = 20;
	//cout << "firstvalue is " << firstvalue << endl;
	//cout << "secondvalue is " << secondvalue << endl;


	//int firstvalue = 5, secondvalue = 15;
	//int* p1, * p2;

	//p1 = &firstvalue;  // p1 = address of firstvalue
	//p2 = &secondvalue; // p2 = address of secondvalue
	//*p1 = 10;          // value pointed to by p1 = 10
	//*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	//p1 = p2;           // p1 = p2 (value of pointer is copied)
	//*p1 = 20;          // value pointed to by p1 = 20

	//cout << "firstvalue is " << firstvalue << endl;
	//cout << "secondvalue is " << secondvalue << endl;






	////[4] Pointersand Arrays

	////example 1
	//int myarray[20];
	//int* mypointer;

	//mypointer = myarray;//valid statement

	////myarray = mypointer; //invalid statement


	////example 2
	//int numbers[5];
	//int* p;
	//p = numbers;  
	//*p = 10;
	//p++;  
	//*p = 20;
	//p = &numbers[2];  
	//*p = 30;
	//p = numbers + 3;  
	//*p = 40;
	//p = numbers; 
	//*(p + 4) = 50;
	//for (int n = 0; n < 5; n++)
	//	cout << numbers[n] << ", ";


	////example 3 : about brackets
	//int a[5];
	//a[5] = 0; // a [offset of 5] = 0
	//*(a + 5) = 0; // pointed to by (a+5) = 0 






	//[5] Pointer Initialization

}