#pragma warning(disable : 4996)
//Cpp Basics - Arrays
#include <iostream>
#include <array>//<array> header (which is part of the sl) file is necessary to use the std::array template class in your program.
#include <iomanip>
using namespace std;

//[example 5]
//first way
void myFunction5(int* arr, int size) 
{
	cout << "Sending arrays as arguments - First Way";
}
//second way
void myFunction5(int(&arr)[5]) 
{
	cout << "Sending arrays as arguments - Second Way";
}
//third way
void myFunction5(int(*arr)[5], int size)
{
	cout << "Sending arrays as arguments - Third Way";
}
//fourth way (same with first way)
void myFunction5(int arr[], int size) 
{
	cout << "Sending arrays as arguments - Fourth Way";
}

using namespace std;
int main()
{
	//[example 1]
	array<int, 5> n1;
	
	for (size_t i{ 0 }; i < n1.size(); ++i) 
	{
		n1[i] = 0; 
	}
	cout << "Element" << setw(10) << "Value" << endl;
	for (size_t j{ 0 }; j < n1.size(); ++j) 
	{
		cout << setw(7) << j << setw(10) << n1[j] << endl;
	}


	//[example 2]
	array<int, 5> n{ 32, 27, 64, 18, 95 };
	cout << "Element" << setw(10) << "Value" << endl;
		 
	for (size_t i{ 0 }; i < n.size(); ++i) 
	{
		cout << setw(7) << i << setw(10) << n[i] << endl;
	}
	


	//[example 3 : some definitions]
	int arr3_1[10];

	const int n3 = 10;
	int arr3_2[n3];

	int arr3_3[] = { 10, 20, 30, 40 };

	int arr3_4[6] = { 10, 20, 30, 40 };//remaining elements will be 0



	//[example 4]
	int arr4[5], i;

	cout << "Size of integer in this compiler is "
		<< sizeof(int) << endl;

	for (i = 0; i < 5; i++)
		// The use of '&' before a variable name, yields
		// address of variable.
		cout << "Address arr[" << i << "] is " << &arr4[i]
		<< endl;




	//[example 5]
	int arr5_1[] = { 1, 2, 3, 4, 5 };
	int size = 5;
	myFunction5(arr5_1,5);//calls 1st way

	int arr[] = { 1, 2, 3, 4, 5 };
	myFunction5(arr);//calls 2nd way
	myFunction5(&arr, 5);//calls 3rd way
	myFunction5(arr, 5);

}




