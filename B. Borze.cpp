
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    string x;
    getline(cin,x);
    //cout<<x[0];
    int n = x.size();

    int i = 0;


    string y;
    int j = 0;

    while(i<n)
    {
        if(x[i]=='.')
        {
           cout<<"0";
            i++;
        }
        else{
            if(x[i+1]=='.')
            {
                cout<<"1";
            }
            else{
                cout<<"2";
            }
            i = i+2;
        }
        //j++;
        //cout<<n;
    }
    cout<<endl;
}
