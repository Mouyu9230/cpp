#include <stdio.h>
#include <ctype.h>
int main(){
    int ch;
    int upper = 0;
    int lower = 0;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)){
            upper++;
        }
        else if (islower(ch)){
            lower++;
        }
    }
    printf("upper:%d\nlower:%d", upper,lower);
    return 0;
}
