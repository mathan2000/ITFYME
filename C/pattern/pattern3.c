#include <stdio.h>
int main() {
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}