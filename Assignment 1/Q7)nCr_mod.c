#include <stdio.h>
unsigned long long nCrModM(int n, int r, int m) {
    if(n>=0 && r>=0){
    if (r == 0 || r == n)
        return 1;
    return (nCrModM(n - 1, r - 1, m) + nCrModM(n - 1, r, m)) % m;
}
}
int main() {
    int n, r, m;
    scanf("%d %d %d", &n, &r, &m);
    printf("%lu",nCrModM(n, r, m));
    return 0;
}