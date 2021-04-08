//206 reverse linked list 2
 struct ListNode* reverseBetween(struct ListNode* head, int m, int n){
    struct ListNode *dummy;
    struct ListNode *p1,*p2,*p3,*p4;
    struct ListNode *pre, *cur,*next;
    int i=0;
    if(!head->next ||n==1){
        return head;
    }
    dummy= malloc(sizeof(struct ListNode));
    dummy->next= head;
    p1=NULL;
    p2=NULL;
    p3=NULL;
    p4=NULL;
    pre=NULL;
    cur= head;
    while(cur){
        i++;
        next= cur->next;
        if(m<i && m<=n){
           cur->next= pre; 
        }
        if(i==m-1){
            p1=cur;
        }
        if(i==m){
            p2=cur;
        }
        if(i==n){
            p3=cur;
        }
        if(i==n+1){
            p4=cur;
        }
        
        pre= cur;
        cur= next;
    }
    if(!p1){
        dummy->next= p3;
    }
    else{
        p1->next= p3;
    }
    p2->next= p4;
    return dummy->next;
}
