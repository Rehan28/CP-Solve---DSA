
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    string g = s;
   // cout<<g;


   for(int j=0;j<t;j++){

    for(int i=0;i<n;i++)
    {
        //int temp;
        if(s[i]=='B' && s[i+1]=='G')
        {
            swap(g[i],g[i+1]);
        }
    }
    s = g;
   }
    cout<<g<<endl;


 }
