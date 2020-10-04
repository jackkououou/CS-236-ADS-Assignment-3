#pragma once
#include <iostream>
#include <vector>
using namespace std;

class BTreeNode
{
public:
	BTreeNode(double x)
	{
		value = x;
		left = nullptr;
		right = nullptr;
	}
private:
	double value;
	BTreeNode *left, *right;
	friend class BST;
};


class BST
{
private:
	void insert(double x, BTreeNode * node);			//Passes the value and current node through recursion to input numbers in order
	void inorder(BTreeNode *t);							//Traverses sorted tree left first, then right
	int leafCounter(BTreeNode *t);						//Counts leaves
	static int height(BTreeNode *t);					//Returns height of tree
	BTreeNode *tree;
public:
	int height() { return height(tree); }				//Calls private height function
	void insert(vector<double> & v) ;					//Passes input vector to a private insert function; Dishes out values within vector
	void inorder() { return inorder(tree); }			//Calls private inorder print function
	int  leafCounter() { return leafCounter(tree); }	//Calls private leafcounter function
	BST() { tree = nullptr; }
};