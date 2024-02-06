#include <stdio.h>
int main() {
    int i,j;
    int a[1][3]={1,2,3};
    int t[3][1];
    
    for(i=0;i<1;i++){
        for(j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    
    for(i=0;i<1;i++)
        for(j=0;j<3;j++)
            t[j][i]=a[i][j];
    
    for(i=0;i<3;i++){
        for(j=0;j<1;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
    
    return 0;
}