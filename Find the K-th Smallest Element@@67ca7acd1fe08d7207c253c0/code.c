int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n-1;j++){
            if(a[j]<min){
                min=j;
            }
        }
        if(min!=0){
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}