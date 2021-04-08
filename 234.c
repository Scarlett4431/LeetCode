bool isPalindrome(struct ListNode* head){
    struct ListNode* reverse(struct ListNode * head);
    struct ListNode *slow= head;
    struct ListNode *fast= head;
    while(fast && fast->next){
        fast= fast->next->next;
        slow= slow->next;
    }
    if(fast) slow= slow->next;
    slow= reverse(slow);
    while (slow){
        if(slow->val != head->val){
            return false;
        }
        slow= slow->next;
        head= head->next;
    }
    return true;
}

struct ListNode* reverse(struct ListNode * head){
    struct ListNode *prev= NULL;
    struct ListNode *next= NULL;
    while(head){
        next= head->next;
        head->next= prev;
        prev= head;
        head= next;
    }
    return prev;
}


