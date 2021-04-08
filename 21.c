/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *dummy= malloc(sizeof(struct ListNode));
    struct ListNode *pre= dummy;
    if(!l1){
        return l2;
    }
    if(!l2){
        return l1;
    }
    while(l1 && l2){
        if(l1->val< l2->val){
            pre->next= l1;
            l1= l1->next;
        }
        else{
            pre->next= l2;
            l2= l2->next;
        }
        pre= pre->next;
    }
    pre->next= l1? l1:l2;
    return dummy->next;
}
