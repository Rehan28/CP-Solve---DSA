
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[50];
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
                cin>>a[i];
            }

        sort(a,a+n);
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
           if(a[i]==a[i+1])
           {
              count++;
           }

        }
        if(count%2==0)
        {
            cout<<(n-count)<<endl;
        }
        else
        {
            count++;
             cout<<(n-count)<<endl;
        }


    }
}
