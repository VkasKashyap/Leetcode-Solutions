class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<char> matrix(9, 0);
        for(int i=0;i<moves.size();i=i+2){
            if(moves[i] == vector<int>{0,0})   matrix[0] = 'X';
            else if(moves[i] == vector<int>{0,1})  matrix[1] = 'X';
            else if(moves[i] == vector<int>{0,2})  matrix[2] = 'X';
            else if(moves[i] == vector<int>{1,0})  matrix[3] = 'X';
            else if(moves[i] == vector<int>{1,1})  matrix[4] = 'X';
            else if(moves[i] == vector<int>{1,2})  matrix[5] = 'X';
            else if(moves[i] == vector<int>{2,0})  matrix[6] = 'X';
            else if(moves[i] == vector<int>{2,1})  matrix[7] = 'X';
            else if(moves[i] == vector<int>{2,2})  matrix[8] = 'X';
        }
        for(int i=1;i<moves.size();i=i+2){
            if(moves[i] == vector<int>{0,0})   matrix[0] = '0';
            else if(moves[i] == vector<int>{0,1})  matrix[1] = '0';
            else if(moves[i] == vector<int>{0,2})  matrix[2] = '0';
            else if(moves[i] == vector<int>{1,0})  matrix[3] = '0';
            else if(moves[i] == vector<int>{1,1})  matrix[4] = '0';
            else if(moves[i] == vector<int>{1,2})  matrix[5] = '0';
            else if(moves[i] == vector<int>{2,0})  matrix[6] = '0';
            else if(moves[i] == vector<int>{2,1})  matrix[7] = '0';
            else if(moves[i] == vector<int>{2,2})  matrix[8] = '0';
        }

        if(matrix[0] == 'X' && matrix[1] == 'X' && matrix[2] == 'X')   return "A";
        if(matrix[3] == 'X' && matrix[4] == 'X' && matrix[5] == 'X')   return "A";
        if(matrix[6] == 'X' && matrix[7] == 'X' && matrix[8] == 'X')   return "A";
        if(matrix[0] == 'X' && matrix[3] == 'X' && matrix[6] == 'X')   return "A";
        if(matrix[1] == 'X' && matrix[4] == 'X' && matrix[7] == 'X')   return "A";
        if(matrix[2] == 'X' && matrix[5] == 'X' && matrix[8] == 'X')   return "A";
        if(matrix[0] == 'X' && matrix[4] == 'X' && matrix[8] == 'X')   return "A";
        if(matrix[2] == 'X' && matrix[4] == 'X' && matrix[6] == 'X')   return "A";

        if(matrix[0] == '0' && matrix[1] == '0' && matrix[2] == '0')   return "B";
        if(matrix[3] == '0' && matrix[4] == '0' && matrix[5] == '0')   return "B";
        if(matrix[6] == '0' && matrix[7] == '0' && matrix[8] == '0')   return "B";
        if(matrix[0] == '0' && matrix[3] == '0' && matrix[6] == '0')   return "B";
        if(matrix[1] == '0' && matrix[4] == '0' && matrix[7] == '0')   return "B";
        if(matrix[2] == '0' && matrix[5] == '0' && matrix[8] == '0')   return "B";
        if(matrix[0] == '0' && matrix[4] == '0' && matrix[8] == '0')   return "B";
        if(matrix[2] == '0' && matrix[4] == '0' && matrix[6] == '0')   return "B";

        for(int i=0;i<9;i++){
            if(matrix[i] == 0){
                return "Pending";
            }
        }
        return "Draw";
    }
};