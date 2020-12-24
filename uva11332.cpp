// UVa 11332 - Summing Digits

#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    while (n != 0) {
        while (n >= 10) {
            int tmp = 0;
            while (n > 0) {
                tmp += n % 10;
                n /= 10;
            }
            n = tmp;
        }
        
        printf("%d\n", n);
        scanf("%d", &n);
    }
}
