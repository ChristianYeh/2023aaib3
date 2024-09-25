class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //s + s檢調頭尾
        string s2 = s + s;
        int N = s.length();
        return s2.substr(1,N*2-2).find(s) != string::npos; //npos對應.沒有這個位置,很大很大
    }
};
