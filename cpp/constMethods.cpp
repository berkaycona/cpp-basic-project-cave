//#include <iostream>
//
////[1]
//class Test {
//    int value;
//
//public:
//    // Constructor
//    Test(int v = 0)
//    {
//        value = v;
//    }
//
//    // We get compiler error if we add a line like "value = 100;" in this function.
//    int getValue() const
//    {
//        return value;
//    }
//
//    // a nonconst function trying to modify value
//    void setValue(int val) 
//    {
//        value = val;
//    }
//};
//
//
//
////[2]
//// Function foo() with variable const int
//void foo(const int y)
//{
//    // y = 6; const value can't be change
//    std::cout<<"[in the const variable parameter function] y variable can't be changed since it is const: " << y << std::endl;
//}
//
//// Function foo() with variable int
//void foo1(int y)
//{
//    // Non-const value can be change
//    y = 5;
//    std::cout << "[in the non-const variable parameter function] y variable can be changed since it is not const: " << y<<std::endl;
//}
//
//
//
//
////[3]
//const int foo3(int y)
//{
//    y--;
//    return y;
//}
//
////[4]
//const int foo4(const int y)
//{
//    // y = 9; it'll give CTE error as y is const var its value can't be change
//    return y;
//}
//
//int main()
//{
//    //[1] CONSTANT FUNCTIONS & OBJECTS
//    
//    std::cout << "Const Methods & Objects" << std::endl << "----------------------------" << std::endl;
//
//    Test t(20); // Object of the class T
//    
//    std::cout << t.getValue() << std::endl; // non-const object invoking const function, no error
//
//    const Test t_const(10); // const object
//
//    std::cout << t_const.getValue() << std::endl; // const object invoking const function, no error
//
//    // const object invoking non-const function, CTE
//    // t_const.setValue(15);
//
//    t.setValue(12);// non-const object invoking non-const function, no error
//
//    std::cout << t.getValue() << std::endl;
//
//
//    //[2] CONSTANT FUNCTION PARAMETERS AND RETURN TYPE
//    std::cout << std::endl << std::endl << "Constant Function Parameters And Return Type:" << std::endl << "-----------------------------------" << std::endl;
//    int x2 = 9;
//    const int z2 = 10;
//
//    foo(z2);
//    foo1(x2);
//
//
//
//    //[3] FOR CONST RETURN TYPE
//    std::cout << std::endl << std::endl << "For const Return Type:" << std::endl << "-------------------------" << std::endl;
//    int x3 = 9;
//    const int z3 = 10;
//    std::cout << foo3(x3) << std::endl << foo3(z3);
//    
//    int t7=foo3(x3);
//    t7++;
//    std::cout<<t7;//this can be done, if a const value is returned from a function and assigned to a non-const variable in the main function, then the variable becomes non-const, and its value can be changed.
//
//    const int a = 9;
//    int b = a;
//    b--;//can be done, When a const int value is passed to a non-const int parameter, a temporary non-const copy of the const int value is created, which can be passed to the non-const int parameter of the function.
//
//
//
//
//
//    //[4] FOR CONST RETURN TYPE AND CONST PARAMETER
//    std::cout << std::endl << std::endl << "For const return type and const parameter:" << std::endl << "-------------------------" << std::endl;
//
//    int x4 = 9;
//    const int z4 = 10;
//    std::cout<< foo4(x4) << std::endl<< foo4(z4);
//
//
//}
//
//
