//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - multimaps
//// CPP Program to demonstrate the implementation of multimap
//#include <iostream>
//#include <iterator>
//#include <map>
//using namespace std;
//
//// Driver Code
//int main()
//{
//	//Example 1: Multisets in GENERAL
//	std::cout << "Example 1: Multisets in GENERAL\n------------------------\n";
//	
//	
//	
//	
//	
//	multimap<int, int> gquiz1; 
//
//	// insert elements in random order
//	gquiz1.insert(pair<int, int>(1, 40));
//	gquiz1.insert(pair<int, int>(2, 30));
//	gquiz1.insert(pair<int, int>(3, 60));
//	gquiz1.insert(pair<int, int>(6, 50));
//	gquiz1.insert(pair<int, int>(6, 10));
//
//	// printing multimap gquiz1
//	multimap<int, int>::iterator itr;
//	cout << "\nThe multimap gquiz1 is : \n";
//	cout << "\tKEY\tELEMENT\n";
//	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//		cout << '\t' << itr->first << '\t' << itr->second
//			<< '\n';
//	}
//	cout << endl;
//
//	// adding elements randomly,
//	// to check the sorted keys property
//	gquiz1.insert(pair<int, int>(4, 50));
//	gquiz1.insert(pair<int, int>(5, 10));
//
//	// printing multimap gquiz1 again
//
//	cout << "\nThe multimap gquiz1 after adding extra "
//		"elements is : \n";
//	cout << "\tKEY\tELEMENT\n";
//	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//		cout << '\t' << itr->first << '\t' << itr->second
//			<< '\n';
//	}
//	cout << endl;
//
//	// assigning the elements from gquiz1 to gquiz2
//	multimap<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
//
//	// print all elements of the multimap gquiz2
//	cout << "\nThe multimap gquiz2 after assign from "
//		"gquiz1 is : \n";
//	cout << "\tKEY\tELEMENT\n";
//	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//		cout << '\t' << itr->first << '\t' << itr->second
//			<< '\n';
//	}
//	cout << endl;
//
//	// remove all elements up to
//	// key with value 3 in gquiz2
//	cout << "\ngquiz2 after removal of elements less than "
//		"key=3 : \n";
//	cout << "\tKEY\tELEMENT\n";
//	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
//	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//		cout << '\t' << itr->first << '\t' << itr->second
//			<< '\n';
//	}
//
//	// remove all elements with key = 4
//	int num;
//	num = gquiz2.erase(4);
//	cout << "\ngquiz2.erase(4) : ";
//	cout << num << " removed \n";
//	cout << "\tKEY\tELEMENT\n";
//	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//		cout << '\t' << itr->first << '\t' << itr->second
//			<< '\n';
//	}
//
//	cout << endl;
//
//	// lower bound and upper bound for multimap gquiz1 key =
//	// 5
//	cout << "gquiz1.lower_bound(5) : "
//		<< "\tKEY = ";
//	cout << gquiz1.lower_bound(5)->first << '\t';
//	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
//		<< endl;
//	cout << "gquiz1.upper_bound(5) : "
//		<< "\tKEY = ";
//	cout << gquiz1.upper_bound(5)->first << '\t';
//	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
//		<< endl;
//
//	return 0;
//}
