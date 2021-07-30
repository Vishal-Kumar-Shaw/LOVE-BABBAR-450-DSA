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
    TreeNode* solve(vector<int>pre, int l, int r, int &i, int size){
       if(i>=size) return NULL;
        if(l>r) return NULL;
        if(pre[i]<l || pre[i] > r) return NULL;
        int x = pre[i];
        TreeNode *p = new TreeNode(pre[i]);
        i++;
        p->left=solve(pre,l,x-1,i,size);
        p->right=solve(pre,x+1,r,i,size);
        return p;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      int i=0;
        int size= preorder.size();
        int l=INT_MIN, r= INT_MAX;
        TreeNode*root=solve(preorder,l,r,i,size);
        return root;
    }
};