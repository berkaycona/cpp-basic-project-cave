//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE-2 - BTrees
//
//#include <iostream>
//using namespace std;
//
//// A BTree Node
//class BTreeNode {
//	int* keys; // An array of keys
//	int t; // Minimum degree (defines the range for number of keys)
//	BTreeNode** C; // An array of child pointers
//	int n; // Current number of keys
//	bool leaf; // Is true when node is leaf. Otherwise false
//public:
//	BTreeNode(int _t, bool _leaf); // Constructor
//	void insertNonFull(int k);
//	void splitChild(int i, BTreeNode* y);
//	void traverse();
//	BTreeNode* search(int k);
//	int findKey(int k);
//	// returns NULL if k is not present.
//	void remove(int k);
//	void removeFromLeaf(int idx);
//	void removeFromNonLeaf(int idx);
//	int getPred(int idx);
//	int getSucc(int idx);
//	void fill(int idx);
//	void borrowFromPrev(int idx);
//	void borrowFromNext(int idx);
//	void merge(int idx);
//	friend class BTree; // Make BTree friend
//};
//
//class BTree {
//	BTreeNode* root; // Pointer to root node
//	int t; // Minimum degree
//public:
//	BTree(int _t) {
//		root = NULL;
//		t = _t;
//	}
//	void traverse() {
//		if (root != NULL)
//			root->traverse();
//	}
//	BTreeNode* search(int k) {
//		return (root == NULL) ? NULL : root->search(k);
//	}
//	void insert(int k);
//	void remove(int k);
//};
//
//// Constructor for BTreeNode class
//BTreeNode::BTreeNode(int _t, bool _leaf) {
//	t = _t;
//	leaf = _leaf;
//	keys = new int[2 * t - 1];
//	C = new BTreeNode * [2 * t];
//	n = 0;
//}
//
//// A utility function to insert a new key in this node. The assumption is, the node must be non-full when this function is called
//void BTreeNode::insertNonFull(int k)
//{
//	int i = n - 1;
//
//	if (leaf) {
//		while (i >= 0 && keys[i] > k) {
//			keys[i + 1] = keys[i];
//			i--;
//		}
//		keys[i + 1] = k;
//		n = n + 1;
//	}
//	else {
//		while (i >= 0 && keys[i] > k)
//			i--;
//		if (C[i + 1]->n == 2 * t - 1) {
//			splitChild(i + 1, C[i + 1]);
//			if (keys[i + 1] < k)
//				i++;
//		}
//		C[i + 1]->insertNonFull(k);
//	}
//}
//
//// A utility function to split the child y of this node. i is index of y in child array C[]. 
//// The child y must be full when this function is called
//void BTreeNode::splitChild(int i, BTreeNode* y)
//{
//	// Create a new node which is going to store (t-1) keys of y
//	BTreeNode* z = new BTreeNode(y->t, y->leaf);
//	z->n = t - 1;
//
//	// Copy the last (t-1) keys of y to z
//	for (int j = 0; j < t - 1; j++)
//		z->keys[j] = y->keys[j + t];
//
//	// Copy the last t children of y to z
//	if (y->leaf == false) {
//		for (int j = 0; j < t; j++)
//			z->C[j] = y->C[j + t];
//	}
//
//	// Reduce the number of keys in y
//	y->n = t - 1;
//
//	// Since this node is going to have a new child, create space of a new child
//	for (int j = n; j >= i + 1; j--)
//		C[j + 1] = C[j];
//
//	// Link the new child to this node
//	C[i + 1] = z;
//
//	// A key of y will move to this node. Find the location of new key and move all greater keys one space ahead
//	for (int j = n - 1; j >= i; j--)
//		keys[j + 1] = keys[j];
//
//	// Copy the middle key of y to this node
//	keys[i] = y->keys[t - 1];
//
//	// Increment count of keys in this node
//	n = n + 1;
//}
//
//// Function to traverse all nodes in a subtree rooted with this node
//void BTreeNode::traverse() {
//	int i;
//	for (i = 0; i < n; i++) {
//		if (leaf == false)
//			C[i]->traverse();
//		cout << " " << keys[i];
//	}
//	if (leaf == false)
//		C[i]->traverse();
//}
//
//// Function to search key k in subtree rooted with this node
//BTreeNode* BTreeNode::search(int k) {
//	int i = 0;
//	while (i < n && k > keys[i])
//		i++;
//	if (keys[i] == k)
//		return this;
//	if (leaf == true)
//		return NULL;
//	return C[i]->search(k);
//}
//
//// The main function that inserts a new key in this B-Tree
//void BTree::insert(int k) {
//	if (root == NULL) {
//		root = new BTreeNode(t, true);
//		root->keys[0] = k;
//		root->n = 1;
//	}
//	else {
//		if (root->n == 2 * t - 1) {
//			BTreeNode* s = new BTreeNode(t, false);
//			s->C[0] = root;
//			s->splitChild(0, root);
//			int i = 0;
//			if (s->keys[0] < k)
//				i++;
//			s->C[i]->insertNonFull(k);
//			root = s;
//		}
//		else
//			root->insertNonFull(k);
//	}
//}
//
//// A utility function that returns the index of the first key that is greater
//// or equal to k
//int BTreeNode::findKey(int k) {
//	int idx = 0;
//	while (idx < n && keys[idx] < k)
//		++idx;
//	return idx;
//}
//
//// A function to remove the key k from the sub-tree rooted with this node
//void BTreeNode::remove(int k) {
//	int idx = findKey(k);
//	// The key to be removed is present in this node
//	if (idx < n && keys[idx] == k) {
//		if (leaf)
//			removeFromLeaf(idx);
//		else
//			removeFromNonLeaf(idx);
//	}
//	else {
//		if (leaf) {
//			cout << "The key " << k << " is does not exist in the tree\n";
//			return;
//		}
//		bool flag = ((idx == n) ? true : false);
//		if (C[idx]->n < t)
//			fill(idx);
//		if (flag && idx > n)
//			C[idx - 1]->remove(k);
//		else
//			C[idx]->remove(k);
//	}
//	return;
//}
//
//void BTreeNode::removeFromLeaf(int idx) {
//	for (int i = idx + 1; i < n; ++i)
//		keys[i - 1] = keys[i];
//	n--;
//	return;
//}
//
//void BTreeNode::removeFromNonLeaf(int idx) {
//	int k = keys[idx];
//	if (C[idx]->n >= t) {
//		int pred = getPred(idx);
//		keys[idx] = pred;
//		C[idx]->remove(pred);
//	}
//	else if (C[idx + 1]->n >= t) {
//		int succ = getSucc(idx);
//		keys[idx] = succ;
//		C[idx + 1]->remove(succ);
//	}
//	else {
//		merge(idx);
//		C[idx]->remove(k);
//	}
//	return;
//}
//
//int BTreeNode::getPred(int idx) {
//	BTreeNode* cur = C[idx];
//	while (!cur->leaf)
//		cur = cur->C[cur->n];
//	return cur->keys[cur->n - 1];
//}
//
//int BTreeNode::getSucc(int idx) {
//	BTreeNode* cur = C[idx + 1];
//	while (!cur->leaf)
//		cur = cur->C[0];
//	return cur->keys[0];
//}
//
//void BTreeNode::fill(int idx) {
//	if (idx != 0 && C[idx - 1]->n >= t)
//		borrowFromPrev(idx);
//	else if (idx != n && C[idx + 1]->n >= t)
//		borrowFromNext(idx);
//	else {
//		if (idx != n)
//			merge(idx);
//		else
//			merge(idx - 1);
//	}
//	return;
//}
//
//void BTreeNode::borrowFromPrev(int idx) {
//	BTreeNode* child = C[idx];
//	BTreeNode* sibling = C[idx - 1];
//	for (int i = child->n - 1; i >= 0; --i)
//		child->keys[i + 1] = child->keys[i];
//	if (!child->leaf) {
//		for (int i = child->n; i >= 0; --i)
//			child->C[i + 1] = child->C[i];
//	}
//	child->keys[0] = keys[idx - 1];
//	if (!leaf)
//		child->C[0] = sibling->C[sibling->n];
//	keys[idx - 1] = sibling->keys[sibling->n - 1];
//	child->n += 1;
//	sibling->n -= 1;
//	return;
//}
//
//void BTreeNode::borrowFromNext(int idx) {
//	BTreeNode* child = C[idx];
//	BTreeNode* sibling = C[idx + 1];
//	child->keys[(child->n)] = keys[idx];
//	if (!(child->leaf))
//		child->C[(child->n) + 1] = sibling->C[0];
//	keys[idx] = sibling->keys[0];
//	for (int i = 1; i < sibling->n; ++i)
//		sibling->keys[i - 1] = sibling->keys[i];
//	if (!sibling->leaf) {
//		for (int i = 1; i <= sibling->n; ++i)
//			sibling->C[i - 1] = sibling->C[i];
//	}
//	child->n += 1;
//	sibling->n -= 1;
//	return;
//}
//
//void BTreeNode::merge(int idx) {
//	BTreeNode* child = C[idx];
//	BTreeNode* sibling = C[idx + 1];
//	child->keys[t - 1] = keys[idx];
//	for (int i = 0; i < sibling->n; ++i)
//		child->keys[i + t] = sibling->keys[i];
//	if (!child->leaf) {
//		for (int i = 0; i <= sibling->n; ++i)
//			child->C[i + t] = sibling->C[i];
//	}
//	for (int i = idx + 1; i < n; ++i)
//		keys[i - 1] = keys[i];
//	for (int i = idx + 2; i <= n; ++i)
//		C[i - 1] = C[i];
//	child->n += sibling->n + 1;
//	n--;
//	delete(sibling);
//	return;
//}
//
//void BTree::remove(int k) {
//	if (!root) {
//		cout << "The tree is empty\n";
//		return;
//	}
//	root->remove(k);
//	if (root->n == 0) {
//		BTreeNode* tmp = root;
//		if (root->leaf)
//			root = NULL;
//		else
//			root = root->C[0];
//		delete tmp;
//	}
//	return;
//}
//
//// Driver program to test above functions
//int main() {
//	// Create a BTree of minimum degree 3 (can contain a maximum of 2*3 - 1 = 5 keys)
//	BTree b(3);
//
//	// Inserting elements into the BTree
//	for (int i = 1; i <= 10; ++i) {
//		cout << "Inserting " << i << "...\n";
//		b.insert(i);
//	}
//
//	// Display the BTree
//	cout << "\nBTree after inserting 1 to 10:\n";
//	b.traverse();
//	cout << "\n";
//
//	// Search for an element in the BTree
//	int elementToSearch = 6;
//	if (b.search(elementToSearch) != NULL)
//		cout << "\nElement " << elementToSearch << " found in the BTree.\n";
//	else
//		cout << "\nElement " << elementToSearch << " not found in the BTree.\n";
//
//	// Removing an element from the BTree
//	int elementToRemove = 6;
//	cout << "\nRemoving " << elementToRemove << "...\n";
//	b.remove(elementToRemove);
//
//	// Display the BTree after removal
//	cout << "\nBTree after removing " << elementToRemove << ":\n";
//	b.traverse();
//	cout << "\n";
//
//	// Try to find the removed element
//	if (b.search(elementToRemove) != NULL)
//		cout << "\nElement " << elementToRemove << " found in the BTree.\n";
//	else
//		cout << "\nElement " << elementToRemove << " not found in the BTree.\n";
//
//	return 0;
//}
//
//
