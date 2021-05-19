#include<vector>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>

//multiplies two matrices
vvi mul(vvi a,vvi b){
    int row_a=a.size(),col_a=a[0].size(),row_b=b.size(),col_b=b[0].size();
    if(col_a!=row_b){return vvi();}
    vvi res(row_a,vi(col_b));
    for(int i=0;i<row_a;i++){
        for(int j=0;j<col_b;j++){
            int sum=0;
            for(int k=0;k<col_a;k++){
                sum=(sum +(a[i][k]*b[k][j]))%mod;
            }
            res[i][j]=sum;
        }
    }
    return res;
}

//finds a^b where a is a matrix in log(b) time
//a must be of order n*n
vvi matexp(vvi a,int b){
    vvi extra(a.size(),vi(a[0].size(),0));
    for(int i=0;i<a.size();i++){extra[i][i]=1;}
    while(b){
        if(b%2){
            extra=mul(extra,a);
        }
        a=mul(a,a);
        b/=2;
    }
    return extra;
}
