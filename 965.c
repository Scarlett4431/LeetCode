//965. Univalued Binary Tree

bool isUnivalTree(struct TreeNode* root){
    bool Traversal(struct TreeNode* cur, int val);
    int val= root->val;
    return Traversal(root, val);
}

bool Traversal(struct TreeNode* cur, int val){
    if (!cur){
        return true;
    }
    if(cur->val!= val){
        return false;
    }
    return Traversal(cur->left,val)&& Traversal(cur->right,val);
}
