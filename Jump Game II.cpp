class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int en=n;
        int ans=0;
        int i=0;
        if(n==1){
            return 0;
        }
       while(true){
           if(nums[i]+i+1>=en){
               en=i+1;
               ans++;
               i=0;
           }
           else{
               i++;
           }
           if(en==1){
               break;
           }
       }
       return ans;
    }
};
