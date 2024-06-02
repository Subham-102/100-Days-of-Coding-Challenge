class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        stack<int> stk;
        int sum = 0;
        while (head) {
            sum += head->val;
            if (head->val == 0 and sum) {
                stk.push(sum);
                sum = 0;
            }
            head = head->next;
        }
        ListNode* prev = NULL;
        while (!stk.empty()) {
            head = new ListNode(stk.top(), prev);
            stk.pop();
            prev = head;
        }
        return head;
    }
};