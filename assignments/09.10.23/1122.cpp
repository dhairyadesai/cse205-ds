class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        
        for(auto& x:arr1){
            mp[x]++;
            
        }
        vector<int> res;

        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<mp[arr2[i]];j++){
                res.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);

        }
        for(auto i:mp){
            for(int j=0;j<mp[i.first];j++){
                res.push_back(i.first);
            }
        }
        return res;
    }
};