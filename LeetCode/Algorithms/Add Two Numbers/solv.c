/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
   int carry=0;

    struct ListNode* result = malloc(sizeof(struct ListNode));
    struct ListNode* retn = NULL;
    struct ListNode* temp =result;  
  
    
    while(l1 || l2) 
    { 
        int lr=0, ll=0, res=0;
        if(l1)
        {
            ll=l1->val;
            l1 = l1? l1->next: NULL;
        }
        if(l2)  {
            lr=l2->val;                  
            l2 = l2? l2->next: NULL;
        }                    
        res= ll+lr+carry;
        carry=res/10;
        temp->val=res%10;
        if(l1 || l2){
            temp->next = malloc(sizeof(struct ListNode));
            temp= temp->next ;
        }
        else if(carry){
            temp->next = malloc(sizeof(struct ListNode));
            temp= temp->next ;
            temp->val=carry;
        }
                   
    }
    temp->next=NULL;
    return result;

}
