#include <stdio.h>
int main ()
{
    int a,b=1,m,sum,temp,count=0,s,avg=0;
    printf("Enter number:");
    scanf("%d",&a);
    temp=a;
    for (a;a>0;a=a/10)
    {
        count++;
    }
    s=count;
    a=temp;
    for (b;b>0;a=a/10)
    {
        b=a%10;
        count=s;
        m=1;
        for (count;count>0;count--)
        {
            m=m*b;
        }
        avg=avg+m;
    }
    if (temp==avg)
    {
        printf("%d is an armstrong no.",temp);
    }
    else 
    {
        printf("%d is not an armstrong no.",temp);
    }
    return 0;
}

//Program of amstrong no. in C using while loop
#include <stdio.h>
int main ()
{
    int a,b=1,m,sum,temp,count=0,s,avg=0;
    printf("Enter number:");
    scanf("%d",&a);
    temp=a;
    while (a>0)
    {
        count++;
        a=a/10;
    }
    s=count;
    a=temp;
    while (b>0)
    {
        b=a%10;
        count=s;
        m=1;
        while (count>0)
        {
            m=m*b;
            count--;
        }
        avg=avg+m;
        a=a/10;
    }
    if (temp==avg)
    {
        printf("%d is an armstrong no.",temp);
    }
    else 
    {
        printf("%d is not an armstrong no.",temp);
    }
    return 0;
}
