// Matrix Multiplication
#include <stdio.h>

int main() {
    int m,n,p,q,i,j,k;
    
    printf("omatrix 1:");
    scanf("%d%d",&m,&n);
    printf("omatrix 2:");
    scanf("%d%d",&p,&q);
    
    if(n!=p){
        printf("nooo");
        return 1;
    }

    int first[m][n],second[p][q],result[m][q];

    printf("enter mat1:");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&first[i][j]);

    printf("enter mat2:");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&second[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<q;j++){
            result[i][j]=0;
            for(k=0;k<n;k++)
                result[i][j]+=first[i][k]*second[k][j];    
    }
    printf("result:\n");

    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }  

    return 0;
}