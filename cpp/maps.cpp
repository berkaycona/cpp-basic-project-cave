//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - map
//
//#include <iostream>
//#include <map>
//
//int main()
//{
//	//EXAMPLE 1 : BEGIN()
//	std::cout << "\n\nExample 1 : BEGIN\n-----------\n";
//
//
//	// Create a map of strings to integers
//	std::map<std::string, int> map1;
//
//	// Insert some values into the map
//	map1["one"] = 1;
//	map1["two"] = 2;
//	map1["three"] = 3;
//
//	// Get an iterator pointing to the first element in the map
//	std::map<std::string, int>::iterator it1 = map1.begin();
//
//	// Iterate through the map and print the elements
//	while (it1 != map1.end())
//	{
//		std::cout << "Key: " << it1->first << ", Value: " << it1->second << std::endl;
//		++it1;
//	}
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
//	std::cout << "\n\nExample 2 : END\n-----------\n";
//
//	//EXAMPLE 2 : END()
//
//	// Create a map of strings to integers
//	std::map<std::string, int> map2;
//
//	// Insert some values into the map
//	map2["one"] = 1;
//	map2["two"] = 2;
//	map2["three"] = 3;
//
//	// Get an iterator pointing to the first element in the map
//	std::map<std::string, int>::iterator it2 = map2.begin();
//
//	// Iterate through the map and print the elements
//	while (it2 != map2.end())
//	{
//		std::cout << "Key: " << it2->first << ", Value: " << it2->second << std::endl;
//		++it2;
//	}
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
//	std::cout << "\n\nExample 3 : SIZE()\n-----------\n";
//
//	//EXAMPLE 3 : SIZE()
//
//	// Create a map of strings to integers
//	std::map<std::string, int> map3;
//
//	// Insert some values into the map
//	map3["one"] = 1;
//	map3["two"] = 2;
//	map3["three"] = 3;
//
//	// Print the size of the map
//	std::cout << "Size of map: " << map3.size() << std::endl;
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
//    std::cout << "\n\nExample 4 : GENERAL\n-----------\n";
//
//    //EXAMPLE 4 : GENERAL
//
//
//
//    // empty map container
//    std::map<int, int> gquiz1;
//
//    // insert elements in random order
//    gquiz1.insert(std::pair<int, int>(1, 40));
//    gquiz1.insert(std::pair<int, int>(2, 30));
//    gquiz1.insert(std::pair<int, int>(3, 60));
//    gquiz1.insert(std::pair<int, int>(4, 20));
//    gquiz1.insert(std::pair<int, int>(5, 50));
//    gquiz1.insert(std::pair<int, int>(6, 50));
//
//    gquiz1[7] = 10;     // another way of inserting a value in a map
//
//
//    // printing map gquiz1
//    std::map<int, int>::iterator itr;
//    std::cout << "\nThe map gquiz1 is : \n";
//    std::cout << "\tKEY\tELEMENT\n";
//    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//        std::cout << '\t' << itr->first << '\t' << itr->second
//            << '\n';
//    }
//    std::cout << std::endl;
//
//    // assigning the elements from gquiz1 to gquiz2
//    std::map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
//
//    // print all elements of the map gquiz2
//    std::cout << "\nThe map gquiz2 after"
//        << " assign from gquiz1 is : \n";
//    std::cout << "\tKEY\tELEMENT\n";
//    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//        std::cout << '\t' << itr->first << '\t' << itr->second
//            << '\n';
//    }
//    std::cout << std::endl;
//
//    // remove all elements up to
//    // element with key=3 in gquiz2
//    std::cout << "\ngquiz2 after removal of"
//        " elements less than key=3 : \n";
//    std::cout << "\tKEY\tELEMENT\n";
//    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
//    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//        std::cout << '\t' << itr->first << '\t' << itr->second
//            << '\n';
//    }
//
//    // remove all elements with key = 4
//    int num;
//    num = gquiz2.erase(4);
//    std::cout << "\ngquiz2.erase(4) : ";
//    std::cout << num << " removed \n";
//    std::cout << "\tKEY\tELEMENT\n";
//    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
//        std::cout << '\t' << itr->first << '\t' << itr->second
//            << '\n';
//    }
//
//    std::cout << std::endl;
//
//    // lower bound and upper bound for map gquiz1 key = 5
//    std::cout << "gquiz1.lower_bound(5) : "
//        << "\tKEY = ";
//    std::cout << gquiz1.lower_bound(5)->first << '\t';
//    std::cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
//        << std::endl;
//    std::cout << "gquiz1.upper_bound(5) : "
//        << "\tKEY = ";
//    std::cout << gquiz1.upper_bound(5)->first << '\t';
//    std::cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
//        << std::endl;
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
//    std::cout << "\n\nExample 5 : COUNT\n-----------\n";
//
//    //EXAMPLE 5 : COUNT
//
//    // Create a map of strings to integers
//    std::map<std::string, int> map4;
//
//    // Insert some values into the map
//    map4["one"] = 1;
//    map4["two"] = 2;
//    map4["three"] = 3;
//
//    // Print the values in the map
//    std::cout << "Key: one, Value: " << map4["one"] << std::endl;
//    std::cout << "Key: two, Value: " << map4["two"] << std::endl;
//    std::cout << "Key: three, Value: " << map4["three"] << std::endl;
//
//    // Check if a key is in the map
//    if (map4.count("four") > 0)
//    {
//        std::cout << "Key 'four' is in the map" << std::endl;
//    }
//    else
//    {
//        std::cout << "Key 'four' is not in the map" << std::endl;
//    }
//
//
//
//
//
//
//
//	return 0;
//}
