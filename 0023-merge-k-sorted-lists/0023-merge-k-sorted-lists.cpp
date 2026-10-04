class Solution {
public:
    // Existing nodes ke pointers ko rewire karke merge
    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tempC = &dummy;

        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                tempC->next = a;
                a = a->next;
            } else {
                tempC->next = b;
                b = b->next;
            }
            tempC = tempC->next;
        }

        if (a == NULL) {
            tempC->next = b;
        } else {
            tempC->next = a;
        }

        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if (arr.empty()) return NULL;

        // Vector ke end se do lists nikaal kar merge karo aur wapas daal do
        while (arr.size() > 1) {
            ListNode* a = arr.back();
            arr.pop_back();

            ListNode* b = arr.back();
            arr.pop_back();

            ListNode* c = merge(a, b);
            arr.push_back(c);
        }

        return arr[0];
    }
};