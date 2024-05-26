class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(n == 1 && head->next==NULL) return NULL; 
        
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            count++;
            temp = temp -> next;
        }
        
        int nFromHead = count - n;

        temp = head;
        for(int i = 1 ; i < nFromHead ; i++)
        {
            temp = temp->next;
        }
        (nFromHead != 0) ? temp->next = temp->next->next : head=head->next;  
        return head;
    }
};