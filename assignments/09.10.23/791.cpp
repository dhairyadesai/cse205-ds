class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>m;
        int i=0;
        for(auto&x:order){
            m[x]=i;
            i++;
        }

        sort(s.begin(),s.end(),[&](auto&a,auto&b){return m[a]<m[b];});
        return s;
        
    }
};