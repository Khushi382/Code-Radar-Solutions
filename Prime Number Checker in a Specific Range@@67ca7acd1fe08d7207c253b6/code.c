int printPrimesInRange(int a,int b){
    int i;
    for(int i=a;i<=b;i++){
        int isPrime=1;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
        printf("%d ",i);
    }
    }
}
    
    

/*int printPrimeInRange(int a, int b){
    if(isPrime){
        printf("%d ",i);
    }
}*/