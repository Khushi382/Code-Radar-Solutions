void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        char min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            char temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}

void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}