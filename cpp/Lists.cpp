//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Lists
//#include <iostream>
//#include <string>
//#include <list>
//#include <vector>
//
//#include <algorithm>
//#include <iterator>
//
//int main() {
//
//    // [1] Different Ways to Initialize a List in C++ STL
//    
//    // [1.1] Initializing an empty List and pushing values one by one
//    std::list<int> l1_1;
//    l1_1.push_back(10);
//    l1_1.push_back(20);
//    l1_1.push_back(30);
//
//    // [1.2] Specifying List size and initializing all values
//    int n = 4;
//    std::list<int> l1_2(n, 1);// Create a list of size n with all values as 1.
//
//    //[1.3] Initializing List like the arrays 
//    std::list<int> l3{ 10, 20, 30 };
//
//    //[1.4] Initializing a list from an array
//    int arr4[] = { 10, 20, 30 };
//    int n4 = sizeof(arr4) / sizeof(arr4[0]);
//
//    std::list<int> l4(arr4, arr4 + n);
//
//    //[1.5] Initializing a list from a vector
//    std::vector<int> vect5{ 10, 20, 30 };
//
//    std::list<int> l5(vect5.begin(), vect5.end());
//
//    //[1.6] Initializing from another List
//    std::list<int> myList6{ 10, 20, 30 };
//
//    std::list<int> l6(myList6.begin(), myList6.end());
//
//
//    //------------------------------------------------------------------------
//
//
//    //[2] std::list Member Functions
//        // Create a list of integers
//        std::list<int> l;
//
//        // front()
//        l.push_back(1);
//        std::cout << "front: " << l.front() << std::endl;
//
//        // back()
//        l.push_back(2);
//        std::cout << "back: " << l.back() << std::endl;
//
//        // push_front()
//        l.push_front(0);
//        std::cout << "push_front: ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // push_back()
//        l.push_back(3);
//        std::cout << "push_back: ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // pop_front()
//        l.pop_front();
//        std::cout << "pop_front: ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // pop_back()
//        l.pop_back();
//        std::cout << "pop_back: ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::begin() and list::end()
//        std::list<int>::iterator it_begin = l.begin();
//        std::list<int>::iterator it_end = l.end();
//        std::cout << "list::begin() and list::end(): ";
//        for (std::list<int>::iterator it = it_begin; it != it_end; ++it) {
//            std::cout << *it << " ";
//        }
//        std::cout << std::endl;
//
//        // list::rbegin() and list::rend()
//        std::list<int>::reverse_iterator rit_begin = l.rbegin();
//        std::list<int>::reverse_iterator rit_end = l.rend();
//        std::cout << "list::rbegin() and list::rend(): ";
//        for (std::list<int>::reverse_iterator rit = rit_begin; rit != rit_end; ++rit) {
//            std::cout << *rit << " ";
//        }
//        std::cout << std::endl;
//
//        // list::cbegin() and list::cend()
//        std::list<int>::const_iterator cit_begin = l.cbegin();
//        std::list<int>::const_iterator cit_end = l.cend();
//        std::cout << "list::cbegin() and list::cend(): ";
//        for (std::list<int>::const_iterator cit = cit_begin; cit != cit_end; ++cit) {
//            std::cout << *cit << " ";
//        }
//        std::cout << std::endl;
//
//        // list::crbegin() and list::crend()
//        std::list<int>::const_reverse_iterator crit_begin = l.crbegin();
//        std::list<int>::const_reverse_iterator crit_end = l.crend();
//        std::cout << "list::crbegin() and list::crend(): ";
//        for (std::list<int>::const_reverse_iterator crit = crit_begin; crit != crit_end; ++crit) {
//            std::cout << *crit << " ";
//        }
//        std::cout << std::endl;
//
//        // empty()
//        std::cout << "empty(): " << l.empty() << std::endl;
//
//        // insert()
//        l.insert(++l.begin(), 5);
//        std::cout << "insert(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // erase()
//        l.erase(++l.begin());
//        std::cout << "erase(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // assign()
//        l.assign({ 7, 8, 9 });
//        std::cout << "assign(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // remove()
//        l.push_back(8);
//        l.remove(8);
//        std::cout << "remove(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::remove_if()
//        l.assign({ 1, 2, 3, 4, 5 });
//        l.remove_if([](int x) { return x % 2 == 0; });
//        std::cout << "list::remove_if(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // reverse()
//        l.reverse();
//        std::cout << "reverse(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // size()
//        std::cout << "size(): " << l.size() << std::endl;
//
//        // list::resize()
//        l.resize(4);
//        std::cout << "list::resize(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // sort()
//        l.assign({ 3, 1, 4, 2 });
//        l.sort();
//        std::cout << "sort(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::max_size()
//        std::cout << "list::max_size(): " << l.max_size() << std::endl;
//
//        // list::unique()
//        l.assign({ 1, 1, 2, 2, 3, 3 });
//        l.unique();
//        std::cout << "list::unique(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::emplace_front() and list::emplace_back()
//        l.clear();
//        l.emplace_front(10);
//        l.emplace_back(20);
//        std::cout << "emplace_front() and emplace_back(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::clear()
//        l.clear();
//        std::cout << "list::clear(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::operator=()
//        std::list<int> l2;
//        l2 = l;
//        std::cout << "list::operator=(): ";
//        for (int i : l2) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::swap()
//        l.assign({ 1, 2, 3 });
//        l2.assign({ 4, 5, 6 });
//        l.swap(l2);
//        std::cout << "list::swap(): ";
//        std::cout << "l1: ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << "l2: ";
//        for (int i : l2) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::splice()
//        l.assign({ 1, 2, 3 });
//        l2.assign({ 4, 5, 6 });
//        l.splice(l.begin(), l2);
//        std::cout << "list::splice(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::merge()
//        l.assign({ 1, 3, 5 });
//        l2.assign({ 2, 4, 6 });
//        l.merge(l2);
//        std::cout << "list::merge(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        // list::emplace()
//        l.assign({ 1, 2, 4 });
//        l.emplace(std::next(l.begin(), 2), 3);
//        std::cout << "list::emplace(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;
//
//        return 0;
//}
//
//
//
//
