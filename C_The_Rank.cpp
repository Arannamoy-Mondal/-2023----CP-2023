#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAXN 1005
using namespace std;
 
struct infor
{
    int a;
    int b;
    int c;
    int d;
    int num;
    int sum;
}x[MAXN];
 
bool cmp(infor q,infor p)
{
    if(q.sum == p.sum)
    {
        return q.num<p.num;
    }
    else
    {
        return q.sum>p.sum;
    }
}
int main()
{
    int n,i,sign;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>x[i].a>>x[i].b>>x[i].c>>x[i].d;
        x[i].num=i+1;
        x[i].sum = x[i].a + x[i].b + x[i].c + x[i].d;
    }
    sort(x,x+n,cmp);
    for(i=0;i<n;i++)
    {
        if(x[i].num==1)
        {
            cout<<i+1<<endl;
        }
    }
 
    return 0;
}