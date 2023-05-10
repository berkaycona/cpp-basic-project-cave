#pragma warning(disable : 4996)
//Cpp COMPREHENSIVE-2 - Trees

#include <iostream>
#include <vector>

class TreeNode {
public:
    int element;
    TreeNode* firstChild;
    TreeNode* nextSibling;

    TreeNode(int element)
        : element(element), firstChild(nullptr), nextSibling(nullptr) {}
};


class Node {
public:
    int data;
    std::vector<Node*> child;

    Node(int data) : data(data) {} // child vector will be empty by default

};


int main()
{
    //For TreeNode Class
    TreeNode* rootTreeNode = new TreeNode(10);
    rootTreeNode->firstChild = new TreeNode(5);
    rootTreeNode->nextSibling = new TreeNode(15);

    //For Node Class
    Node* rootNode = new Node(5);

    rootNode->child.push_back(new Node(10));
    rootNode->child.push_back(new Node(15));
    rootNode->child.push_back(new Node(20));

    std::cout << "First child data: " << rootNode->child[0]->data << std::endl; // Output: First child data: 10

}