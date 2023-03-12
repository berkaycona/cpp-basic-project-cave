//#pragma warning(disable : 4996)
////Cpp Basics - Functions
//
//#include <iostream>
//using namespace std;
//
//
//int add(int x, int y) { return x + y; }// Function that add two numbers
//
//
//int multiply(int x, int y) { return x * y; }// Function that multiplies two numbers
//
//
//// Function that takes a pointer to a function
//int functionPass(int x, int y, int (*func)(int, int))
//{
//    return func(x, y);
//}
//
//int main()
//{
//    cout << "Addition of 20 and 10 is ";
//    cout << functionPass(20, 10, &add) << '\n';
//
//    cout << "Multiplication of 20"
//        << " and 10 is ";
//    cout << functionPass(20, 10, &multiply) << '\n';
//
//}