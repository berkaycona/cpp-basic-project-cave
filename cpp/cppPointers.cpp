//#pragma warning(disable : 4996)
////Cpp Basics - Pointers
//
//#include <iostream>
//using namespace std;
//


////7.2
//void increment_all(int* start, int* stop)
//{
//	int* current = start;
//	while (current != stop) {
//		++(*current);  // increment value pointed
//		++current;     // increment pointer
//	}
//}
//
//void print_all(const int* start, const int* stop)
//{
//	const int* current = start;
//	while (current != stop) {
//		cout << *current << '\n';
//		++current;     // increment pointer
//	}
//}

	////[10] Void Pointers

	//void increase(void* data, int psize)
	//{
	//	if (psize == sizeof(char))
	//	{
	//		char* pchar; pchar = (char*)data; ++(*pchar);
	//	}
	//	else if (psize == sizeof(int))
	//	{
	//		int* pint; pint = (int*)data; ++(*pint);
	//	}
	//}


	
	
	
	
	
//	//[12] Pointers to functions
//int addition(int a, int b)
//{
//	return (a + b);
//}
//
//int subtraction(int a, int b)
//{
//	return (a - b);
//}
//
//int operation(int x, int y, int (*functocall)(int, int))
//{
//	int g;
//	g = (*functocall)(x, y);
//	return (g);
//}




//int main()
//{
	
	
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






	////[5] Pointer Initialization
	////1 
	//int myvar;
	//int* myptr = &myvar;

	////2
	//int myvar2;
	//int* myptr2;
	//myptr2 = &myvar2;

	////3 value of other pointer
	//int myvar;
	//int* foo = &myvar;
	//int* bar = foo;





	////[6]Pointer Arithmetics
	//int a[5] = { 10,20,30,40,50 };
	//int* p;
	//p = a;


	//int b=*p++;   // same as *(p++): increment pointer, and dereference unincremented address

	//int c=*++p;   // same as *(++p): increment pointer, and dereference incremented address

	//int d=++* p;   // same as ++(*p): dereference pointer, and increment the value it points to

	//int e=(*p)++; // dereference pointer, and post-increment the value it points to 

	//int* q;

	//*p++ = *q++;





	////[7]Pointers and Const
	////7.1
	//int x7_1;
	//int y7_1 = 10;
	//const int* p7_1 = &y7_1;
	//x7_1 = *p7_1;// ok: reading p
	////*p7_1 = x7_1;// error: modifying p, which is const-qualified 


	////7.2
	//int numbers[] = { 10,20,30 };
	//increment_all(numbers, numbers + 3);
	//print_all(numbers, numbers + 3);


	////7.3
	//int x7_3;
	//int* p1_7_3 = &x7_3;  // non-const pointer to non-const int
	//const int* p2_7_3 = &x7_3;  // non-const pointer to const int
	//int* const p3_7_3 = &x7_3;  // const pointer to non-const int
	//const int* const p4_7_3 = &x7_3;  // const pointer to const int 


	//const int* p2a7_3 = &x7_3;  //      non-const pointer to const int
	//int const* p2b_7_3 = &x7_3;  // also non-const pointer to const int 




	////[8]Pointers and string literals

	//const char* foo = "hello";


	//*(foo + 4)// can also be written as foo[4]
	




	////[9] Pointers to Pointers

	//char a9;
	//char* b9;
	//char** c9;
	//a9 = 'z';
	//b9 = &a9;
	//c9 = &b9;

	

	////[10] Void Pointers
	//char a10 = 'x';
	//int b10 = 1602;
	//increase(&a10, sizeof(a10));
	//increase(&b10, sizeof(b10));
	//cout << a10 << ", " << b10 << endl;

	


	////[11] Invalid Pointersand Null Oointers
	//11.1
	//int* p11_1; // uninitialized pointer (local variable)

	//int myarray11_1[10];
	//int* q11_1 = myarray11_1 + 20; // element out of bounds 

	////11.2
	//int* p11_2 = 0;
	//int* q11_2 = nullptr;


	////11.3
	//int* r = NULL;




	////[12] Pointers to functions
	//int m12, n12;
	//int (*minus)(int, int) = subtraction;

	//m12 = operation(7, 5, addition);
	//n12 = operation(20, m12, minus);
	//cout << n12;

//}


