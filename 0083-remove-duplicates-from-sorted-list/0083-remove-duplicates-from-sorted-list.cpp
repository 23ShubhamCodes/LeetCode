/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        /*unordered_map<int,int> m;
        ListNode* temp=head;
        ListNode* temp2=head;
        while(temp!=nullptr)
        {
            m[temp->val]++;
            if(m[temp->val]>1)
            {
                temp2->next=temp->next;

            }

            temp=temp->next;
        }  
        return(head);*/
        ListNode* temp = head;

        while(temp != nullptr && temp->next != nullptr)
        {
            if(temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};