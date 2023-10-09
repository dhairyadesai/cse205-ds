class Solution {
public:
    int calPoints(vector<string>& o) {
    int sum=0;
    stack<int> s;

    for(auto x: o){
        if(x=="D"){
            int x= s.top();
            s.push(2*x);
            sum+=s.top();
        }else if(x=="C"){
            sum-=s.top();
            s.pop();
        }else if(x=="+"){
            int x=s.top();
            s.pop();
            int y=s.top();
            int z=x+y;
            s.push(x);
            s.push(z);
            sum+=s.top();
        }else{
            s.push(stoi(x));
            sum+=s.top();
        }
    }return sum;
    }
};