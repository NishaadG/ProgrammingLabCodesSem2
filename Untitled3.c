#include<stdio.h>

int main()
{
    int a[6],i,s;
    float t;
    printf("enter marks of student:");
    for(i=0;i<=5;i++)
    {
    scanf("%d",&a[i]);
    printf("a[%d]=%d \n",i,a[i]);
    }
    s=a[0]+a[1]+a[2]+a[3]+a[4]+a[5];
    t=s/5;
    printf("agregate marks:%f",t);
}


