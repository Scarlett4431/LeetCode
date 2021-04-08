//92 reverse a list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* reverseRecursive(struct ListNode* , struct ListNode *);
    struct ListNode *pre= NULL;
    return reverseRecursive(head, pre);}
    
struct ListNode* reverseRecursive(struct ListNode* head, struct ListNode *pre){
    if(!head){
        return pre;
    }
    struct ListNode *next;
    next= head->next;
    head->next= pre;
    return reverseRecursive(next,head);
}


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *pre, *next;
    pre= NULL;
    if(!head){
        return pre;
    }
    while(head){
        next= head->next;
        head->next= pre;
        pre= head;
        head= next;
    }
    return pre;
}
