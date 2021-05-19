int gcd(int a,int b){
    while(b){
        int temp=a;
        a=b%a;
        b=a;
    }
    return a;
}