struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *slow, *fast;
    slow= head;
    fast= head;
    while(fast && fast->next){
        fast= fast->next->next;
        slow= slow->next;
    }
    return slow;
}
