class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size()-1;

        if(nums[n]==n)
            return n+1;

        int s=0;
        int e=n;
        while(s<=e){
            int mid= s+(e-s)/2;
            if(nums[mid]==mid)
                s=mid+1;
            else
                e=mid-1;
        }
        return s;
        
    }
};