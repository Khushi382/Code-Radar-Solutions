int printPrimesInRange(int a,int b){
    int i;
    for(int i=a;i<=b;i++){
        int isPrime=1;
        if(i<=1){
            isPrime=0;
        }
        else
        {
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        }
        if(isPrime)
        {
        printf("%d ",i);
        }
        else{
            printf("No prime numbers");
        }
    }
}
    
    

/*int printPrimeInRange(int a, int b){
    if(isPrime){
        printf("%d ",i);
    }
}*/