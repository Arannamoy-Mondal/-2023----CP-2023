#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
      int n;
      int a[100005];
      while(scanf("%d",&n)!=EOF)
      {
         int ans=0;
         for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
             sort(a+1,a+1+n);
         if(n==1||n==2)
             printf("0\n");
         if(n>=3)
         {
             int minn=a[1];
             int maxn=a[n];
             for(int i=2;i<=n-1;i++)
                 if(a[i]>minn&&a[i]<maxn)
                     ans++;
                     printf("%d\n",ans);
         }
     }
     return 0;}