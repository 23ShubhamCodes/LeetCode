class Solution {
public:

    void second_backtrack(
        vector<int>& candidates,
        int target,
        int start,
        vector<int>& a,
        vector<vector<int>>& ans)
    {
        if(target == 0)
        {
            ans.push_back(a);
            return;
        }

        if(target < 0)
        {
            return;
        }

        for(int i = start; i < candidates.size(); i++)
        {
            a.push_back(candidates[i]);

            second_backtrack(
                candidates,
                target - candidates[i],
                i,
                a,
                ans
            );

            a.pop_back();
        }
    }

    vector<vector<int>> combinationSum(
        vector<int>& candidates,
        int target)
    {
        vector<vector<int>> ans;
        vector<int> a;

        second_backtrack(candidates, target, 0, a, ans);

        return ans;
    }
};