class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;  

        ListNode* current = head;
        
        // Traverse the list
        while (current != nullptr && current->next != nullptr) {
  
            if (current->val == current->next->val) {
                current->next = current->next->next;
            } else {
               
                current = current->next;
            }
        }
        
        return head; 
    }
};
