int factorialRange(int start,int end){
    int fact=1;
    for(int i=start;i<=end;i++){
        if(i==0){
            return 1;
        }
        fact=fact*i;
    }
    return fact;
}