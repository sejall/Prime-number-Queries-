#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f=0,a,b,c=0;
    cin>>a>>b;
    int k[b];
    memset(k,0,sizeof(k));

    for(int i=a;i<=b;i++)
    {
    for(int j=2;j<b/2;j++)
    {
    if(i%j==0)
    {
    f=1;
    }
    else
    {
    k[c]=i;
    c++;
    }
    }
    }
    cout<<k[0]<<endl;
    cout<<k[c-1]<<endl;
    cout<<k[c-1]-k[0]<<endl;
    return 0;
}
