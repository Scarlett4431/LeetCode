struct ListNode** splitListToParts(struct ListNode* root, int k, int* returnSize){
    struct ListNode *cur= root;
    int i= 0;
    int each, leave;
    while (cur){
        cur= cur->next;
        i++;
    }
    each= i/k;
    leave= i%k;
    int p=0, q=1;
    struct ListNode **res = (struct ListNode **)calloc(k, sizeof(struct ListNode *));
    for(p=0; p<k && root; p++){
        res[p]= root;
        for(q=1; q< each+ (p<leave);q++){
            root= root->next;
        }
        struct ListNode *t= root->next;
        root->next= NULL;
        root= t;
    }
    *returnSize = k;
    return res;
}

