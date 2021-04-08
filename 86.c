//86. patition a list

struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *dummy1, *dummy2, *cur1, *cur2,*cur;
    if(!head){
        return NULL;
    }
    dummy1= malloc(sizeof(struct ListNode));
    dummy2= malloc(sizeof(struct ListNode));
    cur= malloc(sizeof(struct ListNode));
    cur->next=head;
    dummy1->next= NULL;
    dummy2->next= NULL;
    cur1= dummy1;
    cur2= dummy2;
    while(cur->next){
        cur=cur->next;
        if(cur->val<x){
            cur1->next= cur;
            cur1= cur;
        }
        else{
            cur2->next=cur;
            cur2=cur;
        }
    }
    cur2->next=NULL;
    cur1->next= dummy2->next;
    return dummy1->next;
}
