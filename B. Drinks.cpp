#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;
    double a[t];
    double sum = 0.00;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    cout<<(sum/((double)t*100)*100)<<endl;
 }
