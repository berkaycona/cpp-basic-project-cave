//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - linearProbing
//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//using namespace std;
//const int TABLE_SIZE = 5;
//
//
//class HashNode
//{
//public:
//    int key;
//    int value;
//    HashNode(int key, int value)
//    {
//        this->key = key;
//        this->value = value;
//    }
//};
//
//
//class DeletedNode :public HashNode
//{
//private:
//    static DeletedNode* entry;
//    DeletedNode() :HashNode(-1, -1)
//    {}
//public:
//    static DeletedNode* getNode()
//    {
//        if (entry == NULL)
//            entry = new DeletedNode();
//        return entry;
//    }
//};
//DeletedNode* DeletedNode::entry = NULL;
//
//
//
//class HashMap
//{
//private:
//    HashNode** htable;
//public:
//    HashMap()
//    {
//        htable = new HashNode * [TABLE_SIZE];
//        for (int i = 0; i < TABLE_SIZE; i++)
//        {
//            htable[i] = NULL;
//        }
//    }
//
//    ~HashMap()
//    {
//        for (int i = 0; i < TABLE_SIZE; i++)
//        {
//            if (htable[i] != NULL && htable[i] != DeletedNode::getNode())
//                delete htable[i];
//        }
//        delete[] htable;
//    }
//    
//
//
//    int HashFunc(int key)
//    {
//        return key % TABLE_SIZE;
//    }
//    /*
//     * Insert Element at a key
//     */
//    void Insert(int key, int value)
//    {
//        int hash_val = HashFunc(key);
//        int init = -1;
//        int deletedindex = -1;
//        while (hash_val != init && (htable[hash_val]
//            == DeletedNode::getNode() || htable[hash_val]
//            != NULL && htable[hash_val]->key != key))
//        {
//            if (init == -1)
//                init = hash_val;
//            if (htable[hash_val] == DeletedNode::getNode())
//                deletedindex = hash_val;
//            hash_val = HashFunc(hash_val + 1);
//        }
//        if (htable[hash_val] == NULL || hash_val == init)
//        {
//            if (deletedindex != -1)
//                htable[deletedindex] = new HashNode(key, value);
//            else
//                htable[hash_val] = new HashNode(key, value);
//        }
//        if (init != hash_val)
//        {
//            if (htable[hash_val] != DeletedNode::getNode())
//            {
//                if (htable[hash_val] != NULL)
//                {
//                    if (htable[hash_val]->key == key)
//                        htable[hash_val]->value = value;
//                }
//            }
//            else
//                htable[hash_val] = new HashNode(key, value);
//        }
//    }
//    /*
//     * Search Element at a key
//     */
//    int Search(int key)
//    {
//        int hash_val = HashFunc(key);
//        int init = -1;
//        while (hash_val != init && (htable[hash_val]
//            == DeletedNode::getNode() || htable[hash_val]
//            != NULL && htable[hash_val]->key != key))
//        {
//            if (init == -1)
//                init = hash_val;
//            hash_val = HashFunc(hash_val + 1);
//        }
//        if (htable[hash_val] == NULL || hash_val == init)
//        {
//            return -1;
//        }
//            
//        else
//            return htable[hash_val]->value;
//    }
//    /*
//     * Remove Element at a key
//     */
//    void Remove(int key)
//    {
//        int hash_val = HashFunc(key);
//        int init = -1;
//        while (hash_val != init && (htable[hash_val]
//            == DeletedNode::getNode() || htable[hash_val]
//            != NULL && htable[hash_val]->key != key))
//        {
//            if (init == -1)
//                init = hash_val;
//            hash_val = HashFunc(hash_val + 1);
//        }
//        if (hash_val != init && htable[hash_val] != NULL)
//        {
//            delete htable[hash_val];
//            htable[hash_val] = DeletedNode::getNode();
//        }
//    }
//};
//
//
//int main()
//{
//    HashMap hashMap;
//
//    hashMap.Insert(1, 42);
//    hashMap.Insert(2, 78);
//    hashMap.Insert(7, 91);
//
//    int value;
//    if (hashMap.Search(2))
//        std::cout << "Value at key 2: " << hashMap.Search(2) << std::endl; // Output: Value at key 2: 78
//    else
//        std::cout << "Key 2 not found." << std::endl;
//
//    hashMap.Remove(1);
//
//    if (hashMap.Search(1) != -1)
//        std::cout << "Value at key 1: " << hashMap.Search(1) << std::endl; // This will not be printed as the key was removed.
//    else
//        std::cout << "Value Cannot Be Found!";
//    return 0;
//
//    /*HashMap hash;
//    int key, value;
//    int choice;
//    while (1)
//    {
//        cout << "\n----------------------" << endl;
//        cout << "Operations on Hash Table" << endl;
//        cout << "\n----------------------" << endl;
//        cout << "1.Insert element into the table" << endl;
//        cout << "2.Search element from the key" << endl;
//        cout << "3.Delete element at a key" << endl;
//        cout << "4.Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter element to be inserted: ";
//            cin >> value;
//            cout << "Enter key at which element to be inserted: ";
//            cin >> key;
//            hash.Insert(key, value);
//            break;
//        case 2:
//            cout << "Enter key of the element to be searched: ";
//            cin >> key;
//            if (hash.Search(key) == -1)
//            {
//                cout << "No element found at key " << key << endl;
//                continue;
//            }
//            else
//            {
//                cout << "Element at key " << key << " : ";
//                cout << hash.Search(key) << endl;
//            }
//            break;
//        case 3:
//            cout << "Enter key of the element to be deleted: ";
//            cin >> key;
//            hash.Remove(key);
//            break;
//        case 4:
//            exit(1);
//        default:
//            cout << "\nEnter correct option\n";
//        }
//    }*/
//    //return 0;
//}