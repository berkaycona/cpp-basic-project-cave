//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//#define SIZE 2
//class Car{
//private:
//    char type;
//    double enterTime;
//    double leaveTime;
//    double price; 
//public:
//    //a different initialization way
//    Car(int t, double e, double l) 
//        :type(t), enterTime(e), leaveTime(l) 
//    { 
//    }
//    Car() {
//    }
//    ~Car() {
//        cout << "Destructor Is Executed for the Object"<<endl;
//    }
//
//    void calculate() 
//    {
//        double timediff = leaveTime - enterTime;
//        if (type == 'C') 
//        {
//            if (timediff > 3)
//                price = timediff * 1.50 - 4.5;
//            else
//                price = 0;
//        }
//        else if (type == 'B') 
//        {
//            if (timediff > 2)
//                price = ((timediff - 2) * 2.30) + 2;
//            else
//                price = (double)1 * timediff;
//        }
//    }
//
//
//
//    void setType(char type) {
//        this->type=type;
//    }
//    void setEnterTime(double enterTime) {
//        this->enterTime= enterTime;
//    }
//    void setLeaveTime(double leaveTime) {
//        this->leaveTime=leaveTime;
//    }
//    void setPrice(double price) {
//        this->price= price;
//    }
//
//    char getType(){
//        return type;
//    }
//    double getEnterTime() {
//        return enterTime;
//    }
//    double getLeaveTime() {
//        return leaveTime;
//    }
//    double getPrice() {
//        return price;
//    }
//};
//
//
//int main()
//{
//    int i;
//    Car car[SIZE];
//    char typeMain;
//    double enterTimeMain, leaveTimeMain;
//    for (i = 0; i < SIZE; ++i) {
//        cout << "Enter vehicle type, time entering parking lot, time leaving parking lot: ";
//        cin >> typeMain >> enterTimeMain >> leaveTimeMain;
//        car[i].setType(typeMain); car[i].setEnterTime(enterTimeMain); car[i].setLeaveTime(leaveTimeMain);
//        car[i].calculate();
//    }
//    cout << left << setw(15) << "Vehicle Type" << setw(10) << "Hour"
//        << setw(11) << "Price" << endl;
//    for (i = 0; i < SIZE; ++i) {
//        cout << left << setw(15) << car[i].getType() << setw(10)
//            << car[i].getLeaveTime()-car[i].getEnterTime() << setw(11) << car[i].getPrice() << endl;
//    }
//}