#include <math.h>

int binarySearch(int arr[],int n, int target){
    int right=n-1;
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
    return -1;
}