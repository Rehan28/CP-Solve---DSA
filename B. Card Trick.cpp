
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
         long long int b[x];
        long long int sum = 0;
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
            sum = sum + b[i];
        }
        int s = sum%n;
        cout<<a[s]<<"\n";

    }
  return 0;
 }
