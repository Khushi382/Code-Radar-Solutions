
void fibonacciSeries(int n) {
    static int t1 = 0, t2 = 1;
    int nt;
    for(int i=0;i<=n;i++){
        printf("%d "t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
}


