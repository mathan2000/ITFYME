/* 
    Simple Hello world Program
    By ITfyMe.com 
*/
#include <stdio.h>
#define const length,breadth
int main(int argc, char *argv[]) {
int length,breadth,area;
float feet;
printf("enter length and breadth \n");
scanf("%d %d",&length,&breadth);
area=length*breadth;
printf("Area of rectangle %d\n",area);
feet=area*3.281;
printf("feet value of area = %f \n",feet);
}
