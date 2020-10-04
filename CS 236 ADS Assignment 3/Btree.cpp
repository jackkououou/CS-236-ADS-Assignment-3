#include "Btree.h"

void BST::inorder( BTreeNode * node)
{
	if (node == nullptr)
		return;

	inorder(node->left);

	cout << node->value << ' ';

	inorder(node->right);
}

int BST::leafCounter(BTreeNode * t)
{
	if (t == nullptr)
		return 0;
	if (t->left == nullptr && t->right == nullptr)
		return 1;
	else
		return leafCounter(t->left) + leafCounter(t->right);
}

int BST::height(BTreeNode * t)
{
	if (t == nullptr)
		return 0;
	else
	{
		int lheight = height(t->left);
		int rheight = height(t->right);

		if (lheight > rheight)
			return (lheight + 1);
		else
			return (rheight + 1);
	}
}

void BST::insert(double x, BTreeNode * node)
{
	if (tree == nullptr)
	{
		tree = new BTreeNode(x);
		return;
	}
	else if (node->value > x)
	{
		if (node->left != nullptr)
		{
			insert(x, node->left);
		}
		else
		{
			node->left = new BTreeNode(x);
		}
	}
	else if (node->value < x)
	{
		if (node->right != nullptr)
		{
			insert(x, node->right);
		}
		else
		{
			node->right = new BTreeNode(x);
		}
	}
	else if (node->value == x)
	{
		if (node->right != nullptr)
		{
			insert(x, node->right);
		}
		else
		{
			node->right = new BTreeNode(x);
		}
	}
}

void BST::insert(vector<double>&v)		
{
	for (auto i = v.cbegin() ; i != v.end(); ++i)
	{
		insert(*i, tree);
	}
}

BST::~BST()
{
	delete this->tree;
}

BTreeNode::~BTreeNode()
{
	delete this->left;
	delete this->right;
	this->value = NULL;
}
