/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
*/

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* h1=l1;
    struct ListNode* h2=l2;
    struct ListNode* l3 = NULL;
    struct ListNode* h3 = NULL;
    int carry=0;
    while(h1!=NULL || h2!=NULL || carry)  //testcase where carry remains
    {
        int n1 = 0, n2 = 0, n3;
        
        if (h1!=NULL)
        {
            n1+=(h1->val);
            h1=h1->next;
        }
        if(h2!=NULL)
        {
            n2+=(h2->val);
            h2=h2->next;
        }
        n3 = n2+n1+carry;
        carry= n3/10;

        struct ListNode * temp = malloc(sizeof(struct ListNode));
        temp->val=n3%10;
        temp->next=NULL;

        if (l3==NULL)
        {
            l3=temp;
            h3=temp;
        }
        else
        {
            h3->next=temp;
            h3=h3->next;
        }
        
    }
return l3;
}
