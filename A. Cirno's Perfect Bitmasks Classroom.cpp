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


        for(int i=0;;i++)
        {
            if(((n&i)>0) && ((n^i)>0))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
