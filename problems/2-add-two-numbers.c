/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
*/

//32 test cases passed
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* h1=l1;
    struct ListNode* h2=l2;
    int n1 = 0, n2 = 0;
    int placeval=1;
    while(h1!=NULL || h2!=NULL)  // Changed from l1/l2 to h1/h2
    {
        if (h1!=NULL)
        {
            n1+=(h1->val)*placeval;
            h1=h1->next;
        }
        if(h2!=NULL)
        {
            n2+=(h2->val)*placeval;
            h2=h2->next;
        }
        placeval*=10;
    }
    int n3 = n2+n1;
    int temp = n3;
    struct ListNode* l3 = malloc(sizeof(struct ListNode));      //Always initialise, don't leave dangling pointers
    l3->val=0;
    l3->next=NULL;
    struct ListNode* h3=l3;
    while(temp!=0)
    {
        int digit = temp%10;
        h3->val=digit;
        temp/=10;
        if(temp!=0) 
        {
            h3->next=malloc(sizeof(struct ListNode));
            h3=h3->next;
        } 
        else 
        {
            h3->next = NULL;
        }
    }
    return l3;
}