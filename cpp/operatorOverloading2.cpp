//#pragma warning(disable : 4996)
////Operator Overloading 2 - Basic Operator Overloads
// 
//#include <iostream>
//
//
////[1-Overload the * operator]
//// Multiplication of two fractions
//#include <iostream>
//using namespace std;
//
//class Frac {
//private:
//    int a;
//    int b;
//
//public:
//    Frac() : a(0), b(0) {}
//
//    void in() {
//        cout << "Enter the Numerator : ";
//        cin >> a;
//        cout << "Enter the Denominator : ";
//        cin >> b;
//    }
//
//    // Overload the * operator
//    Frac operator * (const Frac& obj) {
//        Frac temp;
//        temp.a = a * obj.a;
//        temp.b = b * obj.b;
//
//        return temp;
//    }
//
//    void out() {
//        cout << "The Fraction Is  " << a << "/ " << b;
//    }
//};
//
//
////[2-Overload the prefix decrement operator]
//class Prefx {
//private:
//    int a;
//    int b;
//
//public:
//    Prefx() : a(0), b(0) {}
//
//    void in() {
//        cout << "Enter the First Number : ";
//        cin >> a;
//        cout << "Enter the Second Number : ";
//        cin >> b;
//    }
//
//    // Overload the prefix decrement operator
//    void operator-- () {
//        a = --a;
//        b = --b;
//    }
//
//    void out() {
//        cout << "The Decremented Elements of the Object Are:  " << endl << a << " and " << b;
//    }
//};
//
//
//
////[3-Overloading the NOT (!)  operator]
//class NotOp {
//private:
//    int a;
//    bool b;
//
//public:
//    NotOp() : a(0), b(true) {}
//
//    void in() {
//        cout << "Enter the First Number : ";
//        cin >> a;
//        cout << "Enter True or False : ";
//        cin >> b;
//    }
//
//    // Overloading the NOT (!)  operator
//    void operator ! () {
//        a = !a;
//        b = !b;
//    }
//
//    void out() {
//        cout << "Output: " << endl << a << endl << b;
//    }
//};
//
//
//
//
//
////[4-Unary Operator Overload]
//class UnaryOverload
//{
//    int hr, min;
//public:
//    void in()
//    {
//        cout << "\n Enter the time: \n";
//        cin >> hr;
//        cout << endl;
//        cin >> min;
//    }
//    void operator++(int) //Overload Unary Increment
//    {
//        hr++;
//        min++;
//    }
//    void operator--(int) //Overload Unary Decrement
//    {
//        hr--;
//        min--;
//    }
//
//    void out()
//    {
//        cout << "\nTime is " << hr << "hr " << min << "min";
//
//    }
//};
//
//
//
//
//
//
////[5-Overload the + operator]
//class Time {
//private:
//    int hour;
//    int minute;
//
//public:
//    Time() : hour(0), minute(0) {}
//
//    void in() {
//        cout << "Enter the Time: ";
//        cin >> hour;
//        cin >> minute;
//    }
//
//    // Overload the + operator
//    Time operator + (const Time& obj) {
//        Time temp;
//        temp.hour = hour + obj.hour;
//        temp.minute = minute + obj.minute;
//        if (temp.minute >= 60)
//        {
//            temp.hour += 1;
//            temp.minute -= 60;
//        }
//        if (temp.hour > 24)
//            temp.hour = 1;
//        return temp;
//    }
//
//    void out() {
//        cout << "Time is " << hour << "Hrs " << minute << "Min";
//    }
//};
//
//
//
//
//
////[6-Overload ++ when used as prefix]
//class Count
//{
// private:
// int value;
// public:
// Count() : value(5) {}
//
// //overload ++ when used as prefix
// void operator ++ ()
// {
// ++value;
// }
// void display()
// {
// cout << "Count: " << value << endl;
// }
//};
//
//
//
//
//
//
//
////[7-Assignment(=) Operator Overloading]
//class Complex {
//private:
//    int real, img; 
//
//public:
//    Complex(int r, int i)
//    {
//        real = r;
//        img = i;
//    }
//
//    // This is automatically called when '=' operator is used between C1 and C2.
//    void operator=(const Complex& C)
//    {
//        real = C.real;
//        img = C.img;
//    }
//
//    void print() { cout << real << "+i" << img << endl; }
//};
//
//
//
//
//
//
//
//
//
//
//int main() {
//
//    //[1-Overload the * operator]
//    Frac F1, F2, result1;
//
//    cout << "Enter the First Fraction:" << endl << "--------------------" << endl;
//    F1.in();
//
//    cout << "Enter the Second Fraction"<<endl<<"--------------------"<<endl;
//    F2.in();
//
//    // complex1 calls the operator function
//    // complex2 is passed as an argument to the function
//    result1 = F1 * F2;
//    result1.out();
//
//
//
//
//    //[2-Overload the prefix decrement operator]
//    Prefx obj2;
//    obj2.in();
//    --obj2;
//    obj2.out();
//
//
//
//
//    //[3-Overloading the NOT (!)  operator]
//    NotOp obj3;
//    !obj3;
//    obj3.out();
//
//
//
//
//    //[4-Unary Operator Overload]
//    UnaryOverload obj4;
//    obj4.in();
//    obj4++;
//    cout << endl<<endl<<"After Incrementing : ";
//    obj4.out();
//    obj4--;
//    obj4--;
//    cout << endl << endl << "After Decrementing : ";
//    obj4.out();
//    
//
//
//
//
//    //[5-Overload the + operator]
//    Time T1, T2, result;
//
//    cout << "Enter first time in hours and minutes one by one :\n";
//    T1.in();
//
//    cout << "Enter second time in hours and minutes one by one :\n";
//    T2.in();
//
//    // T1 calls the operator function
//    // T2 is passed as an argument to the function
//    result = T1 + T2;
//    result.out();
//
//
//
//
//
//    //[6-Overload ++ when used as prefix]
//    Count count1;
//    //call the “void operator ++ ()” function
//    ++count1;
//    count1.display();
//
//
//
//
//
//
//    //[7-Assignment(=) Operator Overloading]
//    Complex C1(2, 3), C2(4, 6);
//
//    cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR" << endl;
//    cout << "C1 complex number: ";
//
//    C1.print();
//
//    cout << "C2 complex number: ";
//
//    C2.print();
//
//    // overloading assignment operator to copy values
//    C1 = C2;
//
//    cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
//    cout << "C1 complex number: ";
//
//    C1.print();
//
//    cout << "C2 complex number: ";
//
//    C2.print();
//
//
//    return 0;
//}