int factorialRange(int start,int end){
    int fact=1;
    for(int i=start;i<=end;i++){
        if(i==0){
            return 1;
        }
        if(start>end || start<0){
            printf("Invalid range");
        }
        else{
        fact=fact*i;
        }
    }
    return fact;
}