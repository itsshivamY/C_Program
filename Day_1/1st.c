#include<stdio.h>
void main(){
    int age,salery;
    printf("Enter age & Salery");
    scanf("%d %d",&age,&salery);
    if(age<100){
        if(salery < 60000){
            salery=salery+10000;
            printf("now your Salery is %d",salery);
            printf("And your age is %d\n",age);
        }
        else{
            salery=salery+5000;
            printf("Now your Salery is %d \n",salery);
            printf("And your age is %d\n",age);
        }
    }
}