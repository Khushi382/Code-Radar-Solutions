#include <math.h>

int searchInRotatedArray(int arr[],int n, int target){
    /*int right=n-1;
    int left=0;
    while(left<=right){
         int mid=ceil((left+right)/2);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;*/


    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}