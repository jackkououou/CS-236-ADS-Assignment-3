#include <iostream>
#include <vector>
#include <string>
#include "Btree.h"

using namespace std;

int main()
{
	BST Tree;
	double input;
	vector<double> ilist;
	cout << "This program will take numbers from you then insert them into a binary tree." << endl;
	cout << "It will the then print them out in order and also return the height of the tree." << endl;
	cout << "Enter 10 numbers (XX XX XX XX XX XX XX XX XX XX ) *space at the end of last input* : " << endl;

	//while ((cin >> input) && /*(ilist.size() <= 10)*/ input != -1)
	//{
	//	ilist.push_back(input);
	//	if (ilist.size() == 10)
	//		cin.ignore();
	//}
	for (int i = 1; i <= 10 && (cin >> input) ; i++)			//Using a loop to take up to ten inputs and place them in a vector
		ilist.push_back(input);


	Tree.insert(ilist);

	cout << "The items in the tree inorder are : " << endl;
	Tree.inorder();
	
	cout << endl << "The height of the tree is " << Tree.height() << endl;
	cout << "The number of leaves is " << Tree.leafCounter() << endl;

	system("PAUSE");
	return 0;
}