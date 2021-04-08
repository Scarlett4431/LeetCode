//110. Balanced Binary Tree

bool isBalanced(struct TreeNode* root){
    int helper(struct TreeNode* cur);
    int q= helper(root);
    if(q==-1)
        return false;
    return true;
}

int helper(struct TreeNode* cur){
    if(!cur)
        return 0;
    int l= helper(cur->left);
    int r= helper(cur->right);
    if(abs(l-r)>1||l==-1 ||r==-1)
        return -1;
    return ((l>r)? l:r)+1;
}

