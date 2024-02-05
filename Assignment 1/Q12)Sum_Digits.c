#include <stdio.h>
#include <math.h>
int SumOfDigits(int x){
    int y;
    if(x!=0){
    y = (x % 10) + SumOfDigits(x/10);
    return y  ;
 
}
}

int main() {
    int n,m;
    scanf("%d",&n);
    m = SumOfDigits(n);
    printf("%d",m);
    return 0;
}