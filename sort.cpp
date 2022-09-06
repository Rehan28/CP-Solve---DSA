
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int a[n];
    int temp;

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a[0],n[n]);

    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
}
