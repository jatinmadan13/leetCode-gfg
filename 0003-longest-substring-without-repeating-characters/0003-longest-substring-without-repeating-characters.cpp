class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int left=0;
        int maxlength=0;
        for(int right=0;right<s.length();right++){
            if(charset.count(s[right])==0){
                charset.insert(s[right]);
                maxlength=max(maxlength,right-left+1);
            }
            else {
                while (charset.count(s[right])){
                    charset.erase(s[left]);
                    left++;
                }
                charset.insert(s[right]);
            }
        }
        return maxlength;
    }
};