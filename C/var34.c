/* 
    Simple Hello world Program
    By ITfyMe.com 
*/

// include library
#include <stdio.h>
int main(int argc, char *argv[]) {
  int a,b;
printf("enter a and b\n");
scanf("%d %d",&a,&b);
printf("left shift value is %d \n",a<<b);
printf("right shift value is %d \n",a>>b);
}

