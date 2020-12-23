#include <stdio.h>

int main(){
    int c; scanf("%d", &c);
    int cn = 1;
    while (c--) {
        int numberOfSteps; scanf("%d", &numberOfSteps);
        int highJump = 0, lowJump = 0;
        
        int initPos; scanf("%d", &initPos);
        numberOfSteps--;
        while (numberOfSteps--) {
            int nextPos; scanf("%d", &nextPos);
            
            if (initPos < nextPos) {
                highJump++;
            } else if (initPos > nextPos) {
                lowJump++;
            }
            
            initPos = nextPos;
        }
        
        printf("Case %d: %d %d\n", cn++, highJump, lowJump);
    }
}