//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Linked Lists2
//
//#include <iostream>
//
//class Node {
//public:
//    int value;
//    Node* next;
//
//    Node(int value) : value(value), next(nullptr) {}
//};
//
//class LinkedList {
//private:
//    Node* head;
//
//public:
//    LinkedList() : head(nullptr) {}
//
//    void insert(int value) {
//        Node* newNode = new Node(value);
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
//        }
//    }
//
//    void display() {
//        Node* current = head;
//        while (current != nullptr) {
//            std::cout << current->value << " ";
//            current = current->next;
//        }
//        std::cout << std::endl;
//    }
//
//    //Searches for a given value in the linked list and returns true if the value is found, or false otherwise.
//    bool search(int value) {
//        Node* current = head;
//        while (current != nullptr) {
//            if (current->value == value) {
//                return true;
//            }
//            current = current->next;
//        }
//        return false;
//    }
//
//    //Removes the first occurrence of a given value from the linked list.
//    void remove(int value) {
//        if (head == nullptr) {
//            return;
//        }
//        if (head->value == value) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//        Node* current = head;
//        while (current->next != nullptr) {
//            if (current->next->value == value) {
//                Node* temp = current->next;
//                current->next = current->next->next;
//                delete temp;
//                return;
//            }
//            current = current->next;
//        }
//    }
//
//    void reverse() {
//        Node* prev = nullptr;
//        Node* current = head;
//        Node* next = nullptr;
//
//        while (current != nullptr) {
//            next = current->next;
//            current->next = prev;
//            prev = current;
//            current = next;
//        }
//
//        head = prev;
//    }
//
//    int size() {
//        int count = 0;
//        Node* current = head;
//        while (current != nullptr) {
//            count++;
//            current = current->next;
//        }
//        return count;
//    }
//
//    bool isEmpty() {
//        return head == nullptr;
//    }
//
//    //Retrieves the value at the specified index in the linked list.
//    int getAtIndex(int index) {
//        if (index < 0 || index >= size()) {
//            std::cout << "Index out of range!" << std::endl;
//            return -1;
//        }
//
//        Node* current = head;
//        for (int i = 0; i < index; ++i) {
//            current = current->next;
//        }
//        return current->value;
//    }
//
//    void clear() {
//        Node* current = head;
//        while (current != nullptr) {
//            Node* temp = current;
//            current = current->next;
//            delete temp;
//        }
//        head = nullptr;
//    }
//};
//
//int main() {
//    LinkedList list;
//
//    list.insert(10);
//    list.insert(20);
//    list.insert(30);
//    list.insert(40);
//
//    std::cout << "Original List: ";
//    list.display(); // Output: Original List: 10 20 30 40
//
//    std::cout << "List size: " << list.size() << std::endl; // Output: List size: 4
//
//    std::cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl; // Output: Is list empty? No
//
//    std::cout << "Value at index 2: " << list.getAtIndex(2) << std::endl; // Output: Value at index 2: 30
//
//    list.remove(20);
//    std::cout << "List after removing 20: ";
//    list.display(); // Output: List after removing 20: 10 30 40
//
//    list.reverse();
//    std::cout << "Reversed list: ";
//    list.display(); // Output: Reversed list: 40 30 10
//
//    list.clear();
//    std::cout << "List after clearing: ";
//    list.display(); // Output: List after clearing:
//
//    std::cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl; // Output: Is list empty? Yes
//
//    return 0;
//}
