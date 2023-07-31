//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - unorderedMaps
//
//
//
//
//#include <iostream>
//#include <unordered_map>
//#include <sstream>
//
//using namespace std;
//
//
////Example 3: find freq of every word using unordered_map
//void printFrequencies(const string& str)
//{
//    // declaring map of <string, int> type, 
//    // each word is mapped to its frequency
//    unordered_map<string, int> wordFreq;
//
//    // breaking input into word using 
//    // string stream
//    // Used for breaking words
//    stringstream ss(str);
//
//    // To store individual words
//    string word;
//    while (ss >> word)
//        wordFreq[word]++;
//
//    // now iterating over word, freq pair 
//    // and printing them in <, > format
//    unordered_map<string, int>::iterator p;
//    for (p = wordFreq.begin();
//        p != wordFreq.end(); p++)
//        cout << "(" << p->first << ", " <<
//        p->second << ")\n";
//}
//
//
//
//int main()
//{
//    //Example 1: Unordered Maps in GENERAL
//	std::cout << "Example 1: Unordered Maps in GENERAL\n------------------------\n";
//
//
//
//    // Declaring umap to be of <string, int> type key will be of STRING type and mapped VALUE will be of int type 
//    unordered_map<string, int> umapE1;
//
//    // inserting values by using [] operator
//    umapE1["GeeksforGeeks"] = 10;
//    umapE1["Practice"] = 20;
//    umapE1["Contribute"] = 30;
//
//    // Traversing an unordered map
//    for (auto x1 : umapE1)
//        cout << x1.first << " " <<
//        x1.second << endl;
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
//
//
//
//
//
//    //Example 2: Initialization, indexing, and iteration
//    std::cout << "\n\n\nExample 2: Initialization, indexing, and iteration\n------------------------\n";
//
//    // Declaring umap to be of 
//  // <string, double> type key 
//  // will be of string type and 
//  // mapped value will be of double type
//    unordered_map<string, double> umapE2 = {  //inserting element directly in map
//    {"One", 1},
//    {"Two", 2},
//    {"Three", 3}
//    };
//
//    // inserting values by using [] operator
//    umapE2["PI"] = 3.14;
//    umapE2["root2"] = 1.414;
//    umapE2["root3"] = 1.732;
//    umapE2["log10"] = 2.302;
//    umapE2["loge"] = 1.0;
//
//    // inserting value by insert function
//    umapE2.insert(make_pair("e", 2.718));
//
//    string key2 = "PI";
//
//    // If key not found in map iterator 
//    // to end is returned
//    if (umapE2.find(key2) == umapE2.end())
//        cout << key2 << " not found\n\n";
//
//    // If key found then iterator to that 
//    // key is returned
//    else
//        cout << "Found " << key2 << "\n\n";
//
//    key2 = "lambda";
//    if (umapE2.find(key2) == umapE2.end())
//        cout << key2 << " not found\n";
//    else
//        cout << "Found " << key2 << endl;
//
//    // iterating over all value of umap
//    unordered_map<string, double>::iterator itr2;
//    cout << "\nAll Elements : \n";
//    for (itr2 = umapE2.begin();
//        itr2 != umapE2.end(); itr2++)
//    {
//        // itr works as a pointer to 
//        // pair<string, double> type 
//        // itr->first stores the key part and
//        // itr->second stores the value part
//        cout << itr2->first << "  " <<
//            itr2->second << endl;
//    }
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
//
//
//
//
//    //Example 3: find freq of every word using unordered_map
//    std::cout << "\n\n\nExample 3: find freq of every word using unordered_map\n------------------------\n";
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
//    string str3 = "geeks for geeks geeks quiz "
//        "practice qa for";
//    printFrequencies(str3);
//}