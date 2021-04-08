//104. Maximum Depth of Binary Tree

int maxDepth(struct TreeNode* root){
    int max(int a, int b);
    return root? max(maxDepth(root->left),maxDepth(root->right))+1: 0;
}

int max(int a, int b){
    if(a>b) return a;
    else return b;
}
