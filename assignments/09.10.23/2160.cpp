class Solution {
public:
    int minimumSum(int num) {
        string nums=to_string(num);
        sort(nums.begin(),nums.end());

        int x = 10*(nums[0]-'0') +nums[2]-'0';
        int y = 10*(nums[1]-'0') +nums[3]-'0';
        return x+y;
        
    }
};