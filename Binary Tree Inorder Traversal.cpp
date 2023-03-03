class Solution {
    vector<int> v;
        void solve(TreeNode* t){
            if(t == NULL)
             return ;
           
            solve(t->left);
             v.push_back(t->val);
            solve(t->right);
        }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        solve(root);
        return v;
    }
};
