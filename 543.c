//543. Diameter of Binary Tree

int diameterOfBinaryTree(struct TreeNode* root){
    int helper(struct TreeNode* cur, int *res);
    int a= 0;
    helper(root, &a);
    return a;
}

int helper(struct TreeNode* cur, int *res){
    if(!cur) return 0;
    int l= helper(cur->left, res);
    int r= helper(cur->right, res);
    if(l+r> *res){
        *res= l+r;
    }
    return ((l>r)? l:r)+1; 
}
