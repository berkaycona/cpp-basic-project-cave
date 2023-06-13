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
//
//        //[INTERLUDE]
//        l.clear();
//        l.push_back(1);
//        l.push_back(2);
//        l.push_back(3);
//
//
//        // list::begin() and list::end()
//        std::list<int>::iterator it_begin = l.begin();
//        std::list<int>::iterator it_end = l.end();
//        std::cout << "list::begin() to list::end(): ";
//        for (std::list<int>::iterator it = it_begin; it != it_end; ++it) {
//            std::cout << *it << " ";
//        }
//        std::cout << std::endl;// Output: list::begin() to list::end(): 1 2 3
//
//
//        // list::rbegin() and list::rend()
//        std::list<int>::reverse_iterator rit_begin = l.rbegin();
//        std::list<int>::reverse_iterator rit_end = l.rend();
//        std::cout << "list::rbegin() to list::rend(): ";
//        for (std::list<int>::reverse_iterator rit = rit_begin; rit != rit_end; ++rit) {
//            std::cout << *rit << " ";
//        }
//        std::cout << std::endl; // Output: list::rbegin() and list::rend(): 3 2 1
//
//
//        // list::cbegin() and list::cend()
//        std::list<int>::const_iterator cit_begin = l.cbegin();
//        std::list<int>::const_iterator cit_end = l.cend();
//        std::cout << "list::cbegin() and list::cend(): ";
//        for (std::list<int>::const_iterator cit = cit_begin; cit != cit_end; ++cit) {
//            std::cout << *cit << " ";
//        }
//        std::cout << std::endl;// Output: list::cbegin() and list::cend(): 1 2 3
//
//        // list::crbegin() and list::crend()
//        std::list<int>::const_reverse_iterator crit_begin = l.crbegin();
//        std::list<int>::const_reverse_iterator crit_end = l.crend();
//        std::cout << "list::crbegin() and list::crend(): ";
//        for (std::list<int>::const_reverse_iterator crit = crit_begin; crit != crit_end; ++crit) {
//            std::cout << *crit << " ";
//        }
//        std::cout << std::endl;// Output: list::crbegin() and list::crend(): 3 2 1
//
//        // empty()
//        std::cout << "empty(): " << l.empty() << std::endl;// Output: empty(): 0 (since the list is not empty)
//
//        // insert()
//        l.insert(++l.begin(), 5);
//        std::cout << "insert(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;// Output: insert(): 1 5 2 3
//
//
//        // erase()
//        l.erase(++l.begin());
//        std::cout << "erase(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;// Output: erase(): 1 2 3
//
//        // assign()
//        l.assign({ 7, 8, 9 });
//        std::cout << "assign(): "; //This function replaces the current elements of the list with the new values provided.
//        for (int i : l) std::cout << i << " ";//l is not the end of the list. Instead, it represents the container or sequence to iterate over.
//        std::cout << std::endl;// Output: assign(): 7 8 9
//
//        // remove()
//        l.push_back(8);
//        l.remove(8);
//        std::cout << "remove(): ";
//        for (int i : l) std::cout << i << " ";// Output: remove(): 7 9
//        std::cout << std::endl;
//
//        // list::remove_if()
//        l.assign({ 1, 2, 3, 4, 5 });
//        l.remove_if([](int x) { return x % 2 == 0; });
//        std::cout << "list::remove_if(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;// Output: list::remove_if(): 1 3 5
//
//        // reverse()
//        l.reverse();
//        std::cout << "reverse(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;// Output: reverse(): 5 3 1
//    
//        // size()
//        std::cout << "size(): " << l.size() << std::endl;// Output: size(): 3
//
//        // list::resize()
//        l.resize(4);
//        std::cout << "list::resize(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::resize(): 5 3 1 0, fills with 0
//        std::cout << std::endl;
//
//        // sort()
//        l.assign({ 3, 1, 4, 2 });
//        l.sort();
//        std::cout << "sort(): ";
//        for (int i : l) std::cout << i << " ";
//        std::cout << std::endl;// Output: sort(): 1 2 3 4
//
//        // list::max_size()
//        std::cout << "list::max_size(): " << l.max_size() << std::endl;// Output: list::max_size(): a large number indicating the maximum size
//
//        // list::unique()
//        l.assign({ 1, 1, 2, 2, 3, 3 });
//        l.unique();
//        std::cout << "list::unique(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::unique(): 1 2 3
//        std::cout << std::endl;
//
//        // list::emplace_front() and list::emplace_back()
//        l.clear();
//        l.emplace_front(10);
//        l.emplace_back(20);
//        std::cout << "emplace_front() and emplace_back(): ";
//        for (int i : l) std::cout << i << " ";// Output: emplace_front() and emplace_back(): 10 20
//        std::cout << std::endl;
//        //emplace_back() constructs the object in-place within the container, while push_back() makes a copy or move of an existing object and adds it to the container. emplace_back() can be more efficient when constructing objects with custom arguments or expensive copy/move operations.
//
//        /*
//        push_back(4) takes an object, in this case, the integer 4, and copies or moves it into the container.
//
//        emplace_back(4) on the other hand, constructs the object directly within the container's memory, meaning there's no need for a temporary object to be created and copied or moved.
//
//        In the case of simple types like integers (int), the difference between push_back and emplace_back is negligible. However, for complex types that are expensive to copy or move, using emplace_back can provide significant performance improvements because it avoids the need to copy or move objects.
//
//        Do note that emplace_back is a feature that was added in C++11, so if you're working with an older version of C++, you may not have access to it.
//        */
//
//
//        // list::clear()
//        l.clear();
//        std::cout << "list::clear(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::clear(): (no output since the list is empty)
//        std::cout << std::endl;
//
//        // list::operator=()
//        std::list<int> l2;
//        l2 = l;
//        std::cout << "list::operator=(): ";
//        for (int i : l2) std::cout << i << " ";
//        std::cout << std::endl;
//
//        /*
//        In C++, when you use the = operator between two std::list objects like l2 = l;, what's happening is that you're calling the copy assignment operator. This operator overwrites all elements in l2 with a copy of each of the elements in l.
//
//        The std::list copy assignment operator performs a deep copy of l into l2, meaning that it creates new copies of each element from l and places them into l2. After the operation, l and l2 will contain the same elements in the same order, but they will be separate lists; changes to the elements of one list will not affect the other.
//        */
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
//        std::cout << std::endl;// Output: list::swap(): l1: 4 5 6 l2: 1 2 3
//
//        // list::splice()
//        l.assign({ 1, 2, 3 });
//        l2.assign({ 4, 5, 6 });
//        l.splice(l.begin(), l2);
//        std::cout << "list::splice(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::splice(): 4 5 6 1 2 3
//        std::cout << std::endl;
//        /*
//        The elements from the source list are transferred to the destination list. This operation is performed in constant time because it only involves changing some pointers within the lists, without needing to copy or move any actual elements. This makes splice a very efficient operation.
//
//        The elements are removed from the source list, but not deleted. They still exist, but are now in the destination list. The source list's size is reduced accordingly.
//
//        The transferred elements retain their relative ordering from the source list.
//
//        The splice method doesn't invalidate any iterators or references to the transferred elements.
//        
//        Please note that splice operation can only be used between lists of the same type and it does not involve the invocation of any copy/move constructors or assignment operators.
//        
//        In this example, l2 list will be empty after the operation.
//        */
//
//
//
//        // list::merge()
//        l.assign({ 1, 3, 5 });
//        l2.assign({ 2, 4, 6 });
//        l.merge(l2);
//        std::cout << "list::merge(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::merge(): 1 2 3 4 5 6
//        std::cout << std::endl;
//
//        // list::emplace()
//        l.assign({ 1, 2, 4 });
//        l.emplace(std::next(l.begin(), 2), 3);
//        std::cout << "list::emplace(): ";
//        for (int i : l) std::cout << i << " ";// Output: list::emplace(): 1 2 3 4
//        std::cout << std::endl;
//        //inserting the value 3 into the third position in the list.
//        //emplace inserts the new element at the position specified by the provided iterator.
//        //emplace_back always inserts the new element at the end of the list.
//
//
//
//        //[PERSONAL EXPERIMENTS]
//        std::list<int> l11;
//        std::list<int> l22;
//        l11.assign({ 1, 2, 3 });
//        l22.assign({ 4, 5, 6 });
//        l11.splice(l11.begin(), l22);
//        std::cout << "list::splice(): ";
//        for (int i : l11) std::cout << i << " ";// Output: list::splice(): 4 5 6 1 2 3
//        std::cout << std::endl;
//
//
//        return 0;
//}
//
//
//
//
