int isPrime(int a,int b){
    for(int i=a;i<=b;i++){
        for(int n=2;n*n<=i;n++){
            if(i%n==0){
                return 0;
            }
        }
    }
    return 1;
}
printPrimeInRange(a, b);