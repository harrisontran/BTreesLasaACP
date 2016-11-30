/**
	LASA Advanced Computer Science 1A
	btrees.cpp

	Purpose: Using the B-Tree data structure. 

	@author YOU!
	@version 1.0 11/30/2016
**/

#include <iostream>
using namespace std;

class BTreeNode {
private:
	int *keys;			// Array of keys
	int min; 			// Minimum number of keys
	BTreeNode **C; 		// Array of child pointers
	int k;				// The number of keys in this node
	bool leaf;			// True if node is a leaf. False otherwise.

public:
	// Constructor
	BTreeNode(int _t, bool _leaf); 

	// A function to traverse all nodes in a subtree rooted with this node
    void traverse();
 
    // A function to search a key in subtree rooted with this node.    
    BTreeNode *search(int q);   // returns NULL if q is not present.
};

class BTree {
private:
    BTreeNode *root; 	// Pointer to root node
    int t;  			// Minimum degree

public:
    // Constructor (Initializes tree as empty)
    BTree(int _t) 
    {  
    	root = NULL;  t = _t; 
    }
 
    // function to traverse the tree
    void traverse()
 	{  
 		if (root != NULL) 
 		{
 			root->traverse(); 
 		}
 	}
 
    // function to search a key in this tree
    BTreeNode* search(int k)
    {  
    	return (root == NULL)? NULL : root->search(k); 
   	}
};
 
// Constructor for BTreeNode class
BTreeNode::BTreeNode(int _min, bool _leaf)
{
    // Copy the given minimum degree and leaf property
    min = _min;
    leaf = _leaf;
 
    // Allocate memory for maximum number of possible keys and child pointers
    keys = new int[2*min-1];
    C = new BTreeNode *[2*min];
 
    // Initialize the number of keys as 0
    k = 0;
}

int main() {
	cout << "hi";
	return 0;
}