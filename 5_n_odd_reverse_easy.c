

// . Write a program to print the first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter no. of times  u want to print odd no. from begining in reverse order");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d  ",2*i-1);
    /* code */
    return 0;
}
