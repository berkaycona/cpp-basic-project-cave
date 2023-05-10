//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE-2 - BinaryTrees
//
//#include <iostream>
//#include <vector>
//
////Struct Way
//struct node {
//    int data;
//    struct node* left;
//    struct node* right;
//};
//
////Class Way
//class Node {
//public:
//    int data;
//    Node* left;
//    Node* right;
//
//    Node() : data(0), left(nullptr), right(nullptr) {} // Default constructor
//    Node(int data) : data(data), left(nullptr), right(nullptr) {}
//
//    //[3.3] TRAVERSALS OF BINARY TREE
//    void inorderTraversal() {
//        if (left) {
//            left->inorderTraversal();
//        }
//        std::cout << data << " ";
//        if (right) {
//            right->inorderTraversal();
//        }
//    }
//
//    void preorderTraversal() {
//        std::cout << data << " ";
//        if (left) {
//            left->preorderTraversal();
//        }
//        if (right) {
//            right->preorderTraversal();
//        }
//    }
//
//    void postorderTraversal() {
//        if (left) {
//            left->postorderTraversal();
//        }
//        if (right) {
//            right->postorderTraversal();
//        }
//        std::cout << data << " ";
//    }
//
//    int sum() 
//    {
//        int leftSum = left ? left->sum() : 0;
//        int rightSum = right ? right->sum() : 0;
//        return data + leftSum + rightSum;
//    }
//
//    void deleteTree() {
//        if (left) {
//            left->deleteTree();
//            delete left;
//        }
//        if (right) {
//            right->deleteTree();
//            delete right;
//        }
//    }
//};
//
////Finding the MAX value of a tree
//
//int max(int a, int b) 
//{
//    return a > b ? a : b;
//}
//
//int findMax(Node* root) {
//    if (!root) {
//        return INT_MIN; // Return the smallest possible int value if the node is null
//    }
//
//    int maxVal = root->data;
//    int leftMax = findMax(root->left);
//    int rightMax = findMax(root->right);
//
//    return max(maxVal, max(leftMax, rightMax));
//}
//
//
//
//int main()
//{
//
//    Node* root = new Node(10);
//    root->left = new Node(5);
//    root->right = new Node(15);
//    root->left->left = new Node(2);
//    root->left->right = new Node(7);
//    root->right->left = new Node(12);
//    root->right->right = new Node(20);
//
//    // Find the maximum value in the binary tree
//    int maxValue = findMax(root);
//    std::cout << "The maximum value in the binary tree is: " << maxValue << std::endl;
//
//    // Calculate the sum of all values in the binary tree
//    int totalSum = root->sum();
//    std::cout << "The sum of all values in the binary tree is: " << totalSum << std::endl;
//
//    // Clean up memory
//    delete root->left->left;
//    delete root->left->right;
//    delete root->left;
//    delete root->right->left;
//    delete root->right->right;
//    delete root->right;
//    delete root;
//
//    ////clean up the memory 2nd (post-order traversal) way
//   /*
//   root->deleteTree();
//   delete root;
//   */
//}