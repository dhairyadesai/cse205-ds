class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m;
        for(auto&x:nums){
            m[x]++;
        }
        vector<int> ans;

        for(auto&x:m){
            if(x.second==2)
                ans.push_back(x.first);
        }

        for(int i=1;i<=nums.size();i++){
            if(m[i]==0)
                ans.push_back(i);
        }
        return ans;
        
    }
};