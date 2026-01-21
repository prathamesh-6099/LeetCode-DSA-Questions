class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1. Create the dummy anchor
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                // 2. CREATE the new node and link it to our current tail
                tail->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                tail->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            // 3. Move the tail to the node we just created
            tail = tail->next;
        }

        // Handle remaining nodes
        while (list1 != NULL) {
            tail->next = new ListNode(list1->val);
            list1 = list1->next;
            tail = tail->next;
        }
        while (list2 != NULL) {
            tail->next = new ListNode(list2->val);
            list2 = list2->next;
            tail = tail->next;
        }

        // 4. Return the head (everything after the dummy)
        return dummy->next;
    }
};