#include <stdio.h>
int main() {
    int arr[] = {2,5,3,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n-1;i++){
       int j = i+1;
       while(arr[j]<arr[j-1]){
           int temp = arr[j];
           arr[j] = arr[j-1];
           arr[j-1] = temp;
           j--;
       }
}
    for(int i = 0;i<n ; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}