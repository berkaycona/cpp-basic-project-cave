#pragma warning(disable : 4996)

#include <iostream>


//[1-Overload the * operator]
// Multiplication of two fractions
#include <iostream>
using namespace std;

class Frac {
private:
    int a;
    int b;

public:
    Frac() : a(0), b(0) {}

    void in() {
        cout << "Enter the Numerator : ";
        cin >> a;
        cout << "Enter the Denominator : ";
        cin >> b;
    }

    // Overload the * operator
    Frac operator * (const Frac& obj) {
        Frac temp;
        temp.a = a * obj.a;
        temp.b = b * obj.b;

        return temp;
    }

    void out() {
        cout << "The Fraction Is  " << a << "/ " << b;
    }
};


//[2-Overload the prefix decrement operator]
class Prefx {
private:
    int a;
    int b;

public:
    Prefx() : a(0), b(0) {}

    void in() {
        cout << "Enter the First Number : ";
        cin >> a;
        cout << "Enter the Second Number : ";
        cin >> b;
    }

    // Overload the prefix decrement operator
    void operator-- () {
        a = --a;
        b = --b;
    }

    void out() {
        cout << "The Decremented Elements of the Object Are:  " << endl << a << " and " << b;
    }
};



//[3-Overloading the NOT (!)  operator]
class NotOp {
private:
    int a;
    bool b;

public:
    NotOp() : a(0), b(true) {}

    void in() {
        cout << "Enter the First Number : ";
        cin >> a;
        cout << "Enter True or False : ";
        cin >> b;
    }

    // Overloading the NOT (!)  operator
    void operator ! () {
        a = !a;
        b = !b;
    }

    void out() {
        cout << "Output: " << endl << a << endl << b;
    }
};





int main() {

    //[1-Overload the * operator]
    Frac F1, F2, result1;

    cout << "Enter the First Fraction:" << endl << "--------------------" << endl;
    F1.in();

    cout << "Enter the Second Fraction"<<endl<<"--------------------"<<endl;
    F2.in();

    // complex1 calls the operator function
    // complex2 is passed as an argument to the function
    result1 = F1 * F2;
    result1.out();




    //[2-Overload the prefix decrement operator]
    Prefx obj2;
    obj2.in();
    --obj2;
    obj2.out();




    //[3-Overloading the NOT (!)  operator]
    NotOp obj3;
    !obj3;
    obj3.out();
    return 0;



}