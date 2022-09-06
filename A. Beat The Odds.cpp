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
        int x[100000];
        int odd = 0;

        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            if(x[i]%2!=0)
            {
                odd++;
            }

        }
        if(odd==n)
        {
            cout<<0<<endl;
        }
        else if(odd>n/2)
        {
           cout<<(n-odd)<<endl;
        }
        else
        {
          cout<<odd<<endl;
        }
    }
}
