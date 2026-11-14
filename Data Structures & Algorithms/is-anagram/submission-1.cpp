class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>sFreq;
        unordered_map<char,int>tFreq;
        for(int i =0; i<s.size(); i++) {
            sFreq[s[i]]++;
        }
        for(int i =0; i<t.size(); i++) {
            tFreq[t[i]]++;
        }
        if(sFreq == tFreq) {
            return true;
        }
        return false;
    }
};
