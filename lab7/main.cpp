#include <iostream>
#include "BST.h"

using namespace std;

int main()
{

  BST<int>tree;


  tree.insertRecur(55);
  tree.insertRecur(44);
  tree.insertRecur(32);
  tree.insertRecur(88);
  tree.insertRecur(17);
  tree.insertRecur(49);
  tree.insertRecur(62);
  tree.insertRecur(88);
  tree.insertRecur(92);
  tree.insertRecur(100);


  tree.display(cout);
  cout << endl << endl;

  cout << "Let's find an item iteratively" << endl;
  if(tree.searchIterative(2)) {
	  cout << "Found" << endl;
	}
  else {
	  cout << "Lost" << endl;
  }

  cout << "Let's find out the height of this tree" << endl;
  cout << tree.heightIterative() << endl;

  cout << "Is this a proper search tree?" << endl;
  cout << tree.searchTree() << endl;

  return 0;
  
}
