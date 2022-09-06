

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
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
 }
