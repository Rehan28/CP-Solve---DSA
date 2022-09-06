#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n;
        cin>>m;
        cin>>k;
        string a;
        string b;

        cin>>a;
        cin>>b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int st = 0;
        int se = 0;

        for(int i=0;i<n+m;i++)
        {

            if(a[i]<=b[i]&&st!=k)
            {
                cout<<a[i];
                b[i+1]=b[i];
                se=0;
                st++;
            }
            else if(se!=k){
                 cout<<b[i];
                 a[i+1]=a[i];
                 se++;
                 st=0;
            }


            }
        //cout<<a;
    }
}
