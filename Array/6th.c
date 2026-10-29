
#include<stdio.h>

int main(){
    int a[2][3], b[2][3], c[2][3], i, j;

    printf("Enter first matrix elements:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter second matrix elements:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nAddition of two matrices:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
