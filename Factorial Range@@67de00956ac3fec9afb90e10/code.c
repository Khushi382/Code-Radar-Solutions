int factorialRange(int start,int end){
    int fact=1;
    for(int i=start;i<=end;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}