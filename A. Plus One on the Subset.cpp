
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n[1000],x[1000],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
        {
            scanf("%d",&x[j]);
        }

        sort(x,x+n[i]);

        printf("%d\n",x[n[i]-1]-x[0]);


    }



}
