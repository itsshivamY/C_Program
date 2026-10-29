#include<stdio.h>
int main(){
    int a[3][3],i,j,sr,sc;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter elements:%d %d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sr=sc=0;
        for(j=0;j<3;j++){
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sr=%d\nsc=%d\n",sr,sc);
    }
}