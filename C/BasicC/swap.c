// Write a program to swap two numbers without using the third variable?
#include<stdio.h>
int main() {
    int a,b;
    printf("Enter a and b \n");
    scanf("%d %d",&a ,&b);
    printf("Before swapping a = %d and b = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a = %d and b = %d",a,b);
}