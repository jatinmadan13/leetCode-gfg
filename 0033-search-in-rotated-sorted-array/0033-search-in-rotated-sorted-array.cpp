class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        
        while(left<=right){
             int n=(left+right)/2;
             if(target==nums[n]){
                return n;
             }
             if(nums[n]>=nums[left]){
                if (target<nums[n]&&nums[left]<=target){
                    right=n-1;
                }
                else {
                  left=n+1;
                }       
        }
        else {
            if(nums[n]<target&&target<=nums[right]){
                left=n+1;
            }
            else{
                right=n-1;
            }
        }
        }
        return -1;
    }
};