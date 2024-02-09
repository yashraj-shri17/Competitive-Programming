#include <stdio.h>
#include <limits.h>
int main() {
    int arr[] = {2,5,3,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n-1;i++){
        int mn = INT_MAX;
        int mindx = -1;
        for(int j = i ;j<n ; j++){
            if(mn > arr[j]){
                mn = arr[j];
                mindx = j;
            }
        }
        int temp =arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }
    for(int i = 0;i<n ; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}