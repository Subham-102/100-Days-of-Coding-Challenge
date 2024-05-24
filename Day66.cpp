class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        ListNode *prev = head;
        ListNode *curr = head->next;
        ListNode *start = head->next;
        int i = 0;

        while(curr != NULL && curr-> next != NULL)
        {
            i++;
            prev-> next = curr-> next;
            prev = curr;
            curr = curr-> next;
        }
        if(i % 2 == 1)
        {
            curr-> next = start;
            prev-> next = NULL;
        }
        else
        {
            prev-> next = start;
        }
        return head;
    }
};