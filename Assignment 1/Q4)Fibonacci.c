#include <stdio.h>
int fibonacci(int x){
    if(x == 0 ) return 0;
    if(x==1) return 1;
    int y = fibonacci(x-1) + fibonacci(x-2);
    return y;
 
}

int main() {
    int n;
    scanf("%d",&n);
    int m = fibonacci(n-1);
    printf("%d",m);
    return 0;
}
