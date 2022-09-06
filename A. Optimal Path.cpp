
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,m;
        cin>>n>>m;

        long long int sum = (m*(m+1))/2;
        //cout<<sum<<endl;
       /* for(int i=1;i<n;i++)
        {
            a[i] = a[i-1] + 1;
            sum = sum + a[i];
        }*/
        //cout<<sum<<endl;
       for(int i=2;i<=n;i++)
       {
           sum = sum + (i*m);
       }


        //cout<<sum<<endl;
        cout<<(sum)<<endl;


    }
 }
