#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+1e5+10;
const int inf = 9999999;
int vis[maxn];
int main()
{
    int n,a;
    int min;
    int m;
    while(cin>>n)
    {
        min=1000000,m=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            vis[a]=i;
        }

        for(int i=0;i<=200000;i++)
        {
            if(vis[i]&&vis[i]<min)
            {
               min=vis[i];
               m=i;
            }
        }
        cout<<m<<endl;

    }
}
