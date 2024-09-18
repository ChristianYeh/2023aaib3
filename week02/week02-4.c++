class Solution {  //find the different
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //陣列超大,都設為0
        for(char c: s){ //真 對左顛仄串s 裡面的每個字c
            H[c]++;

        }
        for(char c : t){ //針對右邊的字串t 裡面的字c
            H[c]--; //用掉剛剛累積的那個 H[c]++;
            if(H[c]<0) return c; //不夠用? 找到兇手了!!!



        }
        return 0;
    }
};