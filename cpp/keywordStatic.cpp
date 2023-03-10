//#pragma warning(disable : 4996)
////Cpp Basics - Static Keyword
//
//#include <iostream>
//#include <string>
//using namespace std;
//
////[1] Static Variables inside Functions
//void counter1()
//{
//    static int count = 0;
//    cout << count++<<endl;
//}
//
//
////[2] Static Class Objects
//class Abc
//{
//    int i;
//public:
//    Abc()
//    {
//        i = 0;
//        cout << "constructor";
//    }
//    ~Abc()
//    {
//        cout << "destructor";
//    }
//};
//
//void f2()
//{
//    static Abc obj;
//}
//
//
//
//
////[3] Static Data Member in Class
//class X3
//{
//public:
//    static int i;
//    X3()
//    {
//        // construtor
//    };
//};
//int X3::i = 1;
//
//
//
//
//
////[4]Static Member Functions
//class X4
//{
//public:
//    static void f4()
//    {
//        // statement
//    }
//};
//
//int main()
//{
//	//[1] Static Variables inside Functions
//    cout << "[1] Static Variables inside Functions" << endl;
//    for (int i = 0; i < 5; i++)
//    {
//        counter1();
//    }
//
//
//
//    cout << endl;
//
//
//    //[2] Static Class Objects
//    cout << "[2] Static Class Objects" << endl;
//    int x2 = 0;
//    if (x2 == 0)
//    {
//        f2();
//    }
//    cout << "END";
//
//
//
//    cout << endl;
//
//
//
//    //[3] Static Data Member in Class
//    X3 obj3;
//    cout << obj3.i;   // prints value of i
//
//
//
//
//    cout << endl;
//
//
//
//    //[4]Static Member Functions
//    X4::f4();   // calling member function directly with class name
//
//
//
//    return 0;
//}