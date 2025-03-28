#include <math.h>

int binarySearch(int arr[],int n, int target){
    int right=n-1;
    int left=0;
    int mid=ceil((left+right)/2);
    while(left<=right){
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
}