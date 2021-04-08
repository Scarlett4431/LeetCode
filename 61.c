/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int k){
    int count=0;
    struct ListNode *cur= head;
    if(!head ||!head->next){
        return head;
    }
    while(cur){
        count++;
        cur= cur->next;
    }
    k= k % count;
    if(k==0){
        return head;
    }
    struct ListNode *fast= head, *slow1= head, *slow2= head;
    while(fast->next){
        if((k) <=0){
            slow1= slow1->next;
        }
        if((k-1)<=0){
            slow2= slow2->next;
        }
        fast= fast->next;
        k--;
    }
    slow1->next= NULL;
    fast->next= head;
    head= slow2;
    return head;
}
