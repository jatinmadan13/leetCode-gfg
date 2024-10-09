class Solution {
public:
    int minAddToMakeValid(string s) {
        int i=0,j=0;
        for(auto c:s){
            if(c=='('){
                i++;
            }
            else{
                if(i>0)
                i--;
                else
                j++;
            }
        }
        return i+j;
    }
};