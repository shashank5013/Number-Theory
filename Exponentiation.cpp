int exp(int a,int b){
    int extra=1;
    while(b){
        if(b%2){extra*=a;}
        a*=a;
        b/=2;
    }
    return extra;
}