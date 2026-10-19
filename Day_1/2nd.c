#include<stdio.h>
void main(){
    int marks;
    printf("enter marks ");
    scanf("%d",&marks);
    if(marks>80){
        printf("Grade A");
    }
    else if(marks>70){
        printf("Grade B");
    }
    else if(marks>60){
        printf("Grade c");
    }
    else{
        printf("Grade D\n");
    }
    printf("\nEnd of Program\n ");
}