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
        int x[10000];

        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }

        if(n%2==0)
        {
           int count = 0;
           for(int i=0;i<n;i+=2)
             {
              if(x[i]!=x[i+1])
               {
                cout<<-1<<endl;
                count++;
                break;
               }
             }
            if(count==0)
             {
               for(int i=1;i<=n;i+=2)
                {
               cout<<(i+1)<<" "<<i<<" ";
                }
              }
        }

        else
            {
            if(x[0]==x[n-1])
            {
               cout<<n<<" ";
               for(int i=1;i<n;i++)
               {
              cout<<i<<" ";
               }
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        cout<<endl;


    }
}
