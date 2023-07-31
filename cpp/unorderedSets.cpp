//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - unorderedSets
//#include <iostream>
//#include <unordered_set>
//using namespace std;
//
//
////Example 2: find duplicate from an array using unordered_set
//void printDuplicates(int arr[], int n)
//{
//	// declaring unordered sets for checking and storing
//	// duplicates
//	unordered_set<int> intSet;
//	unordered_set<int> duplicate;
//
//	// looping through array elements
//	for (int i = 0; i < n; i++) {
//		// if element is not there then insert that
//		if (intSet.find(arr[i]) == intSet.end())
//			intSet.insert(arr[i]);
//
//		// if element is already there then insert into
//		// duplicate set
//		else
//			duplicate.insert(arr[i]);
//	}
//
//	// printing the result
//	cout << "Duplicate item are : ";
//	unordered_set<int>::iterator itr;
//
//	// iterator itr loops from begin() till end()
//	for (itr = duplicate.begin(); itr != duplicate.end();
//		itr++)
//		cout << *itr << " ";
//}
//
//
//
//
//int main()
//{
//	//Example 1: Unordered Sets in GENERAL
//	std::cout << "Example 1: Unordered Sets in GENERAL\n------------------------\n";
//
//
//
//	// declaring set for storing string data-type
//	unordered_set<string> stringSet;
//
//	// inserting various string, same string will be stored
//	// once in set
//
//	stringSet.insert("code");
//	stringSet.insert("in");
//	stringSet.insert("c++");
//	stringSet.insert("is");
//	stringSet.insert("fast");
//
//	string key = "slow";
//
//	// find returns end iterator if key is not found,
//	// else it returns iterator to that key
//
//	if (stringSet.find(key) == stringSet.end())
//		cout << key << " not found" << endl << endl;
//	else
//		cout << "Found " << key << endl << endl;
//
//	key = "c++";
//	if (stringSet.find(key) == stringSet.end())
//		cout << key << " not found\n";
//	else
//		cout << "Found " << key << endl;
//
//	// now iterating over whole set and printing its
//	// content
//	cout << "\nAll elements : ";
//	unordered_set<string>::iterator itr;
//	for (itr = stringSet.begin(); itr != stringSet.end();
//		itr++)
//		cout << (*itr) << endl;
//
//
//
//
//
//
//	//Example 2: find duplicate from an array using unordered_set
//	std::cout << "\n\n\nExample 2: find duplicate from an array using unordered_set\n-----------------------------------\n";
//
//
//
//	int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
//	int n = sizeof(arr) / sizeof(int);
//
//	printDuplicates(arr, n);
//
//
//
//
//}
