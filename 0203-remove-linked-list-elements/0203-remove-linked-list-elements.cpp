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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==nullptr)
            return(head);
        ListNode* temp=head;
        ListNode* temp2= new ListNode(0,temp);
        while(temp!=nullptr)
        {
            if(temp->val==val && temp2->next==temp)
            {
                temp2->next=temp->next;
            }
            else if(temp->val==val)
            {
                head->next=temp->next;
                temp=temp->next;
                continue;
            }
            head=temp;
            temp=temp->next;
        }  
        return(temp2->next); 

    }
};