int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<min){
                min=j;
            }
        }
        if(min!=0){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
}