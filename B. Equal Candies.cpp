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
        int sum =0;
        int x[500];
        for(int j=0;j<n;j++){
                cin>>x[j];
                //cout<<x[i];
            }
         sort(x,x+n);
        cout<<x[0]<<endl;
        for(int j=1;j<n;j++)
        {
            sum = sum + (x[j]-x[0]);
        }
        cout<<sum<<endl;
    }
}
