//142. Linked List Cycle II
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast, *slow, *pre1, *pre2;
    fast= head;
    slow= head;
    pre1= head;
    pre2= NULL;
    if(!head||!head->next){
        return NULL;
    }
    while(fast){
        slow= slow->next;
        if(fast->next && fast->next->next){
            fast= fast->next->next;
        }
        else{
            return NULL;
        }
        if(fast==slow){
            pre2= fast;
            break;
        }
    }
    if(!pre2){
        return NULL;
    }
    if(pre1==pre2){
        return pre1;
    }
    while(true){
        pre1= pre1->next;
        pre2= pre2->next;
        if(pre1==pre2){
            return pre1;
        }
    }
}
