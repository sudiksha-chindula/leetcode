// 3/208 testcases passed
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    int length=0;
    while (temp!=NULL)
    {
        length+=1;
        temp=temp->next;
    }
    temp = head;
    int last = length-n+1;
    int count=1;
    struct ListNode* required = NULL;
    if (last==count)
    {
        head=head->next;
        free(head);
        return head;
    }
    if (last==1)
    {
        while (temp!=NULL)
        {
            temp=temp->next;
        }
        free(temp);
        return head;
    }
    while (temp!=NULL && temp->next!=NULL)
    {
        if (count+1==last)
        {
            required=temp->next;
            temp->next=temp->next->next;
            free(required);
            break;
        }
        temp=temp->next;
        count+=1;
    }

    return head;
}