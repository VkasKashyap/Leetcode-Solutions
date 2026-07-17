class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                x *= -1;
            }
            else if(nums[i] > 0){
                x *= 1;
            }
            else{
                return 0;
            }
        }

        if(x > 0){
            return 1;
        }

        return -1;
    }
};