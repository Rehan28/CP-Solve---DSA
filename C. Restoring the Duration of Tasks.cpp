
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
        int f[n],s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }

        cout<<(f[0]-s[0])<<" ";

        for(int i=1;i<n;i++)
        {
            if(f[i-1]>s[i])
            {
                s[i] = f[i-1];
            }
            cout<<f[i]-s[i]<<" ";
        }
        cout<<endl;
    }
 }
