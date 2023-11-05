class Solution {
public:
    int largestInteger(int num) {

        priority_queue<int>odd;
        priority_queue<int>even;


        vector<int> digit, res;

        while(num){
            int x = num%10;
            digit.push_back(x);
            if(x%2==0){
                even.push(x);
            }else{
                odd.push(x);
            }
            num=num/10;
        }
        reverse(digit.begin(),digit.end());

        for(int i=0;i<digit.size();i++){
            if(digit[i]%2==0){
                res.push_back(even.top());
                even.pop();
            }else{
                res.push_back(odd.top());
                odd.pop();
            }
        }

        int ans=0;

        for(auto x: res){
            ans=ans*10 +x;
        }return ans;

        
    }
};