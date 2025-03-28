int factorialRange(int start,int end){
    if (start < 0 || start > end) {
        printf("Invalid range\n");
        return -1; 
    }

    int fact = 1;
    for (int i = start; i <= end; i++) {
        fact *= i;  
    }

    return fact;
}