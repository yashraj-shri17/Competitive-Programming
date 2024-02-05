#include <stdio.h>
int numbers(int x){
   if(x<=0) return ;
   numbers(x-1);
   printf("%d\n",x);

}

int main() {
    int n ;
    scanf("%d",&n);
    numbers(n);
    return 0;
}