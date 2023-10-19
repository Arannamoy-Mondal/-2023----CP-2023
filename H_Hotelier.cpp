#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[10]={0};
    string s;
    cin>>s;
    int l=0,r=9;
    for(int i=0;i<t;i++)
    {
        if(s[i]=='L')
        {
            while(a[l])l++;
            a[l]=1;

        }
        else if (s[i]=='R')
        {
            while(a[r])r--;
            a[r]=1;
            
        }

        else
        {
            int x=s[i]-'0';
            a[x]=0;
            l=min(x,l);
            r=max(x,r);
        }
        
    }
    for(int i=0;i<10;i++)cout<<a[i];
}