#include<stdio.h>
void main(){
    int i,a,sum=0;
    for(i=1;i<=5;i++){
        printf("Enter an integer: ");
        scanf("%d",&a);
        if(a<0){
            continue;
        }
        sum=sum+a;
    }
    printf("sum = %d ",sum);
}