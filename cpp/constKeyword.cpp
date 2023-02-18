//#include <iostream>
//
//
//int main()
//{
//    //[1] HOW TO DECLARE CONSTANTS
// 
//    std::cout << "How to Declare Constants" << std::endl << "-----------------------" << std::endl;
//    // const int x;  CTE error
//    // x = 9;   CTE error
//    const int y1 = 10;
//    std::cout <<"Value of y is: " << y1;
//
//
//    //[2] CONST KEYWORD WITH POINTER VARIABLES
//    
//    //[2.1]
//    std::cout <<std::endl << std::endl << "When the pointer variable point to a const value:" << std::endl << "----------------------------------------" << std::endl;
//    int x2{ 10 };
//    char y2{ 'M' };
//
//    const int* i2 = &x2;
//    const char* j2 = &y2;
//    //**Value of x and y can be altered, they are not constant variables
//    x2 = 9;
//    y2 = 'A';
//
//    //**Values being pointed to cannot be modified through the pointer. However, the variables x2 and y2 themselves can still be modified directly, as they are not declared as const.
//    
//    std::cout <<"i and j constant variable's values are: "<< * i2 << " " << *j2;
//    //i2 = &x2; can be done without CTE here in contrast to 2.2
//
//
//
//    //[2.2]
//    std::cout << std::endl << std::endl << "When the const pointer variable point to the value:" << std::endl << "----------------------------------------" << std::endl;
//    int a2 = 5;    char b2 = 'A';
//    int z2 = 6;    char p2 = 'C';
//
//    int* const k2 = &a2;
//    char* const l2 = &b2;
//
//    // **The values that is stored at the memory location can modified even if we modify it through the pointer itself
//    // **No CTE error
//    *k2 = 10;
//    *l2 = 'D';
//
//    std::cout << *k2 << " and " << *l2
//        << std::endl;
//    std::cout << k2 << " and " << l2;
//
//
//    // This below code would be CTE because pointer variable is const type so the address pointed by the pointer can't be changed
//    // k2 = &z2;
//    // l2 = &p2;
//
//
//    
//    //[2.3]
//    std::cout << std::endl << std::endl << "When const pointer pointing to a const variable:" << std::endl << "----------------------------------------" << std::endl;
//
//    int x3{ 9 };
//
//    const int* const i3 = &x3;
//
//    // *i3=10;  
//    // The above statement will give CTE. Once Ptr(*i3) value is assigned, later it can't be modified(Error)
//
//    char y3{ 'A' };
//
//    const char* const j3 = &y3;
//
//    // *j3='B';
//    // The above statement will give CTE Once Ptr(*j3) value is assigned, later it can't be modified(Error)
//
//   
//    std::cout << *i3 << " and " << *j3;
//}