// 4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter no. of times  u want to print odd no. from begining");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d  ",2*i-1);
    /* code */
    return 0;
}
