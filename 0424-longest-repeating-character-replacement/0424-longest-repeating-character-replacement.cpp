class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, j=0, maxf=0;
        int maxlen=0;
        
       int hash[26]={0};
        while(j<s.size()){
            hash[s[j]-'A']++;
            maxf=max(maxf,hash[s[j]-'A']);
            if((j-i+1)-maxf>k){
                (hash[s[i]-'A'])--,maxf=0;
                i++;
            }
           
            maxlen=max(maxlen,j-i+1);
            j++;
            
        }
        return maxlen;
    }
};