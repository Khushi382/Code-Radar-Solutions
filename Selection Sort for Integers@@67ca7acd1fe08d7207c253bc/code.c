int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=j;
            }
            if(min!=0){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d "arr[i]);
    }
}