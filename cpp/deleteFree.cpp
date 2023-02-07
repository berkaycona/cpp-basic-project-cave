//// CPP program to demonstrate the correct and incorrect
//// usage of delete operator
//#include <cstdlib>
//#include <iostream>
//using namespace std;
//
//// Driver Code
//int main()
//{
//    int deleteVar;
//    int* ptr1 = &deleteVar;
//    int* ptr2 = (int*)malloc(sizeof(int));
//    int* ptr3 = new int;
//    int* ptr4 = NULL;
//
//    // delete Should NOT be used like below because x is
//    // allocated on stack frame
//    delete ptr1;
//
//    // delete Should NOT be used like below because x is
//    // allocated using malloc()
//    delete ptr2;
//
//    // Correct uses of delete
//    delete ptr3;
//    delete ptr4;
//
//    getchar();
//
//
//
//
//
//    int* ptr5 = NULL;
//    int* ptr6;
//    int freeVar = 5;
//    ptr6 = &freeVar;
//    int* ptr7 = (int*)malloc(5 * sizeof(int));
//
//    // Correct uses of free()
//    free(ptr5);
//    free(ptr7);
//
//    // Incorrect use of free()
//    free(ptr2);
//
//}