//83. Remove Duplicates from Sorted List

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *pre, *cur, *next;
    if(!head||!head->next){
        return head;
    }
    pre= head;
    cur= pre->next;
    while(cur){
        next= cur->next;
        if(pre->val==cur->val){
            pre->next= next;
            free(cur);
            cur= next;
        }
        else{
            pre= cur;
            cur= next;
        }
    }
    return head;
}
