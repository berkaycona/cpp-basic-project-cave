//#pragma warning(disable : 4996)
////Cpp Basics - References
//
//#include <iostream>
//
//
////[3] Returning values by reference
//double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
//
//double& setValues(int i) {
//	return vals[i];   // return a reference to the ith element
//}
//
//
////[3_2]
//int& func() {
//	int q;
//	//! return q; // Compile time error
//	static int x;
//	return x;     // Safe, x lives outside this scope
//}


//int main()
//{

	////[1] References vs Pointers

	//int x1 = 5;
	//int& ref1 = x1; // reference initialized to x
	////int& ref1_1 = NULL; // this is invalid, references cannot be initialized to NULL


	//int x1_2 = 5;
	//int y1_2 = 10;
	//int& ref1_2 = x1_2; // reference initialized to x
	//ref1_2 = y1_2; // x now has the value of y, but ref still refers to x
	//int* ptr1_2 = &x1_2; // pointer initialized to address of x
	//ptr1_2 = &y1_2; // pointer now points to address of y


	//int x1_3 = 5;
	////int& ref1_3; // this is invalid, references must be initialized when created
	//int* ptr1_3; // pointer is created but not initialized
	//ptr1_3 = &x1_3; // pointer is initialized later to address of x






//	//[2] Passing parameters by references
//	int a2 = 100;
//	int b2 = 200;
//
//	std::cout << "Before swap, value of a :" << a2 << std::endl;
//	std::cout << "Before swap, value of b :" << b2 << std::endl;
//
//	swap2(a2, b2);
//
//	std::cout << "After swap, value of a :" << a2 << std::endl;
//	std::cout << "After swap, value of b :" << b2 << std::endl;
//
//
//
//
//
//	//[3] Returning values by reference
//	std::cout << "Value before change" << std::endl;
//	for (int i = 0; i < 5; i++) 
//	{
//		std::cout << "vals[" << i << "] = ";
//		std::cout << vals[i] << std::endl;
//	}
//
//	setValues(1) = 20.23; // change 2nd element
//	setValues(3) = 70.8;  // change 4th element
//
//	std::cout << "Value after change" << std::endl;
//	for (int i = 0; i < 5; i++) 
//	{
//		std::cout << "vals[" << i << "] = ";
//		std::cout << vals[i] << std::endl;
//	}
//
//}
//
////[2] Passing parameters by references
//void swap2(int& x, int& y) {
//
//	int temp;
//	temp = x; /* save the value at address x */
//	x = y;    /* put y into x */
//	y = temp; /* put x into y */
//
//	return;
//}