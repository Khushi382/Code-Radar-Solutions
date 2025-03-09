int fibonacciSeries(int  n){
    static int t1=0;
    static int t2=1;
    int nt;
    if(n!=0){
        nt=t1+t2;
        printf(" %d",nt);
        t1=t2;
        t2=nt;
        
        fibonacciSeries(n-1);
    }

}