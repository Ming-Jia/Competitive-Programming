#include <stdio.h>

int main(){
    int c; scanf("%d", &c);
    int cn = 1;
    while (c != 0) {
        int shouldGiveTreat = 0, givenTreat = 0;
        while (c--) {
            int i; scanf("%d", &i);
            
            if (i > 0) shouldGiveTreat++;
            else givenTreat++;
        }
        
        printf("Case %d: %d\n", cn++, (shouldGiveTreat - givenTreat));
        
        scanf("%d", &c);
    }
}