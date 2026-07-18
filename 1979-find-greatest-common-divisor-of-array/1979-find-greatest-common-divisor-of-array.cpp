class Solution {
public:
    int getMax(vector<int>& nums){
        int n = nums.size();
        int maxi = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        return maxi;
    }
    int getMin(vector<int>& nums){
        int n = nums.size();
        int mini = nums[0];
        for(int i=1;i<n;i++){
            mini = min(mini, nums[i]);
        }

        return mini;
    }
    int findGCD(vector<int>& nums) {
        return gcd(getMax(nums), getMin(nums));
    }
};