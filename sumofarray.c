#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}

