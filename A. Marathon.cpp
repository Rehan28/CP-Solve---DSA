#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a[4];
     int count = 0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[0]<a[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    }

}
