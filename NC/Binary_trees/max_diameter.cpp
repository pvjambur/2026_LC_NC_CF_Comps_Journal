/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
//maximum diameter of binary tree need not necessarily pass through root

class Solution {
    private int maxDepth(TreeNode node){
        if (node==nullptr) return 0;
        int left=maxDepth(node.left);
        int right=maxDepth(node.right);
        return max(left,right)+1;
    }
    
    public int diameterOfBinaryTree(TreeNode root) {
        if (root==nullptr) return 0;
        int leftD=maxDepth(root.left);
        int rightD=maxDepth(root.right);
        int currD=leftD+rightD;
        int leftDiameter=diameterOfBinaryTree(root.left);
        int rightDiameter=diameterOfBinaryTree(root.right);
        return max(currD, max(leftDiameter, rightDiameter));
    }
}
