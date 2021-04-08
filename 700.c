//700 Search in a Binary Search Tree

struct TreeNode* searchBST(struct TreeNode* root, int val){
    if(!root){
        return NULL;
    }
    else if (val > root->val){
		  return searchBST(root->right,val);
		}
	else if (val < root->val){
		  return searchBST(root->left,val);
		}
	return root;
}
