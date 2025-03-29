int isPrime(int a,int b){
    for(int i=a;i<=b;i++){
        isprime=1;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
    }
}
    
    

int printPrimeInRange(int a, int b){
    if(isprime){
        printf("%d ",i);
    }
}