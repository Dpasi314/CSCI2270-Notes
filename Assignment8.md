```c++
struct TreeNode
{
	std::string key;
	int level; // This is the level of the node (Root would be 0, it's children 1, etc)
	TreeNode * nodes = new TreeNode[2]; // Start of with 2 children and then double as needed
	TreeNode * parent; // Parent of node, easier to re-assign pointers
}
```
