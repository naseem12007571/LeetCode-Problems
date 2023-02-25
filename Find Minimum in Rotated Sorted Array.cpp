class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minimum = nums[0];
        for(int i=1; i<n; i++){
            minimum = min(nums[i], minimum);
        }
        return minimum;
    }
};
