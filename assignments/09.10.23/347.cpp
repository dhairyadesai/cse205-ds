class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(auto &x:nums){
            m[x]++;
        }

        vector<pair<int,int>> v;

        for(auto&x:m){
            v.push_back(x);
        }

        sort(v.begin(),v.end(),[&](auto& a,auto&b){return b.second<a.second;});
        vector<int> ans;
        for(int i=0;i<k;i++){
            auto& pair=v[i];
            ans.push_back(pair.first);

        }return ans;
        
    }
};