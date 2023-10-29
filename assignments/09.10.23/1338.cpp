class Solution {
public:
    int minSetSize(vector<int>& arr) {
    map<int,int> m;
    for(auto&x:arr){
        m[x]++;
    }

    vector<int>v;
    for(auto&x :m){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    int sz=arr.size()/2;

    int count=0;
    int c=0;
    for(int i=v.size()-1;i>=0;i--){
        if(sz<=count){
            break;
        }
        else{
            count+=v[i];
            c++;
        }
    }return c;
        
    }
};