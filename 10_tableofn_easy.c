// 10. Write a program to print a table of N

#include<stdio.h>
int main()
{
    int i,n;
printf("enter no. u want to print table");
scanf("%d",&n);
    for ( i = 1; i<=10; i++)
    {
        printf("%d * %d  =  %d\n ",n,i,n*i);
        /* code */
    }
    
    /* code */
    return 0;
}