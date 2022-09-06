
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int x = n/2;
        int sum1 = 0,sum2 = 0;
        for(int i=n-1;i>=(n-x);i--)
        {
            sum1 = sum1 + pow(2,i);
        }
        for(int i=1;i<=(x-1);i++)
        {
            sum2 = sum2 + pow(2,i);
        }
        sum2 = sum2 + pow(2,n);
        cout<<(sum2-sum1)<<endl;

    }
 }
