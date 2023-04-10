//C++ code to implement the above approach
#include <bits/stdc++.h>
// using the standard namespace
using namespace std;

// defining the structure for tree nodes
struct Node {
	int val;
	Node *left, *right;
	Node(int v)
		: val(v)
		, left(nullptr)
		, right(nullptr)
	{
	}
};

// defining the Solution class to check if a binary tree is
// balanced
class Solution {
	// helper function to determine if a binary tree is
	// balanced
	pair<bool, int> isBalancedfast(Node* root)
	{
		// base case: if root is null, the tree is balanced
		// and has height 0
		if (root == NULL) {
			pair<bool, int> p = make_pair(true, 0);
			return p;
		}
		// recursively call isBalancedfast function on left
		// and right subtrees
		pair<int, int> left = isBalancedfast(root->left);
		pair<int, int> right = isBalancedfast(root->right);

		// retrieve whether left and right subtrees are
		// balanced
		bool leftAns = left.first;
		bool rightAns = right.first;

		// check the difference in heights of left and right
		// subtrees
		bool diff = abs(left.second - right.second) <= 1;

		// create a pair to store the answer (whether the
		// tree is balanced) and its height
		pair<bool, int> ans;
		// set the height of the current node
		ans.second = max(left.second, right.second) + 1;
		// if both subtrees are balanced and their heights
		// differ by at most 1, the tree is balanced
		if (leftAns && rightAns && diff) {
			ans.first = true;
		}
		// otherwise, the tree is not balanced
		else {
			ans.first = false;
		}
		return ans;
	}

public:
	// Function to check whether a binary tree is balanced
	// or not.
	bool isBalanced(Node* root)
	{
		return isBalancedfast(root).first;
	}
};
//Driver Code
int main()
{
	// create a binary tree
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->left->left = new Node(8);

	// create an object of the Solution class
	Solution obj;
	// check if the binary tree is balanced using the
	// isBalanced function
	if (obj.isBalanced(root)) {
		cout << "The given binary tree is balanced."
			<< endl;
	}
	else {
		cout << "The given binary tree is not balanced."
			<< endl;
	}

	return 0;
}
//This code is contributed by Veerendra_Singh_Rajpoot
