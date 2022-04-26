
using namespace std;

// Struct TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


class Solution {
    
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        return abs(maxHeight(root->left) - maxHeight(root->right)) < 2
                && isBalanced(root->left) && isBalanced(root->right);
    }
    
private:
    int maxHeight(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = maxHeight(root->left);
        int right = maxHeight(root->right);

        return max(left + 1, right + 1);
    }
};
