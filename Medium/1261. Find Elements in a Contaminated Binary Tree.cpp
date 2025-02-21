class FindElements {
public:
    void solve(TreeNode* root) {
        if (root == NULL) {
            return;  
        }

        values_list.push_back(root->val);

        if (root->left != NULL) {
            root->left->val = root->val * 2 + 1; 
        }
        solve(root->left);

        if (root->right != NULL) {
            root->right->val = root->val * 2 + 2;  
        }
        solve(root->right);
    }

    vector<int> values_list;  

    FindElements(TreeNode* root) {
        root->val = 0;  
        solve(root);
    }

    bool find(int target) {
        for (int i = 0; i < values_list.size(); i++) {
            if (target == values_list[i]) return true;  
        }
        return false;  
    }
};
