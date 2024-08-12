class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0,l=0,r=0,zero=0;
        int len;
        while(r<nums.size()){
            if(nums[r]==0){
                zero++;
            }
            if(zero>k){
                if(nums[l]==0){
                    zero--;
                }
                l++;
            }
            if(zero<=k){
            len = r-l+1;
            maxlen=max(len, maxlen); }
            r++;
        }
        return maxlen;

    }
};