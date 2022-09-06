
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        cout<<a[0]+a[1]+a[2]<<" "<<a[1]+a[2]<<" "<<a[2]<<endl;
    }
 }
