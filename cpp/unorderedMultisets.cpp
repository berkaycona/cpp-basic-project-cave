//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - unorderedMultisets
//
//// C++ program to demonstrate various function
//// of unordered_multiset
//
//#include <stdio.h>
//#include <unordered_set>
//#include <iostream>
//
//
////Example 1: Unordered Multisets in GENERAL
//// making typedef for short declaration
//typedef std::unordered_multiset<int>::iterator umit;
//
////Example 1: Unordered Multisets in GENERAL
//// Utility function to print unordered_multiset
//void printUset(std::unordered_multiset<int> ums)
//{
//	// begin() returns iterator to first element of set
//	umit it = ums.begin();
//	for (; it != ums.end(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//}
//
//
//
//
//
////Example 2: delete one copy from unordered set
//void printUset2(std::unordered_multiset<int> ums)
//{
//	// begin() returns iterator to first element of
//	// set
//	umit it = ums.begin();
//	for (; it != ums.end(); it++)
//		std::cout << *it << " ";
//	std::cout << std::endl;
//}
//
//
////Example 2: delete one copy from unordered set
////  function to delete one copy of val from set
//void erase_one_entry(std::unordered_multiset<int>& ums,
//	int val)
//{
//	//  find returns iterator to first position
//	umit it = ums.find(val);
//
//	//  if element is there then erasing that
//	if (it != ums.end())
//		ums.erase(it);
//}
//
//int main()
//{
//	//Example 1: Unordered Multisets in GENERAL
//	std::cout << "Example 1: Unordered Multisets in GENERAL\n------------------------\n";
//
//
//
//
//	// empty initialization
//	std::unordered_multiset<int> ums1;
//
//	// Initialization by intializer list
//	std::unordered_multiset<int> ums2(
//		{ 1, 3, 1, 7, 2, 3, 4, 1, 6 });
//
//	// Initialization by assignment
//	ums1 = { 2, 7, 2, 5, 0, 3, 7, 5 };
//
//	// empty() function return true if set is empty
//	// otherwise false
//	if (ums1.empty())
//		std::cout << "unordered multiset 1 is empty\n";
//	else
//		std::cout << "unordered multiset 1 is not empty\n";
//
//	// size() function returns total number of elements
//	// in data structure
//	std::cout << "The size of unordered multiset 2 is : "
//		<< ums2.size() << std::endl;
//
//	printUset(ums1);
//
//	ums1.insert(7);
//
//	printUset(ums1);
//
//	int val = 3;
//
//	// find function returns iterator to first position
//	// of val, if exist otherwise it returns iterator
//	// to end
//	if (ums1.find(val) != ums1.end())
//		std::cout << "unordered multiset 1 contains " << val
//		<< std::endl;
//	else
//		std::cout << "unordered multiset 1 does not contains "
//		<< val << std::endl;
//
//	// count function returns total number of occurrence in
//	// set
//	val = 5;
//	int cnt = ums1.count(val);
//	std::cout << val << " appears " << cnt
//		<< " times in unordered multiset 1 \n";
//
//	val = 9;
//
//	// if count return >0 value then element exist
//	// otherwise not
//	if (ums1.count(val))
//		std::cout << "unordered multiset 1 contains " << val
//		<< std::endl;
//	else
//		std::cout << "unordered multiset 1 does not contains "
//		<< val << std::endl;
//
//	val = 1;
//
//	// equal_range returns a pair, where first is iterator
//	// to first position of val and second it iterator to
//	// last position to val
//	std::pair<umit, umit> erange_it = ums2.equal_range(val);
//	if (erange_it.first != erange_it.second)
//		std::cout << val
//		<< " appeared atleast once in "
//		"unoredered_multiset \n";
//
//	printUset(ums2);
//
//	// erase function deletes all instances of val
//	ums2.erase(val);
//
//	printUset(ums2);
//
//	// clear function deletes all entries from set
//	ums1.clear();
//	ums2.clear();
//
//	if (ums1.empty())
//		std::cout << "unordered multiset 1 is empty\n";
//	else
//		std::cout << "unordered multiset 1 is not empty\n";
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
//	//Example 2: delete one copy from unordered set
//	std::cout << "Example 2: delete one copy from unordered set\n------------------------\n";
//
//
//
//
//	 //  initializing multiset by initializer list
//	std::unordered_multiset<int> umse2({ 1, 3, 1, 7, 2, 3,
//								 4, 1, 6 });
//
//	int val2 = 1;
//	printUset(umse2);
//	erase_one_entry(umse2, val);
//	printUset(umse2);
//}
