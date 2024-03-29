//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Stacks
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <list>
//
//int main() {
//    // Create a queue of integers
//    std::queue<int> integerQueue;
//    // Create a queue of vectors
//    std::queue<int, std::vector<int>> vectorQueue;
//    // Create a queue of lists
//    std::queue<int, std::list<int>> listQueue;
//    // Create a queue of Deque
//    std::queue<int, std::deque<int>> dequeQueue;
//
//
//
//
//
//    // push(const value_type& val)
//    integerQueue.push(1);
//    integerQueue.push(2);
//    integerQueue.push(3);
//
//    std::cout << "push: ";
//
//    std::queue<int> temp = integerQueue;
//
//    while (!temp.empty()) {
//        std::cout << temp.front() << " ";
//        temp.pop();
//    }
//    std::cout << std::endl;// Output: push: 1 2 3
//
//    // front()
//    std::cout << "front: " << integerQueue.front() << std::endl;// Output: front: 1
//
//    // back()
//    std::cout << "back: " << integerQueue.back() << std::endl;// Output: back: 3
//
//    // pop()
//    integerQueue.pop();
//    std::cout << "pop: ";
//    temp = integerQueue;
//    while (!temp.empty()) {
//        std::cout << temp.front() << " ";
//        temp.pop();
//    }
//    std::cout << std::endl;// Output: pop: 2 3
//
//    // size()
//    std::cout << "size: " << integerQueue.size() << std::endl;// Output: size: 2
//
//    // empty()
//    std::cout << "empty: " << integerQueue.empty() << std::endl;// Output: empty: 0
//
//    return 0;
//}