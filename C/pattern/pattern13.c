#include<stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter a number \n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    
}