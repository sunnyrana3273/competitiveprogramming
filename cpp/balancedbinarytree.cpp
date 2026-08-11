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
    bool isBalanced(TreeNode* root) {
        /*
        A height-balanced binary tree is a binary tree 
        in which the depth of the two subtrees of every 
        node never differs by more than one.
        */
        bool result; 
        result = true;
        for (TreeNode* roots : root){
            if (getDepth(root) - getDepth(root - 1) > 1){
                result = false; 
                return result;
        }   
        return result;
        }

    }

    int getDepth(TreeNode* root){

    }
};