#pragma warning(disable : 4996)
//Cpp COMPREHENSIVE - Deques

#include <iostream>
#include <deque>

#include <iostream>
#include <deque>
#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = { 10, 20, 30, 40 };
    std::deque<int> dq2 = { 10, 20, 30, 40 };

    // Print the initial deque
    std::cout << "Initial deque: ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::insert()
    dq.insert(dq.begin() + 2, 0);
    std::cout << "After insert(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::rbegin() and deque::rend() - using indices
    std::cout << "Using rbegin() and rend() without iterators: ";
    for (int i = dq.size() - 1; i >= 0; --i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::cbegin() - using indices
    std::cout << "Using cbegin() without iterators: ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::max_size()
    std::cout << "Max size: " << dq.max_size() << std::endl;

    // deque::assign()
    dq.assign(3, 100);
    std::cout << "After assign(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::resize()
    dq.resize(5, 200);
    std::cout << "After resize(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::push_front()
    dq.push_front(999);
    std::cout << "After push_front(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::push_back()
    dq.push_back(1000);
    std::cout << "After push_back(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::pop_front()
    dq.pop_front();
    std::cout << "After pop_front(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::pop_back()
    dq.pop_back();
    std::cout << "After pop_back(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::front() and deque::back()
    std::cout << "Front: " << dq.front() << " Back: " << dq.back() << std::endl;

    // deque::clear()
    dq.clear();
    std::cout << "After clear(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::empty() and deque::size()
    std::cout << "Empty: " << (dq.empty() ? "true" : "false") << " Size: " << dq.size() << std::endl;

    // deque::operator= and deque::operator[]
    dq = dq2;
    std::cout << "After operator=(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::at() and deque::swap()
    std::cout << "Element at position 1: " << dq.at(1) << std::endl;
    dq.swap(dq2);
    std::cout << "After swap(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    // deque::emplace_front() and deque::emplace_back()
    dq.emplace_front(777);
    dq.emplace_back(8888);
    std::cout << "After emplace_front() and emplace_back(): ";
    for (size_t i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}




















































////
////
//////With Auto and an iterator example for insert
////int main() {
////    std::deque<int> dq = { 1, 2, 3, 4, 5 };
////
////    // deque::insert()
////
////    /*
////    //Insert an element at position 2
////
////    std::deque<int>::iterator it = dq.begin() + 2;
////    dq.insert(it, 42);
////    */
////
////    dq.insert(dq.begin() + 2, 42);
////    std::cout << "After insert(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::rbegin() and deque::rend()
////    std::cout << "Using rbegin() and rend(): ";
////    for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
////        std::cout << *it << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::cbegin()
////    std::cout << "Using cbegin() and cend(): ";
////    for (auto it = dq.cbegin(); it != dq.cend(); ++it) {
////        std::cout << *it << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::max_size()
////    std::size_t max_size = dq.max_size();
////    std::cout << "Max size: " << max_size << std::endl;
////
////    // deque::assign()
////    std::deque<int> dq2;
////    dq2.assign(dq.begin(), dq.end());
////
////    // deque::resize()
////    dq.resize(10, 0);
////    std::cout << "After resize(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::push_front() and deque::push_back()
////    dq.push_front(0);
////    dq.push_back(6);
////    std::cout << "After push_front() and push_back(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::pop_front() and deque::pop_back()
////    dq.pop_front();
////    dq.pop_back();
////    std::cout << "After pop_front() and pop_back(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::front() and deque::back()
////    int front_element = dq.front();
////    int back_element = dq.back();
////    std::cout << "Front element: " << front_element << ", Back element: " << back_element << std::endl;
////
////    // deque::clear() and deque::erase()
////    dq2.clear();
////    dq.erase(dq.begin() + 1, dq.begin() + 4);
////    std::cout << "After erase(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::empty() and deque::size()
////    bool is_empty = dq.empty();
////    std::size_t size = dq.size();
////    std::cout << "Is empty: " << std::boolalpha << is_empty << ", Size: " << size << std::endl;
////
////    // deque::operator= and deque::operator[]
////    dq2 = dq;
////    int second_element = dq[1];
////    std::cout << "Second element using operator[]: " << second_element << std::endl;
////
////    // deque::at() and deque::swap()
////    int third_element = dq.at(2);
////    std::cout << "Third element using at(): " << third_element << std::endl;
////
////
////    // deque::swap()
////    dq.swap(dq2);
////    std::cout << "After swap(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::begin() and deque::end()
////    std::cout << "Using begin() and end(): ";
////    for (auto it = dq.begin(); it != dq.end(); ++it) {
////        std::cout << *it << " ";
////    }
////    std::cout << std::endl;
////
////    // deque::emplace_front() and deque::emplace_back()
////    dq.emplace_front(-1);
////    dq.emplace_back(7);
////    std::cout << "After emplace_front() and emplace_back(): ";
////    for (const auto& element : dq) {
////        std::cout << element << " ";
////    }
////    std::cout << std::endl;
////
////    return 0;
////}