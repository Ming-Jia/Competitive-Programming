#include<stdio.h>
#include <cmath>
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        n = (n * 567 / 9 + 7492) * 235 / 47 - 498;
        printf("%d\n", abs(n / 10 % 10));
    }
}