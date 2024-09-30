class Solution {
public:

int func(vector<int>& nums,int mid){
    int n=nums.size();
    int l=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+nums[i]<=mid){
            sum+=nums[i];
        }
        else {
            l+=1;
            sum=nums[i];
        }
    }
    return l;
}
    int splitArray(vector<int>& nums, int k) {
    
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
             int mid=(low+high)/2;
             int split=func(nums,mid);
            if(split<k){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};