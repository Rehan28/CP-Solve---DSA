
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{

    string t[3];
    for(int i=0;i<3;i++)
    {
         cin>>t[i];
    }
    //int x = t[0].size()+t[1].size();
    string y = t[0]+t[1];
    //cout<<y;
    if(t[2].size()==y.size())
    {
        int count =0;
        sort(t[2].begin(), t[2].end());
        sort(y.begin(),y.end());
        for(int i=0;i<y.size();i++)
        {
            if(t[2][i]!=y[i])
            {
               count++;
               break;
            }
        }
        if(count == 0)
        {
           cout<<"YES"<<endl;
        }
        else
          cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

 }
