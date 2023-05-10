//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE-2 - Trees
//
//#include <iostream>
//#include <vector>
//
//class TreeNode {
//public:
//    int element;
//    TreeNode* firstChild;
//    TreeNode* nextSibling;
//
//    TreeNode(int element)
//        : element(element), firstChild(nullptr), nextSibling(nullptr) {}
//};
//
//
//class Node {
//public:
//    int data;
//    std::vector<Node*> child;
//
//    Node(int data) : data(data) {} // child vector will be empty by default
//
//
//
//
//
//    //[1.1] TRAVERSALS
//    void preorderTraversal() 
//    {
//        // Process the current node
//        std::cout << data << " "; 
//
//        // Traverse all child subtrees
//        for (Node* c : child) { //Node* c pointer is created in the scope of the loop, but it doesn't create a new Node object. It simply holds the address of the current child node in the vector during the iteration.
//            if (c) {
//                c->preorderTraversal();
//            }
//        }
//    }
//
//
//    //The inorder traversal is specific to binary 
//    //trees and assumes that each node has at most 
//    //two children (left and right).
//    void inorderTraversal() 
//    {
//        // Traverse the left subtree (first child)
//        if (!child.empty() && child[0]) {
//            child[0]->inorderTraversal();
//        }
//
//        // Process the current node
//        std::cout << data << " "; 
//
//        // Traverse the right subtree (second child)
//        if (child.size() > 1 && child[1]) {
//            child[1]->inorderTraversal();
//        }
//    }
//
//
//    void postorderTraversal() 
//    {
//        // Traverse all child subtrees
//        for (Node* c : child) {
//            if (c) {
//                c->postorderTraversal();
//            }
//        }
//
//        // Process the current node
//        std::cout << data << " "; 
//    }
//
//    //for loop can also be written as:
//    /*for (size_t i = 0; i < child.size(); ++i) {
//        if (child[i]) {
//            child[i]->preorderTraversal();
//        }*/
//};
//
//
//int main()
//{
//    //For TreeNode Class
//    TreeNode* rootTreeNode = new TreeNode(10);
//    rootTreeNode->firstChild = new TreeNode(5);
//    rootTreeNode->nextSibling = new TreeNode(15);
//
//    //For Node Class
//    Node* rootNode = new Node(5);
//
//    rootNode->child.push_back(new Node(10));
//    rootNode->child.push_back(new Node(15));
//    rootNode->child.push_back(new Node(20));
//
//    std::cout << "First child data: " << rootNode->child[0]->data << std::endl; // Output: First child data: 10
//
//
//
//    std::cout << std::endl << std::endl << std::endl <<"[1.1] TRAVERSALS" << std::endl;
//
//
//    //[1.1] TRAVERSALS
//    Node* rootTraversalTree = new Node(1);
//    rootTraversalTree->child.push_back(new Node(2));
//    rootTraversalTree->child.push_back(new Node(3));
//    rootTraversalTree->child.push_back(new Node(4));
//
//    rootTraversalTree->child[0]->child.push_back(new Node(5));
//    rootTraversalTree->child[0]->child.push_back(new Node(6));
//
//    rootTraversalTree->child[1]->child.push_back(new Node(7));
//
//    rootTraversalTree->child[2]->child.push_back(new Node(8));
//    rootTraversalTree->child[2]->child.push_back(new Node(9));
//    rootTraversalTree->child[2]->child.push_back(new Node(10));
//
//    std::cout << "Preorder traversal: ";
//    rootTraversalTree->preorderTraversal(); // Output: 1 2 5 6 3 7 4 8 9 10
//    std::cout << std::endl;
//
//    std::cout << "Postorder traversal: ";
//    rootTraversalTree->postorderTraversal(); // Output: 5 6 2 7 3 8 9 10 4 1
//    std::cout << std::endl;
//
//}