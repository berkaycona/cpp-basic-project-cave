//#include<iostream>
//using namespace std;
//class B; //Forward declaration.
//class A
//{
//    int valueA;
//public:
//    void set(int ArgValueA)
//    {
//        valueA = ArgValueA;
//    }
//    friend void max(A, B); 
//};
//
//class B
//{
//    int valueB;
//public:
//    void set(int ArgValueB)
//    {
//        valueB = ArgValueB;
//    }
//    friend void max(A, B);
//};
//
//void max(A ArgValueA, B ArgValueB)
//{
//    if (ArgValueA.valueA >= ArgValueB.valueB)
//        std::cout <<"A Value is Bigger than B With: "<< ArgValueA.valueA<<">" << ArgValueB.valueB << std::endl;
//    else
//        std::cout << "B Value is Bigger than A With: " << ArgValueB.valueB <<">"<< ArgValueA.valueA << std::endl;
//}
//
//int main()
//{
//    A a;
//    B b;
//    a.set(10);
//    b.set(20);
//    max(a, b);
//    return 0;
//}