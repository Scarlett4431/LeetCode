// 143. Reorder List

void reorderList(struct ListNode* head){
    struct ListNode *fast, *slow, *cur2, *pre2, *next2, *new;
    struct ListNode *pre1, *cur1;
    fast= head;
    slow= head;
    if(!head||!head->next){
        return;
    }
    while(fast&& fast->next){
        fast= fast->next->next;
        slow= slow->next;
    }
    cur2= slow->next;
    slow->next= NULL;
    pre2= NULL;
    while(cur2){
        next2= cur2->next;
        cur2->next= pre2;
        pre2= cur2;
        cur2= next2;
    }
    pre1= head;
    cur1= head->next;
    while(pre2){
        cur1= pre1->next;
        pre1->next= pre2;
        cur2= pre2->next;
        pre2->next= cur1;
        pre1= cur1;
        pre2= cur2;
    }
    return;    
}
