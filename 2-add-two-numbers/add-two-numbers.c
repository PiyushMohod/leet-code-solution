/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    dummy.val = 0;
    dummy.next = NULL;
   struct ListNode *current=&dummy;
    int carry=0;
    int x,y,sum,digit;
    while (l1!=NULL || l2!=NULL || carry!=0){
        if(l1!=NULL){
            x=l1->val;
        }
        else{
            x=0;
        }
        if(l2!=NULL){
            y=l2->val;
        }
        else{
            y=0;
        }
        sum=x+y+carry;
        carry=sum/10;
        digit=sum%10;
        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode->val=digit;
        newnode->next=NULL;
        current->next=newnode;
        current=current->next;
         if(l1!=NULL){
            l1=l1->next;
        }
        if(l2!=NULL){
            l2=l2->next;
        }
        

    }
    return dummy.next;
}