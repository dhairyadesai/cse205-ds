class Solution {

    void solve(int i, int target, vector<int>& temp, vector<vector<int>>& ans, vector<int>& candidates){
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        if(target < 0)
            return;
        if(i == candidates.size())
            return;

        solve(i+1,target,temp,ans,candidates);

        temp.push_back(candidates[i]);    
        solve(i,target-candidates[i],temp,ans,candidates);
        temp.pop_back();
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0,target,temp,ans,candidates);
        return ans;
    }
};