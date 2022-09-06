#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       int z;
       cin>>n>>z;
       int a[n];
       int b[n],c[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           b[i] = (a[i]|z);
           c[i] = (a[i]&z);
       }
       sort(b,b+n);
       sort(c,c+n);
       cout<<(max(b[n-1],c[n-1]))<<endl;

    }
 }
