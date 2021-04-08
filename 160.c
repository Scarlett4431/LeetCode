
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *dum1, *dum2;
    int x=0, y=0;
    int t;
    dum1= headA;
    dum2= headB;
    int temp;
    if (!headA || !headB) return NULL;
    while(dum1){
        dum1= dum1->next;
        x++;
    }
    while(dum2){
        dum2= dum2->next;
        y++;
    }
    if(x>y){
        t= x-y;
        for (int i = 0; i < t; ++i) headA = headA->next;
    }
    if(y>x){
        t= y-x;
        for (int i = 0; i < t; ++i) headB = headB->next;
    }
    while (headA && headB && headA!= headB){
        headA= headA->next;
        headB= headB->next;
    }
    return (headA &&headB)? headA: headB;
}
