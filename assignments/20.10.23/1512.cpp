class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        for(auto&x:nums){
            m[x]++;
        }
        int count=0;

        for(auto&x:m){
            int n= x.second;
            count+= (n*(n-1))/2;
        }
        return count;
        
    }
};