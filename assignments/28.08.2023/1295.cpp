class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
    for(int i=0;i<nums.size();i++){
        
        int a = nums[i];
        string s = to_string(a);
        int n = s.length();
        if(n%2 ==0){
            count++;

        }
    }return count;    
    }
};