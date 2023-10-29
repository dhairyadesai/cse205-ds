class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int ans = 100000;

        for(int i=1;i<arr.size();i++){
            ans=min(ans,abs(arr[i]-arr[i-1]));

        }
        vector<vector<int>> res;

        for(int i=0;i<arr.size()-1;i++){
            if(abs(arr[i]-arr[i+1])==ans)
                res.push_back({arr[i],arr[i+1]});
            
        }
        return res;
        
    }
};