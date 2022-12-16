//#include <iostream>
//#include <iomanip>
//using namespace std;
//#define SIZE 2
//class VideoGames {
//private:
//    string type;
//    string name;
//    double price;
//    bool buy;
//
//public:
//    VideoGames() {
//        type = "";
//        name = "";
//        price = 0.0;
//        buy = false;
//    }
//    ~VideoGames() {
//        cout << "Destructor Is Executed."<<endl;
//    }
//    void setVideoGames(string type, string name,double price) {
//        this->type = type;
//        this->name = name;
//        this->price = price;
//    }
//    void Check() {
//        if (type == "action")
//        {
//            price = price * 0.9;
//
//        }
//        else if (type == "strategy")
//        {
//            price = price * 0.8;
//        }
//        else if (type == "sport")
//        {
//            price = price * 0.7;
//        }
//        else if (type == "adventure")
//        {
//            price = price * 0.75;
//        }
//        
//        if (price <= 100)
//        {
//            buy = true;
//        }
//        else 
//        { 
//            buy = false; 
//        }
//    }
//    string getType() 
//    {
//        return type;
//    }
//    string getName() 
//    {
//        return name;
//    }
//    double getPrice() 
//    {
//        return price;
//    }
//    bool getBuy() 
//    {
//        return buy;
//    }
//};
//
//
//
//
//int main()
//{
//    int i;
//    string type;
//    string name;
//    double oldprice[SIZE];
//
//
//    VideoGames game[SIZE];
//    for (i = 0; i < SIZE; ++i)
//    {
//        cout << "Enter the Video Game's Type: ";
//        cin >> type;
//        
//        cout << "Enter the Video Game's Name: ";
//        cin >> name;
//        
//        cout << "Enter the Video Game's Price: ";
//        cin >> oldprice[i];
//
//        game[i].setVideoGames(type, name, oldprice[i]);
//        
//        game[i].Check();
//    }
//
//    //With Appropriate Line Spaces thanks to iomanip
//    cout << left << setw(15) << "Game Type" << setw(22) << "Name"<< setw(11) << "Price" << setw(11) << "New Price" << setw(11) << "Buy" << endl;
//    for (i = 0; i < SIZE; ++i) 
//    {
//        cout << left << setw(15) << game[i].getType() << setw(22)
//            << game[i].getName() << setw(11) << oldprice[i] << setw(11) << game[i].getPrice() << setw(11) << game[i].getBuy() << endl;
//    }
//}