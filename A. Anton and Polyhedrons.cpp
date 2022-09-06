
#include<bits/stdc++.h>

using namespace std;

//muku28

int main()
{
    int t;
    cin>>t;
    string s[t];
    int sum = 0;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
        if(s[i] == "Tetrahedron")
        {
          sum = sum + 4;
        }
        else if(s[i] == "Cube")
            sum +=6;
        else if(s[i] == "Octahedron")
            sum+=8;
        else if(s[i] == "Dodecahedron")
            sum+=12;
        else
            sum+=20;
    }
    cout<<sum<<endl;
 }
