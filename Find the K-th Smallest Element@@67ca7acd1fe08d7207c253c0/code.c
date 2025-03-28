int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
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