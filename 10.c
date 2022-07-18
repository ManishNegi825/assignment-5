/*Write a program to print a table of 5 */
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number to print a table for ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d ",i*n);
    }
    return 0;
}