// uva10424 - Love Calculator
#include <cstdio>
#include <iostream>
using namespace std;

int calculateDigit(char *name1){
    int total = 0;

    for (int i = 0; name1[i]; i++) {
        int charVal = +tolower(name1[i]);
        if (charVal >= +'a' && charVal <= +'z') {
            total += charVal - 'a' + 1;
        }
    }
    
    while (total >= 10) {
        int tmp = 0;
        
        while (total > 0) {
            tmp += total % 10;
            total /= 10;
        }
        
        total = tmp;
    }

    return total;
}

int main() {
    char name1[40], name2[40];

    while(fgets(name1, sizeof(name1), stdin) && fgets(name2, sizeof(name2), stdin)){
        double n1 = calculateDigit(name1);
        double n2 = calculateDigit(name2);

        double total = n1 > n2 ? n2 / n1 : n1 / n2;
        total *= 100;

        printf("%.2f %%\n", total > 100 ? 100 : total);
    }
}
