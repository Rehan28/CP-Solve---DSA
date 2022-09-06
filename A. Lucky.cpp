#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        int sum1 =0;
        int sum2 = 0;
        for(int j=0;j<3;j++)
        {
            sum1 = sum1 + x[j];
            sum2 = sum2 + x[j+3];
        }
        if(sum1 == sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
