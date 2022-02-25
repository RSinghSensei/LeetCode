/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v1;
    
    bool checkSort(const vector<int>&v1)
    {
        for (size_t i = 1; i < v1.size(); i++)
        {
            if (v1[i] <= v1[i - 1]){return false;}
        }
        return true;   
    }
    
    bool isValidBST(TreeNode* root) {
        if (root->left != nullptr){bool i = isValidBST(root->left);}
        v1.push_back(root->val);
        if (root->right != nullptr){bool j = isValidBST(root->right);}
        if (checkSort(v1)){return true;}
        return false;
    }
};