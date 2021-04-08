//101. Symmetric Tree

bool isSymmetric(struct TreeNode* root){
    bool Traversal(struct TreeNode* left, struct TreeNode *right);
    if(!root)
        return true;
    if(!root->left&& !root->right)
        return true;
    if(!root->left || !root->right)
        return false;
    struct TreeNode* l= root->left;
    struct TreeNode* r= root->right;
    return Traversal(l,r);
}

bool Traversal(struct TreeNode* left, struct TreeNode *right){
    if(!left&& !right)
        return true;
    if(!left|| !right)
        return false;
    if(!left->left&& right->right)
        return false;
    if(!right->right&& left->left)
        return false;
    if(!left->right&& right->left)
        return false;
    if(!right->left&& left->right)
        return false;
    if(left->val!= right->val)
        return false;
    return Traversal(left->left, right->right)&& Traversal(right->left, left->right);
}
    
