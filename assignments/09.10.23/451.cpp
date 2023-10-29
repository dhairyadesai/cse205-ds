class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(auto&x:s){
            m[x]++;
        }
        vector<pair<char,int>> v;
        for(auto&x:m){
            v.push_back(x);
        }

        sort(v.begin(),v.end(),[&](auto&a, auto&b){return b.second<a.second;});
        string ans="";
        for(int i=0;i<v.size();i++){
            auto& pair = v[i];
            int count=pair.second;
            while(count--){
                ans+=pair.first;
                

            }
        }return ans;
        
    }
};