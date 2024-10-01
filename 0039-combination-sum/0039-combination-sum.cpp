class Solution {
public:

void findcombination(vector<int>& arr,int target,vector<vector<int>>& ans, vector<int>& ds,int i){
    if(i==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[i]<=target){
        ds.push_back(arr[i]);
        findcombination(arr,target-arr[i],ans,ds,i);
        ds.pop_back();
    }
    findcombination(arr,target,ans,ds,i+1);
    
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(candidates,target,ans,ds,0);
        return ans;
    }
};