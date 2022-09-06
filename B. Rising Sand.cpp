
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k==1)
        {
            if(n%2==0)
            {
                n = n/2;
                cout<<(n-1)<<endl;
            }
            else
            {
                n = n/2;
                cout<<n<<endl;
            }
        }
        else
        {
             int count = 0;

             for(int i=1;i<n-1;i++)
        {
            int sum = a[i-1] + a[i+1];
            if(sum <a[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
        }

    }
 }
