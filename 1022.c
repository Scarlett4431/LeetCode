//1022. Sum of Root To Leaf Binary Numbers
int sumRootToLeaf(struct TreeNode* root){
    void Traversal(struct TreeNode *cur, int old, int *res);
    int a=0;
    if(!root->left && !root->right){
        return root->val;
    }
    Traversal(root->left, root->val, &a);
    Traversal(root->right, root->val, &a);
    return a;
}

void Traversal(struct TreeNode *cur, int old, int *res){
    if(!cur)
        return;
    old= old*2+ cur->val;
    if(!cur->left && !cur->right)
        *res+=old;
    Traversal(cur->left, old, res);
    Traversal(cur->right,old, res);
}
