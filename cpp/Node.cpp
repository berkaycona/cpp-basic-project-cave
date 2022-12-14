//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//
//using namespace std;
//
//class Node {
//public:
//    double x;
//    double y;
//    vector <Node*> children; //Node can have many children
//    Node* parent; //However, it can have only one parent
//
//    Node() {
//        x = 0;
//        y = 0;
//        parent = NULL;
//        //no need to initialize the vector. Since it is a class type, its default constructor is called.
//    }
//
//    ~Node() {
//        cout << "Deleting" << endl;
//        delete parent;
//
//        //Deleting a vector with object type
//        for (int i = 0; i < children.size(); i++)
//        {
//            delete children[i];
//            cout << "Deleting" << endl;
//
//        }
//    }
//};
//
//int main()
//{
//    Node* start = new Node();
//    delete start;
//}