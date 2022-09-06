#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x[4];
    int a,b,c;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    cout<<x[3]-x[2]<<" ";
    cout<<x[3]-x[1]<<" ";
    cout<<x[3]-x[0]<<endl;
}
