#include <stdio.h>
#include <string>
using namespace std;
int main(){
    int c = 1;
    char input[10000];
    scanf("%s", input);
    while (input[0] != '#') {
        string i(input);

        printf("Case %d: ", c++);
        if (i.compare("HELLO") == 0) {
            printf("ENGLISH\n");
        } else if (i.compare("HOLA") == 0) {
            printf("SPANISH\n");
        } else if (i.compare("HALLO") == 0) {
            printf("GERMAN\n");
        } else if (i.compare("BONJOUR") == 0) {
            printf("FRENCH\n");
        } else if (i.compare("CIAO") == 0) {
            printf("ITALIAN\n");
        } else if (i.compare("ZDRAVSTVUJTE") == 0) {
            printf("RUSSIAN\n");
        }  else {
            printf("UNKNOWN\n");
        }
        
        scanf("%s", input);
    }
}
