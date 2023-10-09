class Solution {
public:
    bool backspaceCompare(string s, string t) {

    stack<char> s1;
    stack<char> s2;

    for(auto x:s){
        if(x!='#'){
            s1.push(x);
        }else{
            if(!s1.empty())
                s1.pop();
        }
    }
    for(auto x:t){
        if(x!='#'){
            s2.push(x);
        }else{
            if(!s2.empty())
                s2.pop();
        }
    }
     return s1==s2;   
    }
};