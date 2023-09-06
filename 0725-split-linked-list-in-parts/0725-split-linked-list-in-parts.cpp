class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int len = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }

        int each = len / k;
        int extra = len % k;
        temp = head;

        for (int i = 0; i < k; i++) {
            int part_length = (i < extra) ? (each + 1) : each;
            if (part_length == 0) {
                ans.push_back(nullptr);
            } else {
                ListNode* cur = temp;
                ListNode* prev = nullptr;
                for (int j = 0; j < part_length && temp != nullptr; j++) {
                    prev = temp;
                    temp = temp->next;
                }
                if (prev != nullptr) {
                    prev->next = nullptr;
                }
                ans.push_back(cur);
            }
        }
        return ans;
    }
};
