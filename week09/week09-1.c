class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        int i=0,j=0,dir=0;
        int dI[4]={0,1,0,-1};
        int dJ[4]={1,0,-1,0};

        vector<int> ans;
        for(int k=0;k<N-1;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
        }
        dir=(dir+1)%4;
        for(int kk=1;kk<M+1;kk++){
            for(int k=0;k<M-kk;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }
            dir=(dir+1)%4;
            for(int k=0;k<N-kk;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }
        dir=(dir+1)%4;
        }
        return ans;
    }
};
