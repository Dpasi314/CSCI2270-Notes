#include <iostream>

using namespace std;

int main()
{

	return 0;
}


/*
Notes on Red and Black Trees
Tree Balancing
	The height of the left differs from the height of the right by no mare than 1
	To acomplish the balancing, build the BST as a "Red Black Tree"
	
Building the BST as a Red-Black tree
	Roughly height balanced (+-1)
	Where no path is more than 2x the length of another path to the bottom of the tree.
	Each node has:
		I. A color, a key, left, right, parent values.
			-> This color is either Red or Black
	Change in how leaf nodes are handled:
		I. Create and empty node, not nullptr! with same properties as the other nodes in the tree. "Null Node" but still not nullptr
	
Properties of a Red-Black tree:
	I. The Node is either RED or BLACK
       II. The root is BLACK
      III. Every "Null Node" is BLACK
       VI. If the node is RED both of its children must be BLACK
        V. For each node in the tree, all paths from node to leaf nodes contain the same number of BLACK nodes


          10 [X]
         /  \
    [A]5   22 [Y]
           /  \
      [B] 20 [ 25    ]
	      [  \    ] [C]
              [    26 ]
Left and Right Rotations
	Left Rotation:
	
          Y
         / \
       X    C
      / \
     A   B


	Right Rotation:

          X
         / \
        A   Y
           / \
          B   C


Left Rotate Algorithim:
	leftRotate(Node * x)
	{
		Node * y = x->rightChild;
		x->rightChild = y->leftChild;

		if(y->leftChild != NULLNODE)
			y->leftChild->parent = x;

		y->parent = x->parent;

		if(x->parent == NULLNODE) // This means X is the root
			root = y;
		else if(x == x->parent->leftChild) // True when X is the left child of it's parent
			x->parent->leftChild = y;
		else
			x->parent->rightChild = y;

		y->leftChild = x;
		x->parent = y;
	}

Insert Nodes:
	I. Use the nullNode for the leaf nodes instead of setting the chiildren to nullptr;
       II. Set the color of the new nodes to RED (Everytime add to tree, node is RED)
      III. Balance
	Violations:
		1. Root is BLACk
		2. Children of a RED node must be BLACK
	

Adding a New node:
	Case 1: The uncle is RED
	Solution: Recolor parent and uncle to be BLACK, recolor parent's parent to be RED
*/	