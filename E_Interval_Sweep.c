#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}