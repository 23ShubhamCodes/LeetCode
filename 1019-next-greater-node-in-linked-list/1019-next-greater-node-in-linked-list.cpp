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
        vector<int> ans1;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }   
        /*int max=0;
        int max2=max;
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(i==ans.size()-1)
            {
                ans1.push_back(0);
                max=ans[i];
                continue;
            }
            if(ans[i]>=max)
            {
                max=ans[i];
                max2=max;
                ans1.push_back(0);
                continue;
            }
            if(ans[i]<max2)
            {
                ans1.push_back(max2);
                max2=ans[i];
                continue;
            }
            if(ans[i]<max && ans[i]>=max2)
            {
                ans1.push_back(max);
                max2=ans[i];
                continue;
            }
        }
        reverse(ans1.begin(),ans1.end());
        return(ans1);*/
        for(int i=0;i<ans.size();i++)
        {
            int k=0;
            for(int j=i+1;j<ans.size();j++)
            {
                if(ans[i]<ans[j])
                {
                    ans1.push_back(ans[j]);
                    k=1;
                    break;
                }
            }
            if(i==ans.size()-1 || k==0) 
                ans1.push_back(0);        
        }
        return(ans1);
    }
};