int first_element_of_the_array(vector<int>& arr,int target){
        int low= 0;
        int high = arr.size()-1;
        int res = -1;
            while(low <= high){
                int mid = low +(high-low)/2;
                if(arr[mid] == target){
                    res = 1;
                    high = mid-1;
                }if(arr[mid] < target){
                    low = mid+1;
                }if(arr[mid] > target){
                    high = mid-1;
                }
            }
            if(res == -1){
                    return -1;
            }
return low; 
}
int last_element_of_the_array(vector<int>& arr,int target){
        int low= 0;
        int high = arr.size()-1;
        int res = -1;
            while(low <= high){
                int mid = low +(high-low)/2;
                if(arr[mid] == target){
                    res = 1;
                    low = mid+1;
                }if(arr[mid] > target){
                    high = mid-1;
                }if(arr[mid] < target){
                    low = mid+1;
                }
            }
            if(res == -1){
                return -1;
            }
    return high;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        if(nums.size()== 0){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        result.push_back(first_element_of_the_array(nums,target));
        result.push_back(last_element_of_the_array(nums,target));
        return result;
    }
};
