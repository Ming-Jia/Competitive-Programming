#include <stdio.h>

int main(){
    int c; scanf("%d", &c);
    int n = 1;
    while (c--) {
        int l,w,h; scanf("%d %d %d", &l, &w, &h);
        printf("Case %d: %s\n", n++,(l <= 20 && w <= 20 && h <= 20) ? "good" : "bad");
    }
}