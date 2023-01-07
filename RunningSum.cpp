class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp = 0;

        for(int i = 0; i < nums.size(); i++) {
            int temp1 = nums[i];
            nums[i] += temp;
            temp += temp1;
        }
        
        return nums;
    }
};