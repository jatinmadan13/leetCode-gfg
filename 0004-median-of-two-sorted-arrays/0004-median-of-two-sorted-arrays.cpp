class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(); int n2=nums2.size();
        int i=0;
        int j=0;
        int cnt=0;
        int n=(n1+n2);
        int ind2=n/2;
        int ind1=ind2-1;
        int el1= -1; int el2= -1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(cnt==ind1) el1=nums1[i];
                if(cnt==ind2) el2=nums1[i];
                cnt++;
                i++;
            }else {
                if(cnt==ind1) el1=nums2[j];
                if(cnt==ind2) el2=nums2[j];
                cnt++;
                j++;
            }
        }
        while(i<n1){
            if(cnt==ind1) el1=nums1[i];
            if(cnt==ind2) el2=nums1[i];
            cnt++;
            i++;
        }
        while(j<n2){
            if(cnt==ind1) el1=nums2[j];
            if(cnt==ind2) el2=nums2[j];
            cnt++;
            j++;
        }
        if(n%2==1){
            return el2; 
        }else 
        return ((double)(el1+el2)/2.0);
    }
};