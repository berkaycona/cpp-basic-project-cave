//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE - Linked Lists2
//
//#include <iostream>
//
//class Node {
//public:
//    int value;
//    Node* next;
//};
//
//void printLinkedList(Node* head) {
//    Node* current = head;
//    std::cout << "Linked List: ";
//    while (current != nullptr) {
//        std::cout << current->value << " ";
//        current = current->next;
//    }
//    std::cout << std::endl;
//}
//
//void insertNode(Node*& head, int value) {
//    Node* newNode = new Node();
//    newNode->value = value;
//    newNode->next = nullptr;
//
//    if (head == nullptr) {
//        head = newNode;
//    }
//    else {
//        Node* current = head;
//        while (current->next != nullptr) {
//            current = current->next;
//        }
//        current->next = newNode;
//    }
//}
//
//void deleteNode(Node*& head, int value) {
//    if (head == nullptr) {
//        return;
//    }
//
//    if (head->value == value) {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//        return;
//    }
//
//    Node* current = head;
//    while (current->next != nullptr) {
//        if (current->next->value == value) {
//            Node* temp = current->next;
//            current->next = current->next->next;
//            delete temp;
//            return;
//        }
//        current = current->next;
//    }
//}
//
//int main() {
//    Node* head = nullptr;
//
//    // Insert nodes
//    insertNode(head, 1);
//    insertNode(head, 2);
//    insertNode(head, 3);
//    insertNode(head, 4);
//    printLinkedList(head);
//    // Output: Linked List: 1 2 3 4
//
//    // Delete node
//    deleteNode(head, 2);
//    printLinkedList(head);
//    // Output: Linked List: 1 3 4
//
//    // Delete non-existent node
//    deleteNode(head, 5);
//    printLinkedList(head);
//    // Output: Linked List: 1 3 4
//
//    return 0;
//}
