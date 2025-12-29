class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};
        vector<int> left = inorderTraversal(root->left);
        vector<int> right = inorderTraversal(root->right);
        vector<int> result;
        result.insert(result.end(),left.begin(),left.end());
        result.push_back(root->val);
        result.insert(result.end(),right.begin(),right.end());
        return result;
    }
};

//Binary Tree Inorder Traversal
