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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* tempA =headA; 
        int a=0,b=0;
        if(headA==headB)
            return(headA);
        if(headA==nullptr || headB==nullptr)
            return(0);
        while(tempA != nullptr)
        {
            ListNode* tempB =headB;
            while(tempB != nullptr)
            {
                if(tempB == tempA)
                    return(tempB);
                tempB=tempB->next;
            }
            tempA=tempA->next;
        }
        return(0);
    }
};