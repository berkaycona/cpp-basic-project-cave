#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class MyClassB {
private:
    int age;
public:
    MyClassB() : age(0) {} 
    MyClassB(int age) : age(age) {}
    int getAge()
    {
        return age;
    }
    void setAge(int ageArg)
    {
        age = ageArg;
    }
};

class MyClassA {
private:
    vector<MyClassB> objB;
    vector<MyClassB*> objBPtr;
public:
     vector<MyClassB>& getObjB()  
    {
        return objB;
    }

    void setObjB( vector<MyClassB>& objBArg )
    {
        objB = objBArg;
    }



    //vector<MyClassB*> getObjBPtr()// return type error
    //vector<MyClassB>* getObjBPtr()// private tan�mlanan de�i�kenle ayn� de�il error'U
    vector<MyClassB*>* getObjBPtr()
    {
        return &objBPtr;
    }
    void setObjBPtr(MyClassB* objBPtrArg)
    {
        objBPtr.push_back(objBPtrArg);
    }
};

void referenceOrCopyClassWithoutConst()
{
    MyClassA objAMain;

    vector<MyClassB> objBMain;
    objBMain.push_back(MyClassB(25));
    objBMain.push_back(MyClassB(30));
    objBMain.push_back(MyClassB(35));

    objAMain.setObjB(objBMain);

    // objBVectorRef ile do�rudan referans �zerinden eri�im sa�lanarak de�i�iklikler objAMain'in objB vekt�r�ne yans�t�l�r
    vector<MyClassB>& objBVectorRef = objAMain.getObjB();
    objBVectorRef[0].setAge(40); // De�i�iklikler objAMain'in objB vekt�r�ne yans�r

    // objBVector �zerinde yap�lan de�i�iklikler objAMain'in objB vekt�r�n� etkilemez
    vector<MyClassB> objBVector = objAMain.getObjB();
    objBVector[1].setAge(50); // De�i�iklikler sadece kopyalanan vekt�r� etkiler, objAMain'in objB vekt�r�n� etkilemez

    cout << "objAMain'in objB vekt�r�:" << endl;
    for (auto& b : objAMain.getObjB()) {
        cout << "Yas: " << b.getAge() << endl;
    }


    //B�YLE DE ER���LEB�L�YOR.
    int a = objAMain.getObjB()[2].getAge();
    int b = objAMain.getObjB().at(2).getAge();
    cout << a << "         " << b;
}

int main()
{
    //referenceOrCopyClassWithoutConst();

    MyClassA objAMain;

    MyClassB* objBMain = new MyClassB();
    objBMain->setAge(12);


    objAMain.setObjBPtr(objBMain);
}




/*

class MyClassB {
private:
    int age;
public:
    int getAge()
    {
        return age;
    }
    void setAge(int ageArg)
    {
        age = ageArg;
    }
};

class MyClassA {
private:
    vector<MyClassB> objB;
    vector<MyClassB*> objBPtr;
public:
    //const vector<MyClassB>& getObjB() const 
    //{
    //    return objB;
    //}

    void setObjB(const vector<MyClassB>& objBArg)
    {
        objB = objBArg;
    }


    const vector<MyClassB> getObjB() const
    {
        return objB;
    }


    vector<MyClassB*>* getObjBPtr()
    {
        return &objBPtr;
    }
    void setObjB(MyClassB* objBPtrArg)
    {
        objBPtr.push_back(objBPtrArg);
    }

};

*/