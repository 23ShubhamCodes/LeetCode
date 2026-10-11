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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        /*long long a=0,b=0,c=0,d=0;
        while(l1!=nullptr)
        {
            a=a*10+l1->val;
            l1=l1->next;
        }    
        while(l2!=nullptr)
        {
            b=b*10+l2->val;
            l2=l2->next;
        }   
        while(a>0)
        {
            int temp=a%10;
            c=c*10+temp;
            a=a/10;
        }
        while(b>0)
        {
            int temp=b%10;
            d=d*10+temp;
            b=b/10;
        }
        int sum=c+d;
        ListNode* temp = new ListNode(sum%10);
        ListNode* temp2=temp;
        sum=sum/10;
        while(sum>0)
        {
            ListNode* temp3 = new ListNode(sum%10);
            temp->next=temp3;
            temp=temp->next;
            sum=sum/10;
        }
        return(temp2);*/
        int carry=0;
        ListNode* temp=new ListNode();
        ListNode* temp2=temp;
        while(l1!=nullptr || l2!=nullptr || carry!=0)
        {
            int sum=carry;
            if(l1!=nullptr)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            ListNode* temp3=new ListNode(sum%10);
            temp->next=temp3;
            temp=temp->next;
        }
        return(temp2->next);
    }
};