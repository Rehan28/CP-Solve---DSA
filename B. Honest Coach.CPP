#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        sort(a,a+n);
        int gap[n];
        for(int i=0;i<n-1;i++)
        {
            gap[i] =  a[i+1]-a[i];
        }
        sort(gap,gap+(n-1));
        cout<<gap[0]<<endl;
    }
}
