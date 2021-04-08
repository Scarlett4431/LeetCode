//100. Same Tree

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    bool Traversal(struct TreeNode *cur1, struct TreeNode *cur2);
    return Traversal(p,q);
}

bool Traversal(struct TreeNode *cur1, struct TreeNode *cur2){
    if(!cur1 && !cur2){
        return true;
    }
    if(!cur1)
        return false;
    if(!cur2)
        return false;
    if(cur1->val!= cur2->val){
        return false;
    }
    else
        return Traversal(cur1->left,cur2->left) && Traversal(cur1->right, cur2->right);
}
