struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode *pre, *cur;
    struct ListNode *dummy= malloc(sizeof(struct ListNode));
    dummy->next= head;
    pre= dummy;
    cur= head;
    while(cur){
        if(cur->val== val){
            pre->next= cur->next;
            cur= pre->next;
        }
        else{
            pre= cur;
            cur= cur->next;
        }
    }
    return dummy->next;
}
