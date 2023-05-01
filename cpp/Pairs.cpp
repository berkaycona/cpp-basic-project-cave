//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Pairs
//
//#include <iostream>
//#include <utility> // for std::pair
//
//#include <vector>
//#include <list>
//#include <deque>
//
//int main() {
//
//    //[1] Declaration of Pair
//    std::pair<int, std::string> p1;
//
//
//    //[2] Basic Operations with Pair
//    
//    // Assign values to the pair
//    p1.first = 1;
//    p1.second = "Ahmet";
//
//    // Access the elements of the pair
//    std::cout << "First: " << p1.first << ", Second: " << p1.second << std::endl;
//
//    // Create a pair using make_pair
//    std::pair<int, std::string> p2 = std::make_pair(2, "Berkay");
//
//    // Swap the contents of two pairs
//    p1.swap(p2);
//
//    // Access the elements of the swapped pairs
//    std::cout << "Swapped pairs:" << std::endl;
//    std::cout << "First: " << p1.first << ", Second: " << p1.second << std::endl;
//    std::cout << "First: " << p2.first << ", Second: " << p2.second << std::endl;
//
//
//
//    std::cout << std::endl << std::endl<< std::endl << std::endl;
//
//
//    //[2] Operations With Other Containers
//
//    // Create containers with pairs
//    std::vector<std::pair<int, std::string>> vec = { {1, "Alice"}, {2, "Bob"}, {3, "Carol"} };
//    std::list<std::pair<int, std::string>> lst = { {4, "David"}, {5, "Eve"}, {6, "Frank"} };
//    std::deque<std::pair<int, std::string>> deq = { {7, "Grace"}, {8, "Hugo"}, {9, "Ivy"} };
//
//
//    // Access and print the elements of the containers
//    std::cout << "Vector:" << std::endl;
//    for (const auto& p : vec) 
//    {
//        std::cout << "First: " << p.first << ", Second: " << p.second << std::endl;
//    }
//
//    std::cout << "\nList:" << std::endl;
//    for (const auto& p : lst) 
//    {
//        std::cout << "First: " << p.first << ", Second: " << p.second << std::endl;
//    }
//
//    std::cout << "\nDeque:" << std::endl;
//    for (const auto& p : deq) 
//    {
//        std::cout << "First: " << p.first << ", Second: " << p.second << std::endl;
//    }
//
//    return 0;
//}