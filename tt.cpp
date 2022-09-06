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
        int s = -1;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];

        }

        for(int i=0;i<=n;i++)
    {
             if(i%2==0)
            {
                s = i;
            }

            if(x[s]!=x[i])
            {
                if(x[0]!=x[n-1])
                {
                cout<<-1<<endl;
                s = -3;

                break;
                }
                else
                {
                    s = -2;
                }

        }
    }
        if(s==-2)
        {
           for(int i=1;i<=n;i+=2)
           {
               cout<<i+1<<" "<<i<<" ";
           }
        }

        else if(s!=-3)
        {
           cout<<n<<" ";
           for(int i=1;i<n;i++)
           {
              cout<<i<<" ";
           }

        }
        cout<<endl;


    }

}
