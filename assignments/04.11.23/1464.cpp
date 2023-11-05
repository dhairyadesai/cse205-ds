class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int,vector<int>,greater<int>> minh;
        for(auto curr:nums) minh.push(curr);
        while(minh.size()!=2)   minh.pop();
        int a = minh.top();
        minh.pop();;
        int b = minh.top();
        return (a-1)*(b-1);
    }
};