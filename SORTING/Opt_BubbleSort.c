// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
int main() {
int arr[] = {5,0,2,0,0,3,4,0,1};
int n =sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n-1 ; i++ ){
        bool flag = true;
        for(int j =0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i =0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}