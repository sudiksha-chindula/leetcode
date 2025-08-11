/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //runs, but case 1 and 2 wrong output 
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* l = list1;
    struct ListNode* r = list2;
    struct ListNode* result = NULL;
    struct ListNode* final = result;
    while (l!=NULL && r!=NULL)
    {
        struct ListNode* temp = NULL;
        if (l->val<r->val)
        {
            temp = malloc(sizeof(struct ListNode));
            temp->val=l->val;
            temp->next=NULL;
            l=l->next;
        }
        else
        {
            temp = malloc(sizeof(struct ListNode));
            temp->val=r->val;
            temp->next=NULL;
            r=r->next;
        }
        result=temp;
        result=result->next;
        free(temp);
    }
    if (l!=NULL)
    {
        result=l;
    }
    if (r!=NULL)
    {
        result=r;
    }
    return final;
}