//// C++ program to demonstrate insertion
//// in a BST recursively
//
//#include <cstddef>
//#include <iostream>
//using namespace std;
//
//class BST {
//    int data;
//    BST* left, * right;
//
//public:
//    BST();
//
//    BST(int);
//
//    BST* Insert(BST*, int);
//
//    // Inorder traversal
//    void Inorder(BST*);
//
//    // Preorder traversal
//    void preOrder(BST* node);
//
//    // Postorder traversal
//    void postOrder(BST* node);
//
//
//    // [3.2] Search 
//    bool Search(BST* root, int value);
//
//    //[3.3] Deletion
//    BST* Delete(BST*, int);
//
//    BST* minValueNode(BST*);
//
//
//};
//
//BST::BST()
//    : data(0), left(NULL), right(NULL)
//{
//}
//
//BST::BST(int value)
//{
//    data = value;
//    left = right = NULL;
//}
//
//BST* BST::Insert(BST* root, int value)
//{
//    if (!root) {
//
//        // Insert the first node, if root is NULL.
//        return new BST(value);
//    }
//
//    // Insert data.
//    if (value > root->data) {
//        // Insert right node data, if the 'value'
//        // to be inserted is greater than 'root' node data.
//
//        // Process right nodes.
//        root->right = Insert(root->right, value);
//    }
//    else if (value < root->data) {
//        // Insert left node data, if the 'value'
//        // to be inserted is smaller than 'root' node data.
//
//        // Process left nodes.
//        root->left = Insert(root->left, value);
//    }
//
//    return root;
//}
//
//
//
//// Inorder traversal function. This gives data in sorted order.
//void BST::Inorder(BST* root)
//{
//    if (!root) {
//        return;
//    }
//    Inorder(root->left);
//    cout << root->data << " ";
//    Inorder(root->right);
//}
//
//// Preorder Traversal
//void BST::preOrder(BST* node)
//{
//    if (node == NULL)
//        return;
//
//    // Visit Node
//    cout << node->data << " ";
//
//    // Traverse left subtree
//    preOrder(node->left);
//
//    // Traverse right subtree
//    preOrder(node->right);
//}
//
//void BST::postOrder(BST* node)
//{
//    if (node == NULL)
//        return;
//
//    // Traverse left subtree
//    postOrder(node->left);
//
//    // Traverse right subtree
//    postOrder(node->right);
//
//    // Visit node
//    cout << node->data << " ";
//}
//
//
//
//
//
//// [3.2] Search function.
//bool BST::Search(BST* root, int value)
//{
//    // Base Cases: root is null or key is present at root
//    if (root == NULL || root->data == value)
//        return root;
//
//    // Key is greater than root's key
//    if (root->data < value)
//        return Search(root->right, value);
//
//    // Key is smaller than root's key
//    return Search(root->left, value);
//}
//
//
//
//
//
////[3.3] Deletion
//BST* BST::minValueNode(BST* node)
//{
//    BST* current = node;
//
//    // loop down to find the leftmost leaf
//    while (current && current->left != NULL)
//        current = current->left;
//
//    return current;
//}
//
////[3.3] Deletion
//BST* BST::Delete(BST* root, int key)
//{
//    // base case
//    if (root == NULL) return root;
//
//    // If the key to be deleted is smaller than the root's key, then it lies in left subtree
//    if (key < root->data)
//        root->left = Delete(root->left, key);
//
//    // If the key to be deleted is greater than the root's key, then it lies in right subtree
//    else if (key > root->data)
//        root->right = Delete(root->right, key);
//
//    // if key is same as root's key, then This is the node to be deleted
//    else
//    {
//        // node with only one child or no child
//        if (root->left == NULL)
//        {
//            BST* temp = root->right;
//            delete root;
//            return temp;
//        }
//        else if (root->right == NULL)
//        {
//            BST* temp = root->left;
//            delete root;
//            return temp;
//        }
//
//        // node with two children: Get the inorder successor (smallest in the right subtree)
//        BST* temp = minValueNode(root->right);
//
//        // Copy the inorder successor's content to this node
//        root->data = temp->data;
//
//        // Delete the inorder successor
//        root->right = Delete(root->right, temp->data);
//    }
//    return root;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//    //[3.1] INSERTION
//    BST B1, * root1 = NULL;
//    root1 = B1.Insert(root1, 50);
//    B1.Insert(root1, 30);
//    B1.Insert(root1, 20);
//    B1.Insert(root1, 40);
//    B1.Insert(root1, 70);
//    B1.Insert(root1, 60);
//    B1.Insert(root1, 80);
//
//    B1.Inorder(root1);
//
//
//
//
//
//    //[3.2] SEARCH
//    cout << "\n" << "[3.2] SEARCH"; 
//    int number_to_search = 30;
//    if (B1.Search(root1, number_to_search))
//    {
//        cout << "\n" << number_to_search << " is present in the tree.";
//    }
//    else
//    {
//        cout << "\n" << number_to_search << " is not present in the tree.";
//    }
//
//
//
//
//    //[3.3] DELETE
//    cout << "\n"<<"\n" << "[3.3] DELETE"<<"\n";
//    B1.Inorder(root1);
//    int number_to_delete = 30;
//    cout << "\nNumber to be deleted is: " << number_to_delete<<"\n";
//    root1 = B1.Delete(root1, number_to_delete);
//    B1.Inorder(root1);
//
//
//
//
//
//
//
//
//
//    return 0;
//}