//82. Remove Duplicates from Sorted List II

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *pre, *dummy;
    dummy= malloc(sizeof(struct ListNode));
    dummy->next= head;
    pre= dummy;
    if(!head){
        return NULL;
    }
    while(head){
        if(head->next && head->val==head->next->val){
            while(head->next && head->val==head->next->val)
            {
                head= head->next;
            }
            pre->next= head->next;
        }
        else{
            pre=head;
        }
        head= head->next;
    }
    
    
