\class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int st = nums.size();
    vector<int> ans(st);
    stack<int> s;

    s.push(-1);

    for(int i=2*st-1;i>=0;i--){
        while(!s.empty() && nums[i%st]>=s.top()){
            s.pop();
        }
        if(s.empty()) s.push(-1);
        ans[i%st]=s.top();
        s.push(nums[i%st]);
    }return ans;

        
    }
};