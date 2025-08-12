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
    struct ListNode* result = NULL;   //tail
    struct ListNode* final = NULL;    //head  

    while (l != NULL && r != NULL)
    {
        struct ListNode* temp = NULL;
        if (l->val < r->val)
        {
            temp = malloc(sizeof(struct ListNode));
            temp->val = l->val;
            temp->next = NULL;
            l = l->next;
        }
        else
        {
            temp = malloc(sizeof(struct ListNode));
            temp->val = r->val;
            temp->next = NULL;
            r = r->next;
        }

        if (result == NULL)
        {
            result = temp;            
            final = temp;             
        }
        else
        {
            result->next = temp;
            result = result->next;   
        }
    }

    if (final == NULL)  
    {          
        if (l!=NULL)
        {
            return l;
        }
        else
        {
            return r;
        }
    }
    if (l != NULL)
        result->next = l;
    else if (r != NULL)
        result->next = r;

    return final;                    
}