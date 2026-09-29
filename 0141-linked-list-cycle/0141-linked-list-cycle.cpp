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
    bool hasCycle(ListNode *head) 
    {
        ListNode* temp=head;
        if(head == nullptr || head->next == nullptr)
            return(false);
        while(temp!=nullptr)
        {
            temp->val=INT_MIN;
            if(temp->next != nullptr && temp->next->val==INT_MIN)
                return(true);
            temp=temp->next;
        }
        return(false);
    }
};