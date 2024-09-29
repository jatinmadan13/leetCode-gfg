class Solution {
public:

int func(vector<int>& nums, int mid){
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)nums[i]/(double)mid);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
    while(low<=high){
        
        int mid=(low+high)/2;
        int div= func(nums,mid);
        if(div<=threshold){
            high=mid-1;
        }
        else {
            
            low=mid+1;
        }
    }
    return low;
}
};