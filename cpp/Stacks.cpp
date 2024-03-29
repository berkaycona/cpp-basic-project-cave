//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Stacks
//
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//int main() {
//    //[1] DECLARATIONS
//    
//    // Creating a stack of INTEGERS
//    std::stack<int> stackInt;
//    // Creating a stack of integers using VECTOR as the underlying container
//    std::stack<int, std::vector<int>> stackVector;
//    //Creating a stack of DEQUE
//    std::stack<int, std::deque<int>> stackDeque;
//    //Creating a stack of LIST
//    std::stack<int, std::list<int>> stackList;
//
//
//    // push(const value_type& val)
//    stackInt.push(1);
//    stackInt.push(2);
//    stackInt.push(3);
//    std::cout << "Push: ";
//
//    std::stack<int> tempStackInt = stackInt;
//    while (!tempStackInt.empty()) {
//        std::cout << tempStackInt.top() << " ";
//        tempStackInt.pop();
//    }
//    std::cout << std::endl;  // Output: Push: 3 2 1
//
//    // top()
//    std::cout << "top: " << stackInt.top() << std::endl;// Output: top: 3
//
//    // pop()
//    stackInt.pop();
//    std::cout << "pop: ";
//    tempStackInt = stackInt;
//    while (!tempStackInt.empty()) {
//        std::cout << tempStackInt.top() << " ";// Output: pop: 2 1
//        tempStackInt.pop();
//    }
//    std::cout << std::endl;
//
//    // size()
//    std::cout << "size: " << stackInt.size() << std::endl;// Output: size: 2
//
//    // empty()
//    std::cout << "empty: " << stackInt.empty() << std::endl;// Output: empty: 0 : CHECKS IF THE STACK IS EMPTY OR NOT. IF NOT, IT RETURNS 1.
//
//
//
//    std::cout << std::endl << std::endl << std::endl << std::endl;
//
//
//
//    //FOR DEQUE UNDERLYING CONTAINER (DEFAULT)
//    std::cout << "\n\n\n DEQUE PART\n---------\n\n";
//    // push(const value_type& val)
//    stackDeque.push(1);
//    stackDeque.push(2);
//    stackDeque.push(3);
//    std::cout << "push: ";
//    std::stack<int, std::deque<int>> temp = stackDeque;
//    while (!temp.empty()) {
//        std::cout << temp.top() << " ";
//        temp.pop();
//    }
//    std::cout << std::endl;
//
//    // top()
//    std::cout << "top: " << stackDeque.top() << std::endl;
//
//    // pop()
//    stackDeque.pop();
//    std::cout << "pop: ";
//    temp = stackDeque;
//    while (!temp.empty()) {
//        std::cout << temp.top() << " ";
//        temp.pop();
//    }
//    std::cout << std::endl;
//
//    // size()
//    std::cout << "size: " << stackDeque.size() << std::endl;
//
//    // empty()
//    std::cout << "empty: " << stackDeque.empty() << std::endl;
//
//
//    return 0;
//}