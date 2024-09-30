class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int compliment=target-nums[i];
            if(mpp.count(compliment)){
                return {mpp[compliment],i};
            }
          else{
           mpp[nums[i]]=i;
          }
        }
        return{};
    }
};