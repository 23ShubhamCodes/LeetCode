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
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }   
        vector<int> ans1(ans.size(),0);
        stack<int> st;
        for(int i=ans.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=ans[i])
                st.pop();
            if(st.empty())
                ans1[i] = 0;
            else
                ans1[i] = st.top();
            st.push(ans[i]);
        }
        return(ans1);
    }
};