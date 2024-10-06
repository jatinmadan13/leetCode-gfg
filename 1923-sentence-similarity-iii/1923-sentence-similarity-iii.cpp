class Solution {
public:
    vector<string> getvectorofstring(string &s){
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss>>word){
            v.push_back(word);
        }
        ss.clear();
        return v;
    }
    
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.length()<sentence2.length()){
            return areSentencesSimilar(sentence2,sentence1);
        }

        vector<string> vec1,vec2;
        vec1= getvectorofstring(sentence1);
        vec2= getvectorofstring(sentence2);
        int i=0, j=vec1.size()-1;
        int k=0, l=vec2.size()-1;
        
        while(k<vec2.size() && i<vec1.size() &&vec2[k] == vec1[i] ) {
            k++;
            i++;
        }  
        while(l>=k && vec2[l]==vec1[j]){
            j--;
            l--;
        }
        return l<k;
    }
};