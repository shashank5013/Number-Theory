const int mod=(int)1e9+7;
int modexp(int a,int b){
    int extra=1;
    while(b){
        if(b%2){extra=(extra*a)%mod;}
        a=(a*a)%mod;
        b/=2;
    }
    return extra;
}