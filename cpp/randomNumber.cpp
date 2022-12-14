//#include <iostream>
//#include <time.h>
//using namespace std;
//
////C++ allows to return an array from a function, similar way C++ allows you to return a pointer from a function
//double* generateTwoRandomSameExecutionNumber() {
//    static double randomNumbers[2];//point to remember is that, it is not good idea to return the address of a local variable to outside of the function, so you would have to define the local variable as static variable.
//    
//    //generates random 2 numbers between 1-10 (each execution, it will show same values)
//    for (int i = 0; i < 2; i++)
//    {
//        randomNumbers[i] = rand() % 10; 
//    }
//    return randomNumbers;
//
//
//    
//
//}
//
//double* generateTwoRandomDifferentExecutionNumber() {
//    //generates random 2 numbers between 1-10 (each execution, it will show different values since it depends on time (seconds))
//    static double randomNumbers[2];
//    srand(time(0));
//
//    for (int i = 0; i < 2; i++)
//    {
//        randomNumbers[i] = rand() % 10;
//    }
//    return randomNumbers;
//}
//
//int main()
//{
//    double *num1;
//    num1 = generateTwoRandomSameExecutionNumber();
//    cout << "First Random Number: "<<num1[0] << ", Second Random Number: "<<num1[1]<<endl;
//
//    double* num2;
//    num2 = generateTwoRandomDifferentExecutionNumber();
//    cout << "First Random Number: " << num2[0] << ", Second Random Number: " << num2[1] << endl;
//}