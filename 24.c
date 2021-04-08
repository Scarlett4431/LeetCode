struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *pre,*cur;
    pre= head;
    if(pre &&pre->next){
        cur= pre->next;
        pre->next= cur->next;
        cur->next= pre;
        head= cur;
        while(pre->next &&pre->next->next){
            //????pre ?????next
            cur= pre->next->next;
            pre->next->next= cur->next;
            cur->next= pre->next;
            pre->next= cur;
            pre= cur->next;
        }}
        return head;   
    }
