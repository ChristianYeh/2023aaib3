class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //s + s�˽��Y��
        string s2 = s + s;
        int N = s.length();
        return s2.substr(1,N*2-2).find(s) != string::npos; //npos����.�S���o�Ӧ�m,�ܤj�ܤj
    }
};
