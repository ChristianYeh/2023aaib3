int main(){
    int a,b;
    vector<int> A,B;
    while(cin>>a>>b){
        A.push_back(a); //�Ʀra ��J�}�CA
        B.push_back(b); //�Ʀrb ��J�}�CB
    }//�ؼ� A,B�q�p��j�Ʀn
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        //cout<<A[i]<<" ";
        ans+=abs(A[i]-B[i]);
    }
    cout<<"�[�_�Ӫ����׬O"<<ans;
}
