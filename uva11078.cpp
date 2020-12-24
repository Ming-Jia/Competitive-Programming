// UVa 11078 - Open Credit System

#include <cstdio>
using namespace std;

int main(){
    int c; scanf("%d", &c);
    
    while (c--) {
        int result = -1e9;
        
        int t; scanf("%d", &t);
        int max; scanf("%d", &max); t--;
        
        while (t--) {
            int cur; scanf("%d", &cur);
            if (max - cur > result) result = max - cur;
            if (cur > max) max = cur;
        }
        printf("%d\n", result);
    }
}