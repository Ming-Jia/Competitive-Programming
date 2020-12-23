#include <stdio.h>
#include <math.h>
#define lli long long int

int main(){
    lli t, n;
    int x = scanf("%lld", &t);

    while (t--){
        scanf("%lld", &n);
        printf("%lld\n", static_cast<lli>((-1 + sqrt(1 + 8 * n)) / 2));
    }
    
}
