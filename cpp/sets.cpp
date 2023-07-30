//#pragma warning(disable : 4996)
////Cpp Comprehensive PT IV - set
//
//#include <iostream>
//#include <set>
//
//int main()
//{
//    std::cout << "Example 1\n--------\n";
//
//    //Example 2
//    std::set<char> a;
//    a.insert('G');
//    a.insert('F');
//    a.insert('G');
//    for (auto& str : a) {
//        std::cout << str << ' ';
//    }
//    std::cout << '\n';
//
//    std::cout << "\n\nExample 2\n--------\n";
//
//    //Example 1
//    std::set<int, std::greater<int> > s1;
//    s1.insert(10);
//    s1.insert(5);
//    s1.insert(12);
//    s1.insert(4);
//
//    for (auto i : s1) {
//        std::cout << i << ' ';
//    }
//
//
//    std::cout << "\n\nExample 3 : METHODS\n-------------\n";
//
//
//    //Example 3 : METHODS
//
//    std::set<int> mySet;
//
//    // Insert elements
//    mySet.insert(10);
//    mySet.insert(30);
//    mySet.insert(20);
//    mySet.insert(40);
//
//    // Print the elements in ascending order
//    std::cout << "Set elements in ascending order: ";
//    for (const auto& value : mySet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    // Find an element
//    int targetValue = 30;
//    auto it = mySet.find(targetValue);
//    if (it != mySet.end()) {
//        std::cout << targetValue << " found in the set." << std::endl;
//    }
//    else {
//        std::cout << targetValue << " not found in the set." << std::endl;
//    }
//
//    // Erase an element
//    int valueToRemove = 20;
//    mySet.erase(valueToRemove);
//
//    // Print the elements after erasing
//    std::cout << "Set elements after erasing " << valueToRemove << ": ";
//    for (const auto& value : mySet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    // Check if the set is empty
//    std::cout << "Is the set empty? " << (mySet.empty() ? "Yes" : "No") << std::endl;
//
//    // Get the number of elements in the set
//    std::cout << "Set size: " << mySet.size() << std::endl;
//
//    // Clear the set
//    mySet.clear();
//
//    // Check if the set is empty after clearing
//    std::cout << "Is the set empty after clearing? " << (mySet.empty() ? "Yes" : "No") << std::endl;
//
//    // Insert elements in a range using initializer list
//    mySet = { 15, 35, 25, 45 };
//
//    // Print the elements in ascending order after reinserting
//    std::cout << "Set elements after reinserting: ";
//    for (const auto& value : mySet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    // Count occurrences of an element in the set
//    int countValue = 35;
//    int occurrences = mySet.count(countValue);
//    std::cout << countValue << " appears " << occurrences << " time(s) in the set." << std::endl;
//
//    // Check if a value exists in the set
//    int checkValue = 25;
//    bool exists = mySet.find(checkValue) != mySet.end();
//    std::cout << "Value " << checkValue << " exists in the set: " << (exists ? "Yes" : "No") << std::endl;
//
//    // Lower bound and upper bound
//    int lower = 30;
//    int upper = 40;
//    auto lowerIt = mySet.lower_bound(lower);
//    auto upperIt = mySet.upper_bound(upper);
//    std::cout << "Elements between " << lower << " and " << upper << ": ";
//    while (lowerIt != upperIt) {
//        std::cout << *lowerIt << " ";
//        lowerIt++;
//    }
//    std::cout << std::endl;
//
//    // Swap sets
//    std::set<int> otherSet = { 100, 200, 300 };
//    std::cout << "Set 1 before swapping: ";
//    for (const auto& value : mySet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Set 2 before swapping: ";
//    for (const auto& value : otherSet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    mySet.swap(otherSet);
//
//    std::cout << "Set 1 after swapping: ";
//    for (const auto& value : mySet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//
//    std::cout << "Set 2 after swapping: ";
//    for (const auto& value : otherSet) {
//        std::cout << value << " ";
//    }
//    std::cout << std::endl;
//}
//
