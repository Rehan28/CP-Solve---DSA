
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int x = max(a[0],a[1]);
        int y = max(a[2],a[3]);
        sort(a,a+4);
        if((x == a[2] && y == a[3]) || (x == a[3]&&y ==a[2]))
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;
        }


    }
 }
