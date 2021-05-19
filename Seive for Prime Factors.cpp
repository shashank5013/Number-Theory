//precalculates  prime factors  in O(NloglogN) time . Prime factorisation takes O(logN) time
#include<vector>
using namespace std;
const int N=(int)1e7+1;             
vector<int>prime(N,-1);
void seive(){
    for(int i=2;i*i<N;i++){
        if(prime[i]==-1){
            prime[i]=i;
            for(int j=i*i;j<N;j+=i){
                prime[j]=i;
            }
        }
    }
}