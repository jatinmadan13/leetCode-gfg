class Solution {
public:

int func(vector<int>& bloomDay, int mid, int k){
    int cnt=0;
    int no=0;
    int n=bloomDay.size();
    for(int i=0;i<n;i++){
     if(bloomDay[i]<=mid){
        cnt++;
        if(cnt==k){
            no++;
            cnt=0;
        }
     }
     else{
        cnt=0;
     }
    }return no;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int  n=bloomDay.size();
     long long tf=(long long)m*k;
     if(tf>n){
        return -1;
     }

       int low = *min_element(bloomDay.begin(), bloomDay.end()); 
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low<=high){
             int mid=(low+high)/2;
             int ans=func(bloomDay,mid,k);
             if(ans<m) {low=mid+1;}
             else {high=mid-1;}
        }
        return low;
    }
};