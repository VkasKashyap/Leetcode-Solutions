class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> nums = {0, 0};
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'U'){
                nums[1] += 1;
            }
            else if(moves[i] == 'D'){
                nums[1] -= 1;
            }
            else if(moves[i] == 'L'){
                nums[0] += 1;
            }
            else if(moves[i] == 'R'){
                nums[0] -= 1;
            }
        }
    	if(nums[0] == 0 && nums[1] == 0)    return true;
        return false;
    }
};