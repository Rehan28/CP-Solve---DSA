
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int count = 0;
    for(int i=0;i<n;i++)
    {
       count = count + a[n-1]-a[i];
    }
    cout<<count<<endl;
}
