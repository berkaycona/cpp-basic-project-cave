// C++ program to demonstrate insertion
// in a BST recursively

#include <cstddef>
#include <iostream>
using namespace std;

class BST {
    int data;
    BST* left, * right;

public:
    BST();

    BST(int);

    BST* Insert(BST*, int);

    // Inorder traversal.
    void Inorder(BST*);
};

BST::BST()
    : data(0), left(NULL), right(NULL)
{
}

BST::BST(int value)
{
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value)
{
    if (!root) {

        // Insert the first node, if root is NULL.
        return new BST(value);
    }

    // Insert data.
    if (value > root->data) {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.

        // Process right nodes.
        root->right = Insert(root->right, value);
    }
    else if (value < root->data) {
        // Insert left node data, if the 'value'
        // to be inserted is smaller than 'root' node data.

        // Process left nodes.
        root->left = Insert(root->left, value);
    }

    return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    //[3.1] INSERTION
    BST B1, * root1 = NULL;
    root1 = B1.Insert(root1, 50);
    B1.Insert(root1, 30);
    B1.Insert(root1, 20);
    B1.Insert(root1, 40);
    B1.Insert(root1, 70);
    B1.Insert(root1, 60);
    B1.Insert(root1, 80);

    B1.Inorder(root1);







    return 0;
}