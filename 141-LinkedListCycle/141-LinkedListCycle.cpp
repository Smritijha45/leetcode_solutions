// Last updated: 1/13/2026, 10:49:37 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next ==nullptr) return NULL ; 
        //Create 2 pointer : fast and slow
        ListNode *slow = head ; 
        ListNode *fast = head ;
        //While loop 
        while(fast !=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow ==fast){
                return true ;
            }
        }
        return false ; 
    }
};