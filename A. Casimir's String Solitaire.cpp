
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i=0;i<s.length();i++)
        {
           if(s[i] == 'A')
           {
               a++;
           }
           else if(s[i] == 'B')
           {
               b++;
           }
           else
           {
               c++;
           }
        }
        if((a == b || a == b-c) && (b==c || c == b-a))
        {
            if(a==b && b==c)
            {
            cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
