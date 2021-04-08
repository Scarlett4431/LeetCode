//141. Linked List Cycle
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast, *slow;
    fast= head;
    slow= head;
    if(!head|| !head->next){
        return false;
    }
    while(fast){
        slow= slow->next;
        if(fast->next&& fast->next->next){
            fast= fast->next->next;
        }
        else{
            return false;
        }
        if(fast==slow){
            return true;
        }
        
    }
    return false;
}
