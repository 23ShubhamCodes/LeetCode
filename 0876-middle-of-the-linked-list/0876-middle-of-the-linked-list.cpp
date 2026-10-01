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
    ListNode* middleNode(ListNode* head) 
    {
        vector<int> a;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* temp2=head;
        int i=0;
        while(temp2!=nullptr)
        {
            if(temp2->val == a[a.size()/2] && i == a.size()/2)
            {
                break;
            }
            i++;
            temp2=temp2->next;
        }
        return(temp2);
    }
};