#include<stdio.h>
int main(){
    char input[1000000];
    while (fgets(input, sizeof(input), stdin) != nullptr) {
        printf("%s", input);
    }
}
