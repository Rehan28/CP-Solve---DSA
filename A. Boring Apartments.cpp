
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        int s = n[0] - '0';
        //cout<<s;
        int sum = 0;
        for(int i=n.size();i>0;i--)
        {
            sum = sum + i;
        }
        cout<<(((s-1)*10)+sum)<<endl;

    }

}
