#include <iostream>

using namespace std;

struct Node
{
  int key;
  Node * parent;
  Node * left;
  Node * right;
  Node(int _key, Node * _parent, Node * _left, Node * _right)
  {
    key = _key;
    parent = _parent;
    left = _left;
    right = _right;
  }Node(){};
};

int main()
{

  return 0;
}

class BST
{
  private:
    Node * root;
  public:
  void insert(int value);
  /*
    Node * temp = root;
    Node * parent = NULL;
    Node * newNode = Node(value, NULL, NULL, NULL);
    while(temp != NULL)
    {
      parent = temp;
      if(newNode->key < temp->key)
        temp = temp->left;
      else
        temp = temp->right;
    }
    if(parent == NULL)
      root = newNode;
    else if(node->key < parent->key)
    {
      parent->left = newNode;
      newNode->parent = parent;
    }
    else
    {
      parent->right = newNode;
      newNode->parent = parent;
    }
  */
  Node * search(int value);
  /*
    Node * newNode = root;
    while(newNode != NULL) // Null when tree is empty, or when reached bottom
    {
      if(newNode->key > value) // DEN > CHI or 4 > 2 then conditional true
      {
        newNode = newNode->left;
      }
      else if(newNode->key < value) // DEN < LA or 4 < 6  then conditional true
      {
        newNode = newNode->right;
      }
      else
      {
        return newNode; // Return the node where the valu was found
      }
    }
    return NULL;
  */
  void Init(); // Also constructor
  void deleteValue(int value);

  /*
    Recursive way of printing a tree in order
    printNode(Node * node)
      if(node->leftChild != NULL)
        printNode(node->leftChild);
      cout node->key;
      if(node->rightChild != NULL)
        printNode(node->rightChild);
      cout node->key;
  */

};
/*
Binary Search Trees

Trees - Have a hierarchial relationship
Binary Search Tree - Binary tree with ordering in the data
  - Nodes to the left have keys less than the parent key
  - Nodes to the right have keys greater than the parent key

                                           PARENT
                                     _____________________
                                    /                     \
                                   /                       \

                              LEFT CHILD                RIGHT CHILD
                            _____________              _______________
                           /             \            /               \
                          /               \          /                 \
                       LEFT             RIGHT      LEFT              RIGHT
                    __________        _________  _________        __________

Example:
  Build a BST from <4, 2, 6, 9, 1, 3>

                                                4
                                     _____________________
                                    /                     \
                                   /                       \

                                  2                         6
                            _____________              _______________
                           /             \                            \
                          /               \                            \
                         1                 3                            9
                    __________         _________                     ________

Example:
  Build a BST from <DEN, LA, CHI, VEGAS, SD, DET, NY>

                                              DEN
                                     _____________________
                                    /                     \
                                   /                       \

                              CHI                           LA
                            _____________              _______________
                                                      /               \
                                                     /                 \
                                                    DET              VEGAS
                                                _________           __________
                                                                   /
                                                                  /
                                                                SD
                                                              ______
                                                             /
                                                            /
                                                           NY
                                                        _____
Created by comparins the ASCII values

*/
