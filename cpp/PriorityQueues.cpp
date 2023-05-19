//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE-2 - PriorityQueues
//
//
////[1] PRIORITY QUEUES WITH BINARY HEAP : MAX HEAP
//#include <iostream>
//#include <vector>
//#include <stdexcept>
//
//class PriorityQueue {
//private:
//    std::vector<int> data;
//
//    void bubbleUp(int i) {
//        if (i == 0) return;
//
//        int parentIndex = (i - 1) / 2;
//
//        if (data[parentIndex] < data[i]) {
//            std::swap(data[i], data[parentIndex]);
//            bubbleUp(parentIndex);
//        }
//    }
//
//    void bubbleDown(int i) {
//        int leftChildIndex = 2 * i + 1;
//        int rightChildIndex = 2 * i + 2;
//
//        if (leftChildIndex >= data.size()) return;
//
//        int maxIndex = i;
//
//        if (data[leftChildIndex] > data[maxIndex]) {
//            maxIndex = leftChildIndex;
//        }
//
//        if (rightChildIndex < data.size() && data[rightChildIndex] > data[maxIndex]) {
//            maxIndex = rightChildIndex;
//        }
//
//        if (maxIndex != i) {
//            std::swap(data[i], data[maxIndex]);
//            bubbleDown(maxIndex);
//        }
//    }
//
//public:
//    PriorityQueue() {}
//
//    void push(int val) {
//        data.push_back(val);
//        bubbleUp(data.size() - 1);
//    }
//
//    void pop() {
//        if (data.size() == 0) {
//            throw std::runtime_error("Queue is empty");
//        }
//
//        data[0] = data.back();
//        data.pop_back();
//
//        bubbleDown(0);
//    }
//
//    int top() {
//        if (data.size() == 0) {
//            throw std::runtime_error("Queue is empty");
//        }
//
//        return data[0];
//    }
//
//    bool empty() {
//        return data.size() == 0;
//    }
//};
//
//int main() {
//    PriorityQueue pq;
//    pq.push(3);
//    pq.push(5);
//    pq.push(1);
//    pq.push(2);
//
//    while (!pq.empty()) {
//        std::cout << pq.top() << '\n';
//        pq.pop();
//    }
//
//    return 0;
//}
//
//
//
//
////[2] PRIORITY QUEUES - ARRAY IMPLEMENTATION 1
////Value is the only thing considered as a priority. The priority queue gives priority to elements based on their value only. The one with the larger value will be considered first. There is no separate priority attribute.
////#include <iostream>
////#include <vector>
////#include <algorithm>
////#include <stdexcept>
////
////class PriorityQueueArray {
////private:
////    std::vector<int> data;
////
////public:
////    PriorityQueueArray() {}
////
////    void push(int val) {
////        data.push_back(val);
////    }
////
////    void pop() {
////        if (data.empty()) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        auto maxPosition = std::max_element(data.begin(), data.end());
////        data.erase(maxPosition);
////    }
////
////    int top() {
////        if (data.empty()) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        return *std::max_element(data.begin(), data.end());
////    }
////
////    bool empty() {
////        return data.empty();
////    }
////};
//
//
//
//////[2] PRIORITY QUEUES - ARRAY IMPLEMENTATION 2
////Each element in the queue has a value and a priority. The queue gives priority to elements based on the priority attribute. If two elements have the same priority, the one with the larger value will be considered first.
////#include <bits/stdc++.h>
////using namespace std;
////
////// Structure for the elements in the
////// priority queue
////struct item {
////	int value;
////	int priority;
////};
////
////// Store the element of a priority queue
////item pr[100000];
////
////// Pointer to the last index
////int size = -1;
////
////// Function to insert a new element
////// into priority queue
////void enqueue(int value, int priority)
////{
////	// Increase the size
////	size++;
////
////	// Insert the element
////	pr[size].value = value;
////	pr[size].priority = priority;
////}
////
////// Function to check the top element
////int peek()
////{
////	int highestPriority = INT_MIN;
////	int ind = -1;
////
////	// Check for the element with
////	// highest priority
////	for (int i = 0; i <= size; i++) {
////
////		// If priority is same choose
////		// the element with the
////		// highest value
////		if (highestPriority == pr[i].priority && ind > -1
////			&& pr[ind].value < pr[i].value) {
////			highestPriority = pr[i].priority;
////			ind = i;
////		}
////		else if (highestPriority < pr[i].priority) {
////			highestPriority = pr[i].priority;
////			ind = i;
////		}
////	}
////
////	// Return position of the element
////	return ind;
////}
////
////// Function to remove the element with
////// the highest priority
////void dequeue()
////{
////	// Find the position of the element
////	// with highest priority
////	int ind = peek();
////
////	// Shift the element one index before
////	// from the position of the element
////	// with highest priority is found
////	for (int i = ind; i < size; i++) {
////		pr[i] = pr[i + 1];
////	}
////
////	// Decrease the size of the
////	// priority queue by one
////	size--;
////}
////
////// Driver Code
////int main()
////{
////	// Function Call to insert elements
////	// as per the priority
////	enqueue(10, 2);
////	enqueue(14, 4);
////	enqueue(16, 4);
////	enqueue(12, 3);
////
////	// Stores the top element
////	// at the moment
////	int ind = peek();
////
////	cout << pr[ind].value << endl;
////
////	// Dequeue the top element
////	dequeue();
////
////	// Check the top element
////	ind = peek();
////	cout << pr[ind].value << endl;
////
////	// Dequeue the top element
////	dequeue();
////
////	// Check the top element
////	ind = peek();
////	cout << pr[ind].value << endl;
////
////	return 0;
////}
//
//
//
//////[3] PRIORITY QUEUE : LINKED LIST IMPLEMENTATION 1 
////
////#include <iostream>
////#include <stdexcept>
////
////class Node {
////public:
////    int val;
////    Node* next;
////
////    Node(int val) : val(val), next(nullptr) {}
////};
////
////class PriorityQueueLinkedList {
////private:
////    Node* head;
////
////    Node* findMaxPrev() {
////        Node* maxPrev = nullptr;
////        Node* current = head;
////
////        while (current && current->next) {
////            if (!maxPrev || maxPrev->next->val < current->next->val) {
////                maxPrev = current;
////            }
////
////            current = current->next;
////        }
////
////        return maxPrev;
////    }
////
////public:
////    PriorityQueueLinkedList() : head(nullptr) {}
////
////    void push(int val) {
////        Node* newNode = new Node(val);
////        newNode->next = head;
////        head = newNode;
////    }
////
////    void pop() {
////        if (!head) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        if (!head->next) {
////            delete head;
////            head = nullptr;
////            return;
////        }
////
////        Node* maxPrev = findMaxPrev();
////        Node* toDelete;
////
////        if (maxPrev) {
////            toDelete = maxPrev->next;
////            maxPrev->next = toDelete->next;
////        }
////        else {
////            toDelete = head;
////            head = head->next;
////        }
////
////        delete toDelete;
////    }
////
////    int top() {
////        if (!head) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        Node* maxPrev = findMaxPrev();
////
////        if (maxPrev) {
////            return maxPrev->next->val;
////        }
////        else {
////            return head->val;
////        }
////    }
////
////    bool empty() {
////        return head == nullptr;
////    }
////};
//
//
//
//
//
//////[3] PRIORITY QUEUE : LINKED LIST IMPLEMENTATION 2
////
////#include <bits/stdc++.h>
////using namespace std;
////
////// Node
////typedef struct node {
////    int data;
////
////    // Lower values indicate
////    // higher priority
////    int priority;
////
////    struct node* next;
////
////} Node;
////
////// Function to create a new node
////Node* newNode(int d, int p)
////{
////    Node* temp = (Node*)malloc(sizeof(Node));
////    temp->data = d;
////    temp->priority = p;
////    temp->next = NULL;
////
////    return temp;
////}
////
////// Return the value at head
////int peek(Node** head) { return (*head)->data; }
////
////// Removes the element with the
////// highest priority form the list
////void pop(Node** head)
////{
////    Node* temp = *head;
////    (*head) = (*head)->next;
////    free(temp);
////}
////
////// Function to push according to priority
////void push(Node** head, int d, int p)
////{
////    Node* start = (*head);
////
////    // Create new Node
////    Node* temp = newNode(d, p);
////
////    // Special Case: The head of list has
////    // lesser priority than new node
////    if ((*head)->priority < p) {
////
////        // Insert New Node before head
////        temp->next = *head;
////        (*head) = temp;
////    }
////    else {
////
////        // Traverse the list and find a
////        // position to insert new node
////        while (start->next != NULL
////            && start->next->priority > p) {
////            start = start->next;
////        }
////
////        // Either at the ends of the list
////        // or at required position
////        temp->next = start->next;
////        start->next = temp;
////    }
////}
////
////// Function to check is list is empty
////int isEmpty(Node** head) { return (*head) == NULL; }
////
////// Driver code
////int main()
////{
////
////    // Create a Priority Queue
////    // 7->4->5->6
////    Node* pq = newNode(4, 1);
////    push(&pq, 5, 2);
////    push(&pq, 6, 3);
////    push(&pq, 7, 0);
////
////    while (!isEmpty(&pq)) {
////        cout << " " << peek(&pq);
////        pop(&pq);
////    }
////    return 0;
////}
//
//
//
//////[4] PRIORITY QUEUE : BINARY SEARCH TREE IMPLEMENTATION
////
////#include <iostream>
////#include <stdexcept>
////
////class Node {
////public:
////    int val;
////    Node* left;
////    Node* right;
////
////    Node(int val) : val(val), left(nullptr), right(nullptr) {}
////};
////
////class PriorityQueueBST {
////private:
////    Node* root;
////
////    Node* insertNode(Node* node, int val) {
////        if (!node) {
////            return new Node(val);
////        }
////
////        if (val < node->val) {
////            node->left = insertNode(node->left, val);
////        }
////        else {
////            node->right = insertNode(node->right, val);
////        }
////
////        return node;
////    }
////
////    Node* findMaxNode(Node* node) {
////        if (!node || !node->right) {
////            return node;
////        }
////
////        return findMaxNode(node->right);
////    }
////
////    Node* deleteMaxNode(Node* node) {
////        if (!node) {
////            return nullptr;
////        }
////
////        if (!node->right) {
////            Node* leftNode = node->left;
////            delete node;
////            return leftNode;
////        }
////
////        node->right = deleteMaxNode(node->right);
////        return node;
////    }
////
////public:
////    PriorityQueueBST() : root(nullptr) {}
////
////    void push(int val) {
////        root = insertNode(root, val);
////    }
////
////    void pop() {
////        if (!root) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        root = deleteMaxNode(root);
////    }
////
////    int top() {
////        if (!root) {
////            throw std::runtime_error("Queue is empty");
////        }
////
////        return findMaxNode(root)->val;
////    }
////
////    bool empty() {
////        return root == nullptr;
////    }
////};
