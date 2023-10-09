class Solution {
public:
    string removeStars(string s) {
    stack <char> s1;
    for(int i=0;i<s.length();i++){
        if(s[i]!='*'){
            s1.push(s[i]);

        }else{
            if(!s1.empty()){
                s1.pop();
            }
        }
    }
    string ans="";
    while(!s1.empty()){
        ans+=s1.top();
        s1.pop();
    } 
    reverse(ans.begin(),ans.end());
    return ans; 
    }
};