#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        int count =0;
        do{
            a = a/b;
            //b++;
            count++;
        }
        while(a!=0);

        cout<<count<<endl;
    }
}
