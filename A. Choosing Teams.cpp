#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count = 0;
    int x[2000];
    while(n--)
    {
        cin>>x[n];
        if(((5-k)+x[n])>=0)
        {
            count++;
        }
    }
    cout<<(count/3)<<endl;

}
