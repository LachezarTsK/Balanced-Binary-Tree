
public class Solution {

    public boolean isBalanced(TreeNode root) {
        if (root == null) {
            return true;
        }
        return Math.abs(maxHeight(root.left) - maxHeight(root.right)) < 2
                && isBalanced(root.left) && isBalanced(root.right);
    }

    public int maxHeight(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int left = maxHeight(root.left);
        int right = maxHeight(root.right);
        return Math.max(left + 1, right + 1);
    }
}

// Class TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
