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
    bool same = true;  
    
    void isinOrder(TreeNode* p, TreeNode* q){
        if (p != NULL && q != NULL){
            isinOrder(p->left, q->left);
            if (p->val != q->val){same = false;}
            isinOrder(p->right, q->right);
        }      
        if (p!= NULL && q == NULL || p == NULL && q!= NULL){
            same = false;
        }
        
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        isinOrder(p, q);
        return same;
               
        
    }
};