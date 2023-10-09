class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int total= n*m;
    int count =0;

    int startingrow=0;
    int startingcolumn=0;
    int endingrow= m-1;
    int endingcolumn=n-1;  

    vector <int> ans;

    while(count<total){
        for(int i=startingcolumn; count<total && i<=endingcolumn;i++){
            ans.push_back(matrix[startingrow][i]);
            count++;
        }startingrow++;

        for(int i=startingrow; count<total && i<=endingrow;i++){
            ans.push_back(matrix[i][endingcolumn]);
            count++;
        }endingcolumn--;
        
        for(int i=endingcolumn; count<total && i>=startingcolumn;i--){
            ans.push_back(matrix[endingrow][i]);
            count++;
        }endingrow--;

        for(int i=endingrow; count<total && i>=startingrow;i--){
            ans.push_back(matrix[i][startingcolumn]);
            count++;
        }startingcolumn++;

        


    }return ans;

    }
};