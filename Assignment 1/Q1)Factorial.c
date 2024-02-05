
#include <stdio.h>
int factorial(int x){
    if(x==1 || x==0) return 1;
    else if(x<0) printf("does not exist");
    else{
    return x* factorial(x-1);
}
}

int main() {
    int n ;
    scanf("%d",&n);
    int y=factorial(n);
    printf("%d",y);
    return 0;
}