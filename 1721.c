//1721. Swapping Nodes in a Linked List
struct ListNode* swapNodes(struct ListNode* head, int k){
    struct ListNode* findNode(struct ListNode* head, int index);
    struct ListNode* dum,*you;
    dum= head;
    int index= 1;
    int ver= 0;
    int p,q;
    int count=1;
    if (index== k){
            p= dum->val;
        }
    while(dum!=NULL){
        dum= dum->next;
        index++;
        if (index== k){
            p= dum->val;
        }
    }
    dum= findNode(head, index-k-1);
    q= (dum->val);
    dum->val= p;
    you= findNode(head,k-1);
    you->val=q;
    return head;
}

struct ListNode* findNode(struct ListNode* cur, int index)
{  
   if (cur==NULL || index<0)
      return NULL;
   while(index>0){
      cur=cur->next;
      if (cur==NULL)
         return NULL;
      index--;
   }
   return cur;
}
