//#pragma warning(disable : 4996)
////Cpp Polymorphism - Function Overloading Extended 1
//#include <iostream>
//using namespace std;
//
//class MyClass {
//    int x;
//public:
//    MyClass(int val) : x(val) {}
//
//    // A const function that promises not to modify the object
//    void print() const {
//        cout << "print() const: x = " << x << endl;
//    }
//
//    // A non-const function that could modify the object
//    void print() {
//        x *= 2;
//        cout << "print() non-const: x = " << x << endl;
//    }
//};
//
//void process(MyClass& obj) {
//    cout << "process() for lvalue" << endl;
//    obj.print();
//}
//
//void process(MyClass&& obj) {
//    cout << "process() for rvalue" << endl;
//    obj.print();
//}
//
//int main()
//{
//    MyClass obj1(10);
//    obj1.print();  // non-const version is called
//
//    const MyClass obj2(20);
//    obj2.print();  // const version is called
//
//    process(obj1);  // lvalue version is called
//
//    process(MyClass(30));  // rvalue version is called
//
//    return 0;
//}
//
//
//
///*In this extended example, the MyClass::print function is overloaded based on constness.
//The const version is called when the object is const, and the non - const version is called otherwise.*/
//
///*The process function is overloaded to take either an lvalue reference or an rvalue reference. 
//When called with a named variable (obj1), the lvalue version is called. 
//When called with a temporary object (MyClass(30)), the rvalue version is called.*/
//
