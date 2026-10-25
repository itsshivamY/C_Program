#include <stdio.h>
int main(){
    int i = 1;
    do {
        int j = 3;
        do {
            printf("%d", --j);
        } while (j > 0);
        printf("%d", i++);
    } while (i < 4);
    return 0;
}