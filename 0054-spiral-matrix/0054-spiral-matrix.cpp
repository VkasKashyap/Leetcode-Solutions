class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowbeg = 0;
        int rowend = matrix.size()-1;
        int colbeg = 0;
        int colend = matrix[0].size()-1;
        vector<int> ans;
        while(rowbeg <= rowend && colbeg <= colend){
            for(int j=colbeg ; j<=colend ; j++){
                ans.push_back(matrix[rowbeg][j]);
            }
            rowbeg++;
            for(int i=rowbeg ; i<=rowend ; i++){
                ans.push_back(matrix[i][colend]);
            }
            colend--;
            if(rowbeg <= rowend){
                for(int j=colend ; j>=colbeg ; j--){
                ans.push_back(matrix[rowend][j]);
                }
                rowend--;
            }
            if(colbeg <= colend){
                
                for(int i=rowend ; i>=rowbeg ; i--){
                    ans.push_back(matrix[i][colbeg]);
                }
                colbeg++;
            }
        }
        return ans;
    }
};