//#pragma warning(disable : 4996)
////Cpp COMPREHENSIVE-2 - Tries
//
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <stdlib.h>
//
//
//#define NUM_CHARS 256 //How many different values a single byte can have.
//
//typedef struct trienode {
//	struct trienode* children[NUM_CHARS]; //this array is acting like a lookup table in c++
//	bool terminal;
//} trienode;
//
//trienode* createnode()
//{
//	trienode* newnode = (trienode*)malloc(sizeof(trienode));
//
//	for (int i = 0; i < NUM_CHARS; i++)
//	{
//		newnode->children[i] = NULL;
//	}
//	newnode->terminal = false;
//	return newnode;
//}
//
//bool trieinsert(trienode **root,const char* signedtext)//under some cicumstances, we may want to change the root. Thats why we use double pointer.
//{
//	if (*root == NULL)
//	{
//		*root = createnode();
//	}
//	unsigned char* text = (unsigned char*)signedtext;//related with negative indexes on lookup table
//
//	trienode* tmp=* root; //to traverse
//	int length = strlen(signedtext);
//
//	for (int i = 0; i < length; i++)
//	{
//		if (tmp->children[text[i]] == NULL)
//		{
//			tmp->children[text[i]] = createnode();
//		}
//
//		tmp = tmp->children[text[i]];
//	}
//
//	if (tmp->terminal)
//	{
//		return false;
//	}
//	else {
//		tmp->terminal = true;
//		return true;
//	}
//}
//
//void printtrie_recursive(trienode* node, unsigned char* prefix, int length)
//{
//	unsigned char* newprefix = (unsigned char*)malloc((length + 2) * sizeof(unsigned char));
//	memcpy(newprefix, prefix, length);
//	newprefix[length + 1] = 0;
//
//	if (node->terminal)
//	{
//		printf("WORD: %s\n", prefix);
//	}
//	for (int i = 0; i < NUM_CHARS; i++)
//	{
//		if (node->children[i] != NULL)
//		{
//			newprefix[length] = i;
//			printtrie_recursive(node->children[i], newprefix, length + 1);
//		}
//	}
//}
//
//void printtrie(trienode* root)
//{
//	if (root == NULL)
//	{
//		printf("TRIE IS EMPTY!\n");
//		return;
//	}
//	printtrie_recursive(root, NULL, 0);
//}
//
//bool searchTrie(trienode* root, const char* signedtext)
//{
//	unsigned char* text = (unsigned char*)signedtext; //so that we don't get negative indexes into our lookup table since that would cause weird memory problems.
//	int length = strlen(signedtext);
//	trienode* tmp = root;
//
//	for (int i = 0; i < length; i++)
//	{
//		if (tmp->children[text[i]] == NULL)
//		{
//			return false;
//		}
//		unsigned char c = text[i];//grabbing the ith character
//		tmp = tmp->children[c];
//	}
//	return tmp->terminal;//if terminal is true it is there.
//}
//
//bool nodeHasChildren(trienode* node)
//{
//	if (node == NULL) return NULL;
//
//	for (int i = 0; i < NUM_CHARS; i++)
//	{
//		if (node->children[i] != NULL)
//		{
//			//if there is at least one child
//			return true;
//		}
//	}
//	return false;
//}
//
//trienode *deletestr_recursion(trienode *node, unsigned char* text, bool *deleted)
//{
//	if (node == NULL) return node;
//
//	if (*text == '\0')//end of the string
//	{
//		if (node->terminal)
//		{
//			node->terminal = false;
//			*deleted = true;
//
//			if (nodeHasChildren(node) == false)
//			{
//				free(node);
//				node = NULL;
//			}
//		}
//		return node;
//	}
//	node->children[text[0]] = deletestr_recursion(node->children[text[0]], text + 1, deleted);
//
//	if (*deleted && nodeHasChildren(node) == false && node->terminal == false)
//	{
//		free(node);
//		node = NULL;
//	}
//	return node;
//}
//
//bool deletestr(trienode** root, const char* signedtext)//true if we deleted something
//{
//	unsigned char* text = (unsigned char*)signedtext;
//	bool result = false;
//
//	if (*root == NULL) return false;
//
//	*root=deletestr_recursion(*root, text, &result);
//
//	return result;
//	
//}
//
//int main()
//{
//	trienode* root = NULL;
//
//	trieinsert(&root, "and");
//	trieinsert(&root, "ant");
//	trieinsert(&root, "dad");
//	trieinsert(&root, "go");
//	printtrie(root);
//
//	printf("SEARCH FOR and: %d\n", searchTrie(root, "and"));
//	printf("SEARCH FOR dad: %d\n", searchTrie(root, "dad"));
//	printf("SEARCH FOR weird: %d\n", searchTrie(root, "weird"));
//
//	printf("\nAFTER DELETION\n");
//	deletestr(&root, "and");
//	printtrie(root);
//}