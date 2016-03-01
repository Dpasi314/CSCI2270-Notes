#include <iostream>
#include <iomanip>
// Deleting nodes from a binary search tree
struct Node {
	int value;
	Node * leftChild;
	Node * rightChild;
	Node * parent;
	Node(int _val, Node * _LC, Node * _RC, Node * _PT)
	{
		value = _val;
		leftChild = _LC;
		rightChild = _RC;
		parent = _PT;
	}Node(){};
};
Node * createBST(int * test, int size);
void printBST(Node * node);
void postorder(Node * p, int indent);
int main()
{
	int bstArray[10] = { 1, 3, 9, 4, 7, 6, 2, 8, 5, 0 };
	Node * node = createBST(bstArray, 10);
	postorder(node,0);
	return 0;
}

void printBST(Node * node)
{
	if(node->leftChild != nullptr)
		printBST(node->leftChild);
	std::cout << node->value << std::endl;
	if(node->rightChild != nullptr)
		printBST(node->rightChild);
	std::cout << node->value << std::endl;
}

void postorder(Node* p, int indent=0)
{	
    if(p != NULL) {
	if(p == NULL) std::cout << "NULL" << std::endl;
        if(p->leftChild) postorder(p->leftChild, indent+4);
        if(p->rightChild) postorder(p->rightChild, indent+4);
        if (indent) {
            std::cout << std::setw(indent) << ' ';
        }
       std::cout<< p->value << "\n ";
    }
}

Node * createBST(int * test, int size)
{
	Node *  node = nullptr;
	Node * parent = nullptr;
	Node * root = new Node(test[0], nullptr, nullptr, nullptr);
	node = root;
		for(int i = 1; i < size; i++)
	{	
		Node * newNode = new Node(test[i], nullptr, nullptr, nullptr);
		while(node != nullptr)
		{
			parent = node;
			if(newNode->value < parent->value)
				node = node->leftChild;
			else
				node = node->rightChild;
		}
		std::cout << "New Node=" << newNode->value << " added to the ";
		if(newNode->value < parent->value)
		{
			parent->leftChild = newNode;
			newNode->parent = parent;
			std::cout << "LEFT" << std::endl;
		}
		else
		{
			parent->rightChild = newNode;
			newNode->parent = parent;
			std::cout << "RIGHT" << std::endl;
		}
	}
	
	std::cout << "Tree Created" << std::endl;
	return root;
}
/*
 No Children Example:
	if(node->parent->leftChild == node)
		// This will be true when the node is the left child
		node->parent->leftChild = nullptr;
	else
		node->parent->rightChild = nullptr;
	
	delete node;

Node has 1 child Example:
	Either node.left or node.right is null but not both. 
	Move the child into the parents position
	Node *x = node->leftChild;
	Node->parent->leftChild = x;
*/
