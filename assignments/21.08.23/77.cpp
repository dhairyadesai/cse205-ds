class Solution {
public:
    void com(int i,int n, int k, vector <int>& temp, vector <vector<int>>& ans){
        if(k==0){
            ans.push_back(temp);
            return;
        }if(i>n) return;

        temp.push_back(i);
        com(i+1,n,k-1,temp,ans);
        temp.pop_back();
        com(i+1,n,k,temp,ans);

        
    }

    vector<vector<int>> combine(int n, int k) {
        vector <int> temp;
        vector<vector<int>> ans;
        com(1,n,k,temp,ans);

        return ans;
        
    }
};
