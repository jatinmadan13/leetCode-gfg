class Solution {
public:
    vector<bool> isArraySpecial(vector<int> &A, vector<vector<int>> &Q){
        vector<int> P(A.size() , 0);
        for(int i = 1 ; i < A.size() ; i++){
            P[i] = P[i-1] + (A[i-1] % 2 != A[i] % 2);
        }
        vector<bool> ans;
        for(vector<int> &q : Q){
            int Count = P[q[1]] - P[q[0]];
            int Total = q[1] - q[0];
            if(Total == Count) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
