
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
        int n,m;
        cin>>n>>m;
        char a[n][m];
        int count = 0;
        int x = 0;
        int y =0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='R'&& count==0)
                {
                    x = j;
                    y = i;
                    count++;
                }
            }
        }
        count = 0;
        for(int i=y;i<n;i++)
        {
            for(int j=0;j<x;j++)
            {
                if(a[i][j]=='R')
                {
                    count++;
                }
            }
        }

        if(count==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
             cout<<"NO"<<"\n";
        }
    }
  return 0;
 }
