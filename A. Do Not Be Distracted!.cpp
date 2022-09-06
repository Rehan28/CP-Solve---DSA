
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
        char a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int count = 0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
              continue;
            }
            else{
                for(int j=i+1;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        count++;
                        break;
                    }
                }
            }
            if(count == 1)
            {
                count = 5;
                break;
            }
        }
        if(count==5)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
