class Solution {
public:

   int capacity(vector<int>& weights, int mid){
    int sum=0;
    int days=1;
    for(int i=0;i<weights.size();i++){
        
        if(sum+weights[i]>mid){
            days=days+1;
            sum=weights[i];
        }
        else {
            sum+=weights[i];
        }
    }
    return days;
   }
   int sum(vector<int>& weights){
    int n=weights.size();
    int s=0;
    for(int i=0;i<n;i++){
         s+=weights[i];
    }
    return s;
   }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()), high=sum(weights);
        while(low<=high){
            int mid=(low+high)/2;
            int d=capacity(weights,mid);
            if(d>days){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};