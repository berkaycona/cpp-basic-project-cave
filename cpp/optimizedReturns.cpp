#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

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
    const vector<MyClassB>& getObjB() const 
    {
        return objB;
    }
    void setObjB(const vector<MyClassB>& objBArg)
    {
        objB = objBArg;
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


int main()
{

}