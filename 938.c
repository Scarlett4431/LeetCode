//938. Range Sum of BST

int rangeSumBST(struct TreeNode* root, int low, int high){
    int a=0;
    find(root, &a, low, high);
    return a;
}

void find(struct TreeNode* cur, int *res, int low, int high){
    if(!cur) return;
    if(cur->val>= low && cur->val<= high){
        *res+= cur->val;
    }
    find(cur->left, res, low, high);
    find(cur->right, res, low, high);
}
