class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    return true;
                }
                    
            }
        // set<int>st(nums.begin(),nums.end());
        // return st.size()<nums.size();  
		
   return false;
}
        
        
    
};

