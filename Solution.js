
// Function TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}

/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isBalanced = function (root) {
    if (root === null) {
        return true;
    }
    return Math.abs(maxHeight(root.left) - maxHeight(root.right)) < 2
            && isBalanced(root.left) && isBalanced(root.right);
};

/**
 * @param {TreeNode} root
 * @return {number}
 */
function maxHeight(root) {
    if (root === null) {
        return 0;
    }
    let left = maxHeight(root.left);
    let right = maxHeight(root.right);
    return Math.max(left + 1, right + 1);
}
