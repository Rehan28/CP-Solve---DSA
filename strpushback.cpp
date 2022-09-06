#include<bits/stdc++.h>

using namespace std;

int main()
{
    string rehan ;
    cin>>rehan;
    string output;
    for(int i=rehan.size()-1;i>2;--i)
    {
        output.push_back(rehan[i]);
    }
    cout<<output;
}
