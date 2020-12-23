#include <stdio.h>

int main(){
    int c; scanf("%d", &c);
    int cn = 1;
    while (c--) {
        int numberOfClowns; scanf("%d", &numberOfClowns);
        int minSpeed; scanf("%d", &minSpeed);
        numberOfClowns--;
        
        while (numberOfClowns--) {
            int curSpeed; scanf("%d", &curSpeed);
            if (curSpeed > minSpeed) minSpeed = curSpeed;
        }
        
        printf("Case %d: %d\n", cn++, minSpeed);
    }
}
