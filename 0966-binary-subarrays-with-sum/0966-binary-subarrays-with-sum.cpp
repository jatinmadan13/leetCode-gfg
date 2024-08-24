class Solution {
public:
    int atmostSubarray(vector<int>& nums, int goal) {
        if(goal<0)
        return 0;
        int i=0,j=0,sum=0,count=0;
        while(j<nums.size()){
            sum+=nums[j];
            
            while(sum>goal){
                sum=sum-nums[i];
                i=i+1;
            }
            
            count=count+(j-i+1);
            j=j+1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostSubarray(nums,goal)-atmostSubarray(nums,goal-1);
    }
};