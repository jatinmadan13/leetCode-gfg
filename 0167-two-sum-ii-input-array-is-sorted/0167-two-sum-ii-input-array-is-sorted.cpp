class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=numbers.size()-1;
        int i=0;
        while(i<j){
            int total=numbers[i]+numbers[j];
            if(total==target){
                return {i+1,j+1};
            }else if(total>target){
                j--;
            }else {
                i++;
            }
        }
        return {-1,-1};
    }
};