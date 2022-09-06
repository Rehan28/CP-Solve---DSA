#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int sum;
        int count = 0;
        sum = (n/2);
        if(sum%2==0)
        {
            cout<<"YES"<<endl;
            for(int j=2;j<=n;j+=2)
            {
                cout<<j<<" ";
                count++;
            }
            for(int j=1;j<n-1;j+=2)
            {
                cout<<j<<" ";
            }
            cout<<(n+(count-1))<<endl;

        }
        else
        {
           cout<<"NO"<<endl;
        }
    }
}
