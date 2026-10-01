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
    int getDecimalValue(ListNode* head) 
    {
        vector<int> a;
        if(head->next == nullptr && head->val == 0)
            return(0);
        else if(head->next == nullptr && head->val==1)
            return(1);
        while(head!=nullptr)
        {
            a.push_back(head->val);
            head=head->next;
        }    
        //reverse(a.begin(),a.end());
        int i=0;
        int val=0;
        while(i<a.size())
        {
            if(a[i]==1)
                val=val+pow(2,a.size()-1-i);
            i++;
        }
        return(val);
    }
};