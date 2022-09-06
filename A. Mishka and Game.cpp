
#include<bits/stdc++.h>

using namespace std;

//Muku28

int main()
{
    int n;
    cin>>n;
    int m[n],c[n];
    int mis = 0;
    int ch = 0;
    for(int i=0;i<n;i++)
    {

        cin>>m[i]>>c[i];
        if(m[i]>c[i])
        {
            mis++;
        }
        else if(m[i]<c[i])
        {
            ch++;
        }

    }
    if(mis>ch)
    {
        cout<<"Mishka"<<endl;
    }
    else if(ch>mis){
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }


}
