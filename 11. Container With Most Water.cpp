class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();        
        int ans=0;
        int i=0, j=n-1;
        while(i<=j){
            ans=max(ans,min(nums[i],nums[j])*(j-i));
            if(nums[i]>=nums[j])j--;
            else i++;
        }
        return ans;
    }
};
