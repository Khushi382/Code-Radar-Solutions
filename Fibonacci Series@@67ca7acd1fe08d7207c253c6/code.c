fibonacciSeries( n){
    static int t1=0;
    static int t2=1;
    int nt;
    if(n!=0){
        nt=t1+t2;
        t1=t2;
        t2=nt;
        printf("%d",nt);
        fibonacciSeries(n-1);
    }

}